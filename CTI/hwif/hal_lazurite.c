/* FILE NAME: hal_lazurite.c
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



#include "lazurite.h"
#include "spi0.h"
#include "wire0.h"
// 2015.12.14 Eiichi Saito : SugGHz timer chaneged from TM01 to TM67.
//#include "MsTimer2.h"
#include "driver_timer.h"
#include "driver_extirq.h"
#include "driver_irq.h"
#include "driver_gpio.h"
#include "hal.h"

//*****************************************************
// Local definition
//*****************************************************

void (*hal_gpio_func)(void);
static unsigned long hal_previous_time;
// 2015.12.14 Eiichi Saito: for preference of SubGHz
static unsigned char hal_setbit_exi;


//*****************************************************
// temporary
//*****************************************************

//*****************************************************
// Function
//*****************************************************
// api_debug add 4
int HAL_init(void){

    uint32_t wait_t, t;

    // SPI init
	SPI0.setDataMode(SPI_MODE0);
	SPI0.setClockDivider(SPI_CLOCK_DIV8);
	SPI0.begin();

    // GPIO init
	drv_digitalWrite(HAL_GPIO_RESETN,HIGH);
	drv_digitalWrite(HAL_GPIO_CSB,HIGH);
	drv_pinMode(HAL_GPIO_SINTN,INPUT);
	drv_pinMode(HAL_GPIO_RESETN,OUTPUT);
	drv_pinMode(HAL_GPIO_CSB,OUTPUT);

    drv_digitalWrite(HAL_GPIO_RESETN, 0);
    for (t = wait_t; wait_t - t <= 3; ml7396_hwif_timer_tick(&wait_t)) // (A)����3msec�ȏ�o�߂�҂� - (B) 
    //    idle();
    drv_digitalWrite(HAL_GPIO_RESETN, 1);
    for (t = wait_t; wait_t - t <= 3; ml7396_hwif_timer_tick(&wait_t)) // (B)����3msec�ȏ�o�߂�҂�
    //    idle();

    // I2C init
	Wire0.begin();
}

int HAL_remove(void){
}

//int wait_event_interruptible(wait_queue_head_t *q,condition){
//}

//int wake_up_interruptible( wait_queue_head_t *q ){
//}

//inline void init_waitqueue_head(wait_queue_head_t *q){
//}


/* api_debug del
int HAL_SPI_setup(void)
{
	SPI0.setDataMode(SPI_MODE0);
	SPI0.setClockDivider(SPI_CLOCK_DIV8);
	SPI0.begin();
	return HAL_STATUS_OK;
}
*/


//int HAL_SPI_transfer(unsigned char *wdata, unsigned char *rdata, unsigned char size)
#if 0
int HAL_SPI_transfer(const unsigned char *wdata, unsigned char *rdata, unsigned char size)
{
	unsigned char n;
	drv_digitalWrite(HAL_GPIO_CSB, HIGH);
	drv_digitalWrite(HAL_GPIO_CSB, LOW);
	for(n=0;n<size;n++)
	{
		*(rdata + n) = SPI0.transfer(*(wdata + n));
	}
	drv_digitalWrite(HAL_GPIO_CSB, HIGH);
	return HAL_STATUS_OK;
}
#else
// api_debug mod
int HAL_SPI_transfer(const unsigned char *wdata, unsigned char wsize,unsigned char *rdata, unsigned char rsize)
{
	unsigned char n;
	drv_digitalWrite(HAL_GPIO_CSB, HIGH);
	drv_digitalWrite(HAL_GPIO_CSB, LOW);

    //  api_debug mod
	for(n=0;n<wsize;n++)
	{
		SPI0.write(*(wdata + n));
	}

    if(rsize){
        for(n=0;n<rsize;n++)
        {
            *(rdata + n) = SPI0.read();
        }
    }

	drv_digitalWrite(HAL_GPIO_CSB, HIGH);
	return HAL_STATUS_OK;
}
#endif

/*  api_debug del 3
int HAL_GPIO_setup(void)
{
	drv_digitalWrite(HAL_GPIO_RESETN,HIGH);
	drv_digitalWrite(HAL_GPIO_CSB,HIGH);
	drv_pinMode(HAL_GPIO_SINTN,INPUT);
	drv_pinMode(HAL_GPIO_RESETN,OUTPUT);
	drv_pinMode(HAL_GPIO_CSB,OUTPUT);
	
	return HAL_STATUS_OK;
}

int HAL_GPIO_getValue(uint8_t pin, uint8_t *value)
{
	*value = (uint8_t)drv_digitalRead(pin);
	return HAL_STATUS_OK;
}
int HAL_GPIO_setValue(uint8_t pin, uint8_t data)
{
	drv_digitalWrite(pin, data);
	return HAL_STATUS_OK;
}
*/

int HAL_GPIO_setInterrupt(void (*func)(void))
{
	hal_gpio_func = func;
	return HAL_STATUS_OK;
}

int HAL_GPIO_enableInterrupt(void)
{
	//	void drv_attachInterrupt(unsigned char pin,unsigned char irqnum, void (*func)(void), int mode,bool sampling, bool filter)
	drv_attachInterrupt(HAL_GPIO_SINTN,BP3596A_SINTN_IRQNUM,hal_gpio_func,LOW,false,false);
	return HAL_STATUS_OK;
}

int HAL_GPIO_disableInterrupt(void)
{
	//	void drv_detachInterrupt(irqnum);
	drv_detachInterrupt(BP3596A_SINTN_IRQNUM);
	return HAL_STATUS_OK;
}

/*  api_debug del
int HAL_I2C_setup(void)
{
	Wire0.begin();
	return HAL_STATUS_OK;
}
*/

//  api_debug mod
// int HAL_I2C_read(unsigned char devAddr, unsigned char addr, unsigned char *data, unsigned char size)
int HAL_I2C_read(unsigned short addr, unsigned char *data, unsigned char size)
{
	unsigned char n;
	int dtmp;

    //  api_debug mod
	Wire0.beginTransmission(0x50);
#ifdef LAZURIE_MINI
	Wire0.write_byte(0);
#endif
	Wire0.write_byte(addr);
	Wire0.endTransmission(false);
    //  api_debug mod
	Wire0.requestFrom(0x50,size,true);
	
	for(n=0;n<size;n++)
	{
		dtmp = Wire0.read();
		if(dtmp < 0) return HAL_STATUS_ERROR_TIMEOUT;
		*(data + n) = (uint8_t)dtmp;
	}
	
	return HAL_STATUS_OK;
}

int HAL_TIMER_getTick(unsigned long *tick)
{
	unsigned long hal_current_time;
	hal_current_time = millis(); 
	
	*tick = hal_current_time - hal_previous_time;
	
	return HAL_STATUS_OK;
}

int HAL_TIMER_setup(void)
{
	hal_previous_time = millis();
	return HAL_STATUS_OK;
}

int HAL_TIMER_start(unsigned short msec, void (*func)(void))
{
// 2015.12.14 Eiichi Saito : SugGHz timer chaneged from TM01 to TM67.
//	timer2.set((unsigned long)msec, func);			//MsTimer2 library
//	timer2.start();									//MsTimer2 library
	timer_16bit_set(6,0xE8,(unsigned long)msec,func);
	timer_16bit_start(6);
	return HAL_STATUS_OK;
}

int HAL_TIMER_stop(void)
{
// 2015.12.14 Eiichi Saito : SugGHz timer chaneged from TM01 to TM67.
//	timer2.stop();					//MsTimer2 library
	timer_16bit_stop(6);
	return HAL_STATUS_OK;
}


#if 0
// 2015.12.14 Eiichi Saito: for preference of SubGHz
void HAL_EX_disableInterrupt(void)
{
    irq_ua0_dis();
    irq_tm0_dis();
    irq_tm1_dis();

    hal_setbit_exi=IE1;
    hal_setbit_exi &= ~0x08;    // EEXI3 (SINTN) clear
    IE1 &= ~hal_setbit_exi;
}


// 2015.12.14 Eiichi Saito: for preference of SubGHz
void HAL_EX_enableInterrupt(void)
{
    irq_ua0_ena();
    irq_tm0_ena();
    irq_tm1_ena();
    IE1 |= hal_setbit_exi;
}
#endif

