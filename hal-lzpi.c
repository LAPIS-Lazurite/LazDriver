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



#ifdef	LAZURITE_IDE
#include "lazurite.h"
#include "spi_lazurite.h"
#include "wire0.h"
#include "common_lazurite.h"
#else	// LAZURITE_IDE
#include	<linux/interrupt.h>
#include	<linux/sched.h>
#include	<linux/gpio.h>
#include	<linux/kthread.h>
#include	"spi-lzpi.h"
#include	"i2c-lzpi.h"
#include	"hal-lzpi.h"
#endif
#include "hal.h"


//*****************************************************
// Local definition
//*****************************************************
#define	LED_FLASH_TIME	1					// LED Flashing time
static struct timespec start_time;			// memory of tick timer
static struct timer_list g_timer;			// timer handler
static void (*ext_timer_func)(void);
static void (*ext_irq_func)(void);
static bool ext_irq_enb;
int finish_flag = 0;
static wait_queue_head_t rf_irq_q;
static wait_queue_head_t tx_led_q;
static wait_queue_head_t rx_led_q;
static struct task_struct *rf_main_task;
static struct task_struct *tx_led_task;
static struct task_struct *rx_led_task;
//*****************************************************
// temporary
//*****************************************************

//*****************************************************
// Function
//*****************************************************
int rf_main_thread(void *p)
{
}
int rx_led_thread(void *p)
{
}
int tx_led_thread(void *p)
{
}
// rf hardware interrupt handler
static irqreturn_t rf_irq_handler(int irq,void *dev_id) {
		if((ext_irq_enb)&&(ext_irq_func)){
			finish_flag = 1;
			wake_up_interruptible(&rf_irq_q);
			return IRQ_WAKE_THREAD;
		} else {
			return IRQ_NONE;
		}
}

int lazurite_setup(void) 
{
	int status = 0;

	finish_flag = 0;

	// init external functions
	ext_timer_func = NULL;
	ext_irq_func = NULL;
	ext_irq_enb = false;
	
	// IRQ Initializing
	init_waitqueue_head( &rf_irq_q );
	init_waitqueue_head( &rx_led_q );
	init_waitqueue_head( &tx_led_q );

	// create GPIO irq
	enable_irq(gpio_to_irq(GPIO_SINTN));
	status = request_irq(gpio_to_irq(GPIO_SINTN),
			rf_irq_handler,
			IRQF_TRIGGER_FALLING,
			"hal_lazurite", NULL);
	if(status)
	{
		goto error_irq_request;
	}
	printk("[PHY-BP3596] finish setup rf_irq_q\n");
	
	
	// start thread
	rf_main_task = kthread_run(rf_main_thread, NULL,0);
	if (IS_ERR(rf_main_task)) {
		printk(KERN_INFO "bp3596_init: kthread_run failed\n");
		goto error_thread;
	}

#ifdef GPIO_RX_LED
	rx_led_task = kthread_run(rx_led_thread, NULL,0);
	if (IS_ERR(rx_led_task)) {
		printk(KERN_INFO "bp3596_init: rx_led_kthread_run failed\n");
		goto error_thread;
	}
#endif
#ifdef GPIO_TX_LED
	tx_led_task = kthread_run(tx_led_thread, NULL, 0);
	if (IS_ERR(tx_led_task)) {
		printk(KERN_INFO "bp3596_init: tx_led_kthread_run failed\n");
		goto error_thread;
	}
#endif

	return 0;
error_thread:
	free_irq(gpio_to_irq(GPIO_SINTN), NULL);
error_irq_request:
	disable_irq(gpio_to_irq(GPIO_SINTN));

	return status;
}

#define HAL_SPI_INIT_ERR	1
int HAL_SPI_setup(void)
{
	int result;
	result = lzpi_spi_init();
	if(result != 0) {
		printk(KERN_ERR"[LZPI] SPI INIT ERROR\n");
		result = -HAL_SPI_INIT_ERR;
	}

	return result;
}

//int HAL_SPI_transfer(unsigned char *wdata, unsigned char *rdata, unsigned char size)
int HAL_SPI_transfer(const uint8_t *wdata, uint16_t wsize,uint8_t *rdata, uint16_t rsize)
{
	lzpi_spi_transfer(wdata,wsize,rdata,rsize);
	return 0;
}

int HAL_GPIO_setInterrupt(void (*func)(void))
{
	ext_irq_func = func;
	return HAL_STATUS_OK;
}

int HAL_GPIO_enableInterrupt(void)
{
	ext_irq_enb = true;
	return HAL_STATUS_OK;
}

int HAL_GPIO_disableInterrupt(void)
{
	ext_irq_enb = false;
	return HAL_STATUS_OK;
}

#define HAL_I2C_ERR	2
int HAL_I2C_setup(void)
{
	int result;
	result = lzpi_i2c_init();
	if(result != 0)
	{
		result = HAL_I2C_ERR;
		goto error;
	}

	result = lzpi_i2c_adapter_init();
	if(result != 0)
	{
		result = HAL_I2C_ERR;
		goto error;
	}

	return result;
}

int HAL_I2C_read(unsigned char devAddr, unsigned short addr, unsigned char *data, unsigned char size)
{
	unsigned char n;
	int dtmp;

	Wire0.beginTransmission(devAddr);
#ifdef LAZURIE_MINI
	Wire0.write_byte((addr>>8)&0x00FF);
#endif
	Wire0.write_byte(addr&0x00FF);
	Wire0.endTransmission(false);
	Wire0.requestFrom(devAddr,size,true);
	
	for(n=0;n<size;n++)
	{
		dtmp = Wire0.read();
		if(dtmp < 0) return HAL_STATUS_ERROR_TIMEOUT;
		*(data + n) = (uint8_t)dtmp;
	}
	
	return HAL_STATUS_OK;
}

int HAL_remove(void)
{
	// irq disable
	disable_irq(gpio_to_irq(GPIO_SINTN));
	free_irq(gpio_to_irq(GPIO_SINTN), NULL);
	// thread
	// I2C remove
	bp_i2c_remove();
	// SPI�̒�~
	
}

// timer function
int HAL_TIMER_getTick(unsigned long *tick)
{
	struct timespec current_time;
	struct timespec diff_time;
	unsigned long diff_ms;
	
	getnstimeofday(&current_time);
	
	diff_time.tv_sec = current_time.tv_sec - start_time.tv_sec;
	diff_time.tv_nsec = current_time.tv_nsec - start_time.tv_nsec;
	
	*tick = diff_time.tv_sec * 1000 + diff_time.tv_nsec/1000000;
	
	return HAL_STATUS_OK;
}

int HAL_TIMER_setup(void)
{
	getnstimeofday(&start_time);
	return HAL_STATUS_OK;
}


void timer_function(unsigned long data)
{
	if(ext_timer_func) ext_timer_func();
}

int HAL_TIMER_start(unsigned short msec, void (*func)(void))
{
	uint32_t tmp = HZ;
	init_timer(&g_timer);
	g_timer.data = 0;
	g_timer.expires = jiffies + (tmp*ms)/1000;
	g_timer.function = timer_function;
	add_timer(&g_timer);
	return HAL_STATUS_OK;
}

int HAL_TIMER_stop(void)
{
	del_timer(&g_timer);
	return HAL_STATUS_OK;
}

// no need in Raspberry Pi
void HAL_EX_disableInterrupt(void)
{
}

// no need in Raspberry Pi
void HAL_EX_enableInterrupt(void)
{
}

