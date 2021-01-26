/*
 * =================================================================
 *
 *
 *	Description:  samsung display panel file
 *
 *	Author: cj1225.jang
 *	Company:  Samsung Electronics
 *
 * ================================================================
 */
/*
<one line to give the program's name and a brief idea of what it does.>
Copyright (C) 2020, Samsung Electronics. All rights reserved.

*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *
*/
#ifndef SAMSUNG_DSI_PANEL_EA8076A_AMS646UJ10_H
#define SAMSUNG_DSI_PANEL_EA8076A_AMS646UJ10_H

#include <linux/completion.h>
#include "ss_dsi_panel_common.h"

#define MAX_BL_PF_LEVEL 255
#define MAX_HBM_PF_LEVEL 365
#define HBM_ELVSS_INTERPOLATION_VALUE 404 /*BL control register is 10 bit*/

static unsigned int elvss_table[HBM_ELVSS_INTERPOLATION_VALUE + 1] = {
	[0 ... 3]	=	0x1E,
	[4 ... 26]	=	0x1D,
	[27 ... 55]	=	0x1C,
	[56 ... 83]	=	0x1B,
	[84 ... 114]	=	0x1A,
	[115 ... 143]	=	0x19,
	[144 ... 171]	=	0x18,
	[172 ... 200]	=	0x17,
	[201 ... 228]	=	0x16,
	[229 ... 259]	=	0x15,
	[260 ... 288]	=	0x14,
	[289 ... 316]	=	0x13,
	[317 ... 345]	=	0x12,
	[346 ... 375]	=	0x11,
	[376 ... 402]	=	0x10,
	[403 ... 404]	=	0x10,
};

#endif
