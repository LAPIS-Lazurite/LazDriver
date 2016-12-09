/* subghz_api.c
 *
 * Copyright (c) 2015  Lapis Semiconductor Co.,Ltd.
 * All rights reserved.
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see
 * <http://www.gnu.org/licenses/>.
 */


#ifdef LAZURITE_IDE
#include "lazurite.h"
#include "hal.h"
#include "string.h"
#include "lp_manage.h"
#include "driver_irq.h"
#else
#include <linux/string.h>
#include <linux/sched.h>
#include <linux/wait.h>
#endif

#include "subghz_api.h"
#include "mach_lazurite.h"
#include "common_lazurite.h"
#include "errno.h"
// @issue why application layer access to hardware if
#include "hwif/hal.h"
#include "aes/aes.h"

#define INIT_SLEEP
//#define TEST_SEND_INTERVAL


#ifndef LAZURITE_IDE
extern wait_queue_head_t tx_done;
extern int que_th2ex;
#endif

// this proto-type is for linux
static void subghz_decMac(SUBGHZ_MAC_PARAM *mac,uint8_t *raw,uint16_t raw_len);

// local parameters
static struct {
	uint8_t addrType;
	SUBGHZ_STATUS tx_stat;
	SUBGHZ_STATUS rx_stat;
	volatile bool sending;
	volatile bool open;
	void (*rx_callback)(const uint8_t *data, uint8_t rssi, int status);		// change api
	void (*rx_callback2)(int status);		// change api
	void (*tx_callback)(uint8_t rssi, int status);
	bool read;
	RF_PARAM rf;
	MACH_PARAM *mach;
	BUFFER tx;
	BUFFER rx;
} subghz_param;


static SUBGHZ_MSG subghz_init(void)
{
	SUBGHZ_MSG msg;
	int result;
	
	// clear parameter memory
	memset(&subghz_param,0,sizeof(subghz_param));
	// setting default value
	// @issue check parameters
	subghz_param.addrType = 6;
	subghz_param.rf.cca_min_be = 0;
	subghz_param.rf.cca_max_be = 7;
	subghz_param.rf.cca_duration = 7;
	subghz_param.rf.cca_retry = 20;
	subghz_param.rf.cca_level = 1;
	subghz_param.rf.tx_min_be = 0;
	subghz_param.rf.tx_max_be = 7;
	subghz_param.rf.tx_retry = 3;
	subghz_param.rf.cca_interval = 20;
	subghz_param.rf.tx_power = 20;
	subghz_param.rf.tx_interval = 500;
	subghz_param.rf.cca_mode = NL802154_CCA_CARRIER;
	subghz_param.rf.cca_opt = NL802154_CCA_OPT_ENERGY_CARRIER_AND;
	subghz_param.rf.tx_retry = 3;
    AES128_setAes(NULL,NULL);
	
	// reset
	if((subghz_param.mach = mach_init())==NULL)
	{
		result = -EIO;
		msg = SUBGHZ_RESET_FAIL;
		goto error;
	}
	
	// initializing parameters
	subghz_param.sending = false;
	subghz_param.read = false;
	subghz_param.open = false;
	msg =  SUBGHZ_OK;
	

error:
	subghz_param.tx_stat.status = result;
	return msg;
}

static SUBGHZ_MSG subghz_remove(void)
{
	SUBGHZ_MSG msg=0;

	//msg = HAL_remove();

	return msg;
}
static SUBGHZ_MSG subghz_begin(uint8_t ch, uint16_t panid, SUBGHZ_RATE rate, SUBGHZ_POWER txPower)
{
	SUBGHZ_MSG msg;
	int result;
	uint16_t short_addr=0;
	
	if(subghz_param.open == false)
	{
		// start clock of ml7386
		if((result = mach_sleep(false))!=STATUS_OK)
		{
			subghz_param.open = true;
			msg = SUBGHZ_WAKEUP_FAIL;
			goto error;
		}
	}
	//initializing parameter
	subghz_param.sending = false;
	subghz_param.read = false;
	// 
	subghz_param.rf.ch = ch;
	if(rate == 50) {
		subghz_param.rf.pages = 1;
	} else if (rate == 100) {
		subghz_param.rf.pages = 2;
	} else {
		msg = SUBGHZ_SETUP_FAIL;
		goto error;
	}
	
	if((result = mach_setup(&subghz_param.rf)) != STATUS_OK) {
		msg = SUBGHZ_SETUP_FAIL;
		goto error;
	}
	
	// data to myaddress and grobal address in specified PANID can be received.
	short_addr = (uint16_t)subghz_param.mach->myAddr.ieee_addr[0] | 
		((uint16_t)subghz_param.mach->myAddr.ieee_addr[1]<<8);
	result = mach_set_my_short_addr(panid,short_addr);
	if(result != STATUS_OK)
	{
		msg = SUBGHZ_PANID;
		goto error;
	}
	
	msg = SUBGHZ_OK;
	
error:
	subghz_param.tx_stat.status = result;
	return msg;
}

static SUBGHZ_MSG subghz_close(void)
{
	SUBGHZ_MSG msg;
	int result;
	result = mach_sleep(true);
	if( result != STATUS_OK)
	{
		msg = SUBGHZ_SLEEP_FAIL;
		goto error;
	}
	subghz_param.open = false;
	
	msg = SUBGHZ_OK;
error:
	subghz_param.tx_stat.status = result;
	return msg;
}

static void subghz_txdone(uint8_t rssi, int status)
{
	subghz_param.sending = false;
	subghz_param.tx_stat.rssi = rssi;
	subghz_param.tx_stat.status = status;
//#ifdef DEBUG
//	Serial.print("status=");
//	Serial.println_long(status,DEC);
//#endif
	if(subghz_param.tx_callback != NULL)
	{
		subghz_param.tx_callback(rssi, status);
	}
}
	
SUBGHZ_MSG subghz_halt_until_complete(void)
{
	SUBGHZ_MSG msg = SUBGHZ_OK;
	
	// @issue 
#ifdef LAZURITE_IDE
	while(subghz_param.sending == true)
	{
  		lp_setHaltMode();
        // 2016.03.14 tx send event
		BP3596_sendIdle();
	}
#else
	que_th2ex = 0;
	wait_event_interruptible_timeout(tx_done, que_th2ex,HZ);
#endif
	if(subghz_param.tx_stat.status > 0) {
		msg = SUBGHZ_OK;
	} else if(subghz_param.tx_stat.status == -EBUSY) {
		msg = SUBGHZ_TX_CCA_FAIL;
	} else if(subghz_param.tx_stat.status == -ETIMEDOUT) {
		msg = SUBGHZ_TX_ACK_FAIL;
	} else {
		msg = -EIO;
	}

	return msg;
}

static SUBGHZ_MSG subghz_tx(uint16_t panid, uint16_t dstAddr, uint8_t *data, uint16_t len, void (*callback)(uint8_t rssi, int status))
{
	SUBGHZ_MSG msg;
	int result;
	uint8_t rssi;
	
	// setting tx callback
	/*
	 * @issue tx callback may be better to enter sleep mode
	result = BP3596_setFuncSendComplete(subghz_txdone);
	if(result != STATUS_OK)
	{
		msg = SUBGHZ_TX_COMP_FAIL;
		goto error_not_send;
	}
	*/
	subghz_param.tx.data = data;
	subghz_param.tx.size = len;
	subghz_param.tx.len = 0;
	subghz_param.tx_callback = callback;
	
	mach_set_dst_short_addr(panid,dstAddr);
	subghz_param.sending = true;
	result = mach_tx(&subghz_param.tx);
	mach_ed(&rssi);
	subghz_txdone(rssi,result);
	subghz_param.sending = false;

	switch(result){
		case STATUS_OK:
			msg = SUBGHZ_OK;
			break;
		case -EBUSY:
			msg = SUBGHZ_TX_CCA_FAIL;
			goto error;
			break;
		break;
		case -ETIMEDOUT:
			msg = SUBGHZ_TX_ACK_FAIL;
			goto error;
			break;
		default:
			msg = SUBGHZ_TX_FAIL;
			goto error;
			break;
	}

	/*
	 * @issue delete halt until complete. this function is set in phy.
	msg = subghz_halt_until_complete();
//	#ifdef DEBUG
//		Serial.print("msg=");
//		Serial.println_long(msg,DEC);
//	#endif
	if(msg == SUBGHZ_TX_CCA_FAIL)
	{
		goto error_not_send;
	}
	*/
error:
	return msg;
}

int mach_rx_isr(MACH_Header *rx,int status)
{
	subghz_param.rx_stat.rssi = rx->rssi;
	subghz_param.rx_stat.status = status;

	if(subghz_param.rx_callback != NULL) {
		subghz_param.rx_callback(rx->raw.data, rx->rssi, status);
	}
	return STATUS_OK;
}

static short subghz_readData(uint8_t *data, uint16_t max_size)
{
	short result = 0;
#ifdef	LAZURITE_IDE
//  SUBGHZ_MAC_PARAM mac;
//	__DI();
	dis_interrupts(DI_SUBGHZ);
	if(subghz_param.rx_buf == NULL)
	{
		result = 0;
		goto end;
	}
	result = subghz_param.rx_stat.status;
	
	if(result > 0) 
	{
		if((short)max_size > result)
		{
			max_size = result;
		}
/*
        // 2016.11.15 Eiichi Saito AES
        subghz_decMac(&mac,subghz_param.rx_buf,subghz_param.rx_stat.status);

        if (mac.mac_header.alignment.sec_enb){
            uint8_t mhr_len;
            uint8_t pad;

            if (mac.mac_header.alignment.seq_comp){
                mac.seq_num=0;
            }
            mhr_len = mac.raw_len - mac.payload_len;
            memcpy(data, subghz_param.rx_buf,mhr_len);
            pad = AES128_CBC_decrypt(data+mhr_len, mac.payload, mac.payload_len, mac.seq_num);
	        subghz_param.rx_stat.status -= pad;
	        result = subghz_param.rx_stat.status;
#ifdef DEBUG_AES
            Serial.print("\r\n");
            Serial.print(data+mhr_len);
            Serial.print("\r\n");
            Serial.print("total,payload,pad: ");
            Serial.print_long((long)mac.raw_len,DEC);
            Serial.print(" ");
            Serial.print_long((long)mac.payload_len,DEC);
            Serial.print(" ");
            Serial.println_long((long)pad,DEC);
#endif
        }else
        {
		    memcpy(data, subghz_param.rx_buf, max_size+1);
        }
*/
		// @issue why read 
		memcpy(data, subghz_param.rx_buf,max_size+1);
		subghz_param.rx_buf = NULL;
	}
	
end:
//	__EI();
	enb_interrupts(DI_SUBGHZ);
#endif	//LAZURITE_IDE
	return result;
}
// 
static SUBGHZ_MSG subghz_rxEnable(void (*callback)(const uint8_t *data, uint8_t rssi, int status))
{
	static uint8_t data[256];
	int result;
	SUBGHZ_MSG msg = SUBGHZ_OK;

	subghz_param.rx.data = data;
	subghz_param.rx.size = sizeof(data);
	subghz_param.rx.len = 0;
	
	subghz_param.rx_callback = callback;
	if(subghz_param.read == false)
	{
		/*
		result = BP3596_setFuncRecvComplete(subghz_rxdone);
		if(result != BP3596_STATUS_OK)
		{
			msg = SUBGHZ_RX_COMP_FAIL;
			subghz_param.rx_stat.status = result;
			goto error;
		}
		result = BP3596_recvEnable();
		if(result != BP3596_STATUS_OK)
		{
			msg = SUBGHZ_RX_ENB_FAIL;
			subghz_param.rx_stat.status = result;
			goto error;
		}
		*/
		
		if((result=mach_start(&subghz_param.rx))!=STATUS_OK) {
			msg = SUBGHZ_RX_ENB_FAIL;
			goto error;
		}
	}
	subghz_param.read = true;
	
error:
	return msg;
}

static SUBGHZ_MSG subghz_rxDisable(void)
{
	SUBGHZ_MSG msg;
	int result;
	
	result = mach_stop();
	if(result != STATUS_OK)
	{
		msg = SUBGHZ_RX_DIS_FAIL;
		goto error;						//2016.5.1 add 
	}
	subghz_param.read = false;
	msg = SUBGHZ_OK;
error:
	subghz_param.rx_stat.status = result;
	return msg;
}

/*static SUBGHZ_MSG subghz_setPANID(uint16_t panid)
{
	SUBGHZ_MSG msg;
	int result;
	
	result = BP3596_setMyPANID(panid);
	if(result != BP3596_STATUS_OK)
	{
		msg = SUBGHZ_PANID;
		goto error;
	}
	msg = SUBGHZ_OK;
error:
	subghz_param.tx_stat.status = result;
	return msg;
}
*/
static void subghz_getStatus(SUBGHZ_STATUS *tx, SUBGHZ_STATUS *rx)
{
	if (tx != NULL)
	{
		memcpy(tx,&subghz_param.tx_stat, sizeof(subghz_param.tx_stat));
	}
	if (rx != NULL)
	{
		memcpy(rx,&subghz_param.rx_stat, sizeof(subghz_param.rx_stat));
	}
	return;
}

void subghz_get_my_ieee_addr(uint8_t *ieee_addr)
{
	memcpy(ieee_addr,subghz_param.mach->myAddr.ieee_addr,8);
}
void subghz_get_my_short_addr(uint16_t *short_addr)
{
	*short_addr = subghz_param.mach->myAddr.short_addr;
}
static uint16_t subghz_getMyAddress(void)
{
	return subghz_param.mach->myAddr.short_addr;
}

#ifdef LAZURITE_IDE
static const char subghz_msg0[] = "SUBGHZ_OK";
static const char subghz_msg1[] = "SUBGHZ_RESET_FAIL";
static const char subghz_msg2[] = "SUBGHZ_SETUP_FAIL";
static const char subghz_msg3[] = "SUBGHZ_SLEEP_FAIL";
static const char subghz_msg4[] = "SUBGHZ_WAKEUP_FAIL";
static const char subghz_msg5[] = "SUBGHZ_MYADDR_FAIL";
static const char subghz_msg6[] = "SUBGHZ_SETFIL_FAIL";
static const char subghz_msg7[] = "SUBGHZ_TX_COMP_FAIL";
static const char subghz_msg8[] = "SUBGHZ_TX_FAIL";
static const char subghz_msg9[] = "SUBGHZ_TX_CCA_FAIL";
static const char subghz_msg10[] = "SUBGHZ_TX_ACK_FAIL";
static const char subghz_msg11[] = "SUBGHZ_RX_ENB_FAIL";
static const char subghz_msg12[] = "SUBGHZ_RX_DIS_FAIL";
static const char subghz_msg13[] = "SUBGHZ_RX_COMP_FAIL";
static const char subghz_msg14[] = "SUBGHZ_PANID";
static const char subghz_msg15[] = "SUBGHZ_ERR_ADDRTYPE";
static const char subghz_msg16[] = "SUBGHZ_TTL_SEND_OVR";
static const char* subghz_msg[] = {
	subghz_msg0,
	subghz_msg1,
	subghz_msg2,
	subghz_msg3,
	subghz_msg4,
	subghz_msg5,
	subghz_msg6,
	subghz_msg7,
	subghz_msg8,
	subghz_msg9,
	subghz_msg10,
	subghz_msg11,
	subghz_msg12,
	subghz_msg13,
	subghz_msg14,
	subghz_msg15,
	subghz_msg16,
};
#endif
static void subghz_msgOut(SUBGHZ_MSG msg)
{
#ifdef LAZURITE_IDE
	if((msg>=SUBGHZ_OK)&&(msg<=SUBGHZ_TTL_SEND_OVR)){
		Serial.print(subghz_msg[msg]);
		Serial.print("\t");
	}

no_error:
	Serial.print("RSSI=");
	Serial.print_long((long)subghz_param.tx_stat.rssi,DEC);
	Serial.print("\tSTATUS=");
	Serial.println_long((long)subghz_param.tx_stat.status,DEC);
	return;
#endif
}

static SUBGHZ_MSG subghz_getSendMode(SUBGHZ_PARAM *param)
{
	param->addrType = subghz_param.addrType;
	param->senseTime = subghz_param.rf.cca_max_be;
	param->txRetry = subghz_param.rf.tx_retry;
	param->txInterval = subghz_param.rf.tx_max_be;
	param->ccaWait = subghz_param.rf.cca_duration;
	param->myAddress = subghz_param.mach->myAddr.short_addr; 

	return SUBGHZ_OK;
}

static SUBGHZ_MSG subghz_setSendMode(SUBGHZ_PARAM *param)
{
	// check addrType
	if( param->addrType > 7 )
	{
		return SUBGHZ_ERR_ADDRTYPE;
	}
	// @issue check parameter. interval may not be needed.
	// interval is calcurated from max_be.
	subghz_param.addrType = param->addrType;
	subghz_param.rf.cca_duration= param->senseTime;
	subghz_param.rf.tx_retry = param->txRetry;
	subghz_param.rf.tx_interval = param->txInterval;
	subghz_param.rf.cca_interval = param->ccaWait;
	subghz_param.mach->myAddr.short_addr = param->myAddress;
	
	return SUBGHZ_OK;
}


static void subghz_decMac(SUBGHZ_MAC_PARAM *mac,uint8_t *raw,uint16_t raw_len)
{
	MACH_Header header;
	mach_parse_data(raw,raw_len,&header);

	mac->mac_header.fc16=header.fc.fc16;
	mac->seq_num=header.seq;
	mac->addr_type=header.addr_type;
	if(header.dst.panid.enb)
		mac->rx_panid=header.dst.panid.data;
	else
		mac->rx_panid=0xfffe;
	if(header.src.panid.enb)
		mac->tx_panid=header.src.panid.data;
	else
		mac->tx_panid=0xfffe;
	memcpy(mac->rx_addr,header.dst.addr.ieee_addr,8);
	memcpy(mac->tx_addr,header.src.addr.ieee_addr,8);
	mac->raw = raw;
	mac->raw_len = raw_len;
	mac->payload = header.payload.data;
	mac->payload_len = header.payload.len;

	return;
}

// 2016.11.15 Eiichi Saito AES
static SUBGHZ_MSG subghz_setAes(uint8_t *key, uint8_t *workspace)
{
    AES128_setAes(key,workspace);
	return SUBGHZ_OK;
}

// setting of function
const SubGHz_CTRL SubGHz = {
	subghz_init,
	subghz_remove,
	subghz_begin,
	subghz_close,
	subghz_tx,
	subghz_rxEnable,
	subghz_rxDisable,
	subghz_readData,
	subghz_getMyAddress,
	subghz_getStatus,
	subghz_msgOut,
	subghz_setSendMode,
	subghz_getSendMode,
	subghz_decMac,
	subghz_setAes,
};
