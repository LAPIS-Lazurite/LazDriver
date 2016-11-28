
/* mac_lazurite.h - 
 *
 * Copyright (c) 2015  LAPIS Semiconductor Co.,Ltd.
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

#ifndef _MAC_LAZURITE_H_
#define _MAC_LAZURITE_H_
#include "phy_lazurite.h"

typedef struct {
	uint8_t enb;
	uint16_t panid;
} MAC_PANID;

typedef struct {
	uint8_t mode;
	union {
		uint8_t addr8;
		uint16_t addr16;
		uint8_t addr64[8];
	} addr;
} MAC_ADDR;

typedef struct {
	uint8_t *data;
	uint16_t len;
} MAC_DATA;

typedef struct {
    int16_t seq;        	// sequence number
    uint16_t fc;        	// framce control
    uint8_t addr_type;      // address type
    MAC_PANID dstpanid;  	// distination panid
	MAC_ADDR dstaddr;		// distination address
    MAC_PANID srcpanid; 	// source panid
	MAC_ADDR srcaddr;		// source address
	MAC_PAYLOAD payload;	// payload
} MAC_Header;

typedef struct {
	int status;
	PHY_PARAM phy;
	MAC_DATA tx;
	MAC_DATA rx;
	MAC_Header header;
} MAC_PARAM;

#endif
