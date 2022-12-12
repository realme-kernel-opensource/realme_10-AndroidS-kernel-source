/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef _MTK_DATA_HW_ROUNDEDPATTERN_L_H_
#define _MTK_DATA_HW_ROUNDEDPATTERN_L_H_

#define ROUND_CORNER_H_TOP 149
#define ROUND_CORNER_H_BOT 149

static unsigned char top_rc_pattern_l[] = {
0x60, 0x00, 0x3b, 0x00, 0xfe, 0xfb, 0xf8, 0xf4, 0xf1, 0xef, 0xec, 0xe9, 0xe6, 0xe4, 0xe1, 0xdf, 0xdd, 0xda, 0xd2, 0xc6, 0xba, 0xb1, 0xa8, 0x9e, 0x95, 0x8b, 0x82, 0x7a, 0x73, 0x6d, 0x66, 0x5f, 0x58, 0x51, 0x4b, 0x48, 0x44, 0x40, 0x3c, 0x38, 0x34, 0x31, 0x2c, 0x29, 0x25, 0x21, 0x1d, 0x1a, 0x15, 0x13, 0x12, 0x10, 0x0f, 0x0e, 0x0d, 0x0b, 0x0a, 0x09, 0x08, 0x06, 0x05, 0x03, 0x03, 
0x58, 0x00, 0x42, 0x00, 0xfe, 0xf9, 0xf3, 0xef, 0xeb, 0xe7, 0xe3, 0xdf, 0xd8, 0xc9, 0xb6, 0xa6, 0x97, 0x89, 0x7c, 0x6d, 0x60, 0x53, 0x48, 0x3e, 0x33, 0x29, 0x24, 0x21, 0x20, 0x1e, 0x1c, 0x1b, 0x19, 0x18, 0x16, 0x15, 0x14, 0x12, 0x11, 0x10, 0x0f, 0x0e, 0x0d, 0x0c, 0x0b, 0x0b, 0x0a, 0x0a, 0x09, 0x08, 0x08, 0x07, 0x06, 0x06, 0x05, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 
0x52, 0x00, 0x1c, 0x00, 0xfc, 0xf7, 0xf1, 0xeb, 0xe5, 0xdf, 0xd4, 0xbc, 0xa1, 0x8b, 0x76, 0x63, 0x4f, 0x3b, 0x2a, 0x22, 0x1d, 0x1a, 0x17, 0x14, 0x12, 0x0f, 0x0c, 0x09, 0x07, 0x05, 0x03, 0x01, 
0x4d, 0x00, 0x14, 0x00, 0xfd, 0xf6, 0xee, 0xe7, 0xde, 0xce, 0xb2, 0x94, 0x78, 0x5c, 0x40, 0x28, 0x1f, 0x19, 0x15, 0x10, 0x0d, 0x09, 0x04, 0x01, 
0x49, 0x00, 0x10, 0x00, 0xfc, 0xf4, 0xeb, 0xe1, 0xd1, 0xae, 0x88, 0x62, 0x40, 0x27, 0x1d, 0x17, 0x11, 0x0b, 0x05, 0x01, 
0x45, 0x00, 0x0e, 0x00, 0xfe, 0xf9, 0xef, 0xe2, 0xcf, 0xa6, 0x78, 0x4c, 0x2b, 0x1d, 0x14, 0x0c, 0x06, 0x01, 
0x43, 0x00, 0x0b, 0x00, 0xfa, 0xef, 0xdf, 0xbd, 0x89, 0x54, 0x2b, 0x1b, 0x11, 0x08, 0x02, 
0x40, 0x00, 0x0a, 0x00, 0xfc, 0xf2, 0xe3, 0xc5, 0x8b, 0x4e, 0x24, 0x14, 0x0a, 0x02, 
0x3d, 0x00, 0x0a, 0x00, 0xfd, 0xf4, 0xe6, 0xce, 0x98, 0x5a, 0x29, 0x15, 0x09, 0x01, 
0x3a, 0x00, 0x0a, 0x00, 0xfe, 0xf8, 0xeb, 0xd6, 0xa6, 0x67, 0x31, 0x19, 0x0b, 0x02, 
0x38, 0x00, 0x09, 0x00, 0xfd, 0xf4, 0xe1, 0xb7, 0x76, 0x3b, 0x1c, 0x0e, 0x03, 
0x36, 0x00, 0x08, 0x00, 0xfc, 0xf0, 0xd9, 0xa3, 0x5a, 0x25, 0x10, 0x05, 
0x34, 0x00, 0x08, 0x00, 0xfc, 0xee, 0xd0, 0x8f, 0x46, 0x1e, 0x0b, 0x01, 
0x32, 0x00, 0x08, 0x00, 0xfc, 0xee, 0xd0, 0x8a, 0x3d, 0x18, 0x07, 0x01, 
0x30, 0x00, 0x07, 0x00, 0xfd, 0xf0, 0xd2, 0x8c, 0x3e, 0x17, 0x05, 
0x2e, 0x00, 0x08, 0x00, 0xfe, 0xf6, 0xdb, 0x96, 0x41, 0x18, 0x06, 0x01, 
0x2d, 0x00, 0x07, 0x00, 0xfa, 0xe5, 0xb0, 0x57, 0x1d, 0x06, 0x01, 
0x2b, 0x00, 0x07, 0x00, 0xfd, 0xef, 0xc7, 0x71, 0x27, 0x0b, 0x01, 
0x2a, 0x00, 0x06, 0x00, 0xfa, 0xe0, 0x99, 0x3c, 0x12, 0x02, 
0x28, 0x00, 0x06, 0x00, 0xfe, 0xf1, 0xc7, 0x69, 0x21, 0x06, 
0x27, 0x00, 0x06, 0x00, 0xfc, 0xe4, 0xa0, 0x40, 0x11, 0x02, 
0x26, 0x00, 0x06, 0x00, 0xf8, 0xd4, 0x76, 0x24, 0x07, 0x01, 
0x24, 0x00, 0x06, 0x00, 0xfe, 0xf2, 0xc2, 0x59, 0x17, 0x02, 
0x23, 0x00, 0x06, 0x00, 0xfd, 0xe9, 0xa9, 0x40, 0x0e, 0x01, 
0x22, 0x00, 0x06, 0x00, 0xfc, 0xe1, 0x8d, 0x2d, 0x08, 0x01, 
0x21, 0x00, 0x05, 0x00, 0xfb, 0xdb, 0x7b, 0x21, 0x04, 
0x20, 0x00, 0x05, 0x00, 0xfa, 0xd5, 0x6e, 0x1c, 0x02, 
0x1f, 0x00, 0x05, 0x00, 0xf9, 0xce, 0x63, 0x17, 0x02, 
0x1e, 0x00, 0x05, 0x01, 0x1c, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xf8, 0xc8, 0x57, 0x13, 0x02, 0x01, 0x01, 0x02, 0x02, 0x02, 0x03, 
0x1d, 0x00, 0x05, 0x01, 0x1c, 0x02, 0x1c, 0x02, 0x0a, 0x00, 0xf8, 0xc9, 0x54, 0x11, 0x01, 0x01, 0x02, 0x04, 0x07, 0x0b, 0x0f, 0x13, 0x19, 0x1c, 0x1f, 
0x1c, 0x00, 0x05, 0x01, 0x1c, 0x02, 0x1c, 0x02, 0x0d, 0x00, 0xf9, 0xcb, 0x57, 0x10, 0x01, 0x01, 0x02, 0x06, 0x0c, 0x16, 0x25, 0x36, 0x44, 0x50, 0x5e, 0x6d, 0x78, 0x7f, 
0x1b, 0x00, 0x05, 0x01, 0x1c, 0x02, 0x1c, 0x02, 0x0f, 0x00, 0xfa, 0xcd, 0x5a, 0x11, 0x01, 0x01, 0x04, 0x0a, 0x17, 0x2c, 0x43, 0x60, 0x8a, 0xb0, 0xc9, 0xda, 0xe4, 0xe8, 0xea, 0xec, 
0x1a, 0x00, 0x05, 0x01, 0x18, 0x02, 0x1c, 0x02, 0x0d, 0x00, 0xfa, 0xd0, 0x5d, 0x13, 0x01, 0x01, 0x04, 0x0c, 0x1d, 0x3b, 0x61, 0x98, 0xc7, 0xe2, 0xee, 0xf5, 0xfa, 0xfd, 
0x19, 0x00, 0x05, 0x01, 0x14, 0x02, 0x1c, 0x02, 0x0a, 0x00, 0xfc, 0xd8, 0x65, 0x14, 0x01, 0x03, 0x0a, 0x1d, 0x3e, 0x70, 0xb1, 0xde, 0xf0, 0xfa, 0xfe, 
0x18, 0x00, 0x05, 0x01, 0x11, 0x02, 0x1c, 0x02, 0x09, 0x00, 0xfd, 0xe0, 0x76, 0x19, 0x02, 0x01, 0x06, 0x15, 0x36, 0x6c, 0xb5, 0xe3, 0xf5, 0xfd, 
0x17, 0x00, 0x05, 0x01, 0x0f, 0x02, 0x1c, 0x02, 0x08, 0x00, 0xfd, 0xe7, 0x8a, 0x20, 0x02, 0x02, 0x0a, 0x21, 0x50, 0x9e, 0xdc, 0xf5, 0xfe, 
0x16, 0x00, 0x05, 0x01, 0x0d, 0x02, 0x1c, 0x02, 0x07, 0x00, 0xfe, 0xed, 0x9d, 0x29, 0x03, 0x03, 0x0e, 0x2d, 0x6a, 0xc2, 0xee, 0xfc, 
0x16, 0x00, 0x04, 0x01, 0x0c, 0x02, 0x1c, 0x02, 0x07, 0x00, 0xf4, 0xb0, 0x34, 0x05, 0x04, 0x12, 0x38, 0x7f, 0xd2, 0xf7, 0xfe, 
0x15, 0x00, 0x04, 0x01, 0x0a, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xfa, 0xc9, 0x47, 0x09, 0x04, 0x14, 0x42, 0x92, 0xde, 0xfa, 
0x14, 0x00, 0x05, 0x01, 0x09, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xfd, 0xdc, 0x66, 0x11, 0x01, 0x04, 0x13, 0x44, 0xa0, 0xe6, 0xfc, 
0x13, 0x00, 0x05, 0x01, 0x08, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xfe, 0xe9, 0x8a, 0x1d, 0x02, 0x02, 0x10, 0x3c, 0x9a, 0xe8, 0xfd, 
0x13, 0x00, 0x04, 0x01, 0x07, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xf4, 0xab, 0x2c, 0x04, 0x02, 0x0c, 0x32, 0x88, 0xe2, 0xfd, 
0x12, 0x00, 0x04, 0x01, 0x06, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xfb, 0xce, 0x47, 0x08, 0x01, 0x08, 0x27, 0x75, 0xd8, 0xfb, 
0x11, 0x00, 0x05, 0x01, 0x05, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xfe, 0xe4, 0x75, 0x14, 0x01, 0x04, 0x1b, 0x5e, 0xcb, 0xf9, 
0x11, 0x00, 0x04, 0x01, 0x04, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xf3, 0xa7, 0x26, 0x02, 0x02, 0x0f, 0x44, 0xb4, 0xf3, 
0x10, 0x00, 0x04, 0x01, 0x04, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xfb, 0xcf, 0x48, 0x08, 0x07, 0x27, 0x85, 0xe7, 0xfe, 
0x0f, 0x00, 0x05, 0x01, 0x03, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xfe, 0xe7, 0x79, 0x15, 0x01, 0x02, 0x13, 0x52, 0xcc, 0xfa, 
0x0f, 0x00, 0x04, 0x01, 0x02, 0x02, 0x1c, 0x02, 0x04, 0x00, 0xf7, 0xb6, 0x2c, 0x03, 0x07, 0x2d, 0x95, 0xee, 
0x0e, 0x00, 0x04, 0x01, 0x02, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xfd, 0xdf, 0x5e, 0x0d, 0x02, 0x12, 0x52, 0xd0, 0xfb, 
0x0e, 0x00, 0x04, 0x01, 0x01, 0x02, 0x1c, 0x02, 0x04, 0x00, 0xf2, 0xa0, 0x20, 0x02, 0x06, 0x27, 0x8d, 0xed, 
0x0d, 0x00, 0x04, 0x01, 0x01, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xfc, 0xd5, 0x48, 0x07, 0x01, 0x0d, 0x42, 0xc2, 0xf8, 
0x0d, 0x00, 0x04, 0x01, 0x01, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xf0, 0x91, 0x19, 0x01, 0x02, 0x19, 0x66, 0xe2, 0xfe, 
0x0c, 0x00, 0x04, 0x01, 0x00, 0x02, 0x1c, 0x02, 0x04, 0x00, 0xfc, 0xd4, 0x42, 0x07, 0x06, 0x2c, 0x99, 0xf0, 
0x0c, 0x00, 0x04, 0x01, 0x00, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xef, 0x90, 0x19, 0x01, 0x01, 0x0a, 0x40, 0xc0, 0xf9, 
0x0b, 0x00, 0x04, 0x01, 0x00, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xfc, 0xd3, 0x41, 0x06, 0x01, 0x11, 0x55, 0xdb, 0xfd, 
0x0b, 0x00, 0x04, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x04, 0x00, 0xf1, 0x93, 0x19, 0x01, 0x02, 0x1b, 0x72, 0xe8, 
0x0a, 0x00, 0x04, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x04, 0x00, 0xfe, 0xdb, 0x4a, 0x08, 0x04, 0x26, 0x8e, 0xef, 
0x0a, 0x00, 0x04, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x04, 0x00, 0xf4, 0xa6, 0x1f, 0x01, 0x06, 0x2f, 0xa6, 0xf4, 
0x09, 0x00, 0x04, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x04, 0x00, 0xfe, 0xe2, 0x5c, 0x0c, 0x07, 0x36, 0xb8, 0xf7, 
0x09, 0x00, 0x04, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x05, 0x00, 0xf8, 0xba, 0x26, 0x02, 0x01, 0x08, 0x3b, 0xc1, 0xf9, 
0x09, 0x00, 0x03, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x05, 0x00, 0xe9, 0x74, 0x10, 0x01, 0x0a, 0x3e, 0xc7, 0xfa, 
0x08, 0x00, 0x04, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x05, 0x00, 0xfc, 0xd1, 0x36, 0x04, 0x01, 0x0a, 0x3f, 0xc9, 0xfa, 
0x08, 0x00, 0x03, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x05, 0x00, 0xf2, 0x98, 0x19, 0x01, 0x0a, 0x3e, 0xc7, 0xfa, 
0x07, 0x00, 0x04, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x05, 0x00, 0xfe, 0xe0, 0x55, 0x0a, 0x01, 0x08, 0x3b, 0xc1, 0xf9, 
0x07, 0x00, 0x04, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x04, 0x00, 0xf9, 0xbb, 0x25, 0x01, 0x07, 0x36, 0xb8, 0xf7, 
0x07, 0x00, 0x03, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x04, 0x00, 0xeb, 0x7a, 0x11, 0x06, 0x2f, 0xa6, 0xf4, 
0x06, 0x00, 0x04, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x04, 0x00, 0xfe, 0xdb, 0x40, 0x06, 0x04, 0x26, 0x8e, 0xef, 
0x06, 0x00, 0x04, 0x01, 0xff, 0x01, 0x1c, 0x02, 0x04, 0x00, 0xf7, 0xb5, 0x21, 0x01, 0x02, 0x1b, 0x72, 0xe8, 
0x06, 0x00, 0x03, 0x01, 0x00, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xec, 0x7e, 0x12, 0x01, 0x11, 0x55, 0xdb, 0xfd, 
0x05, 0x00, 0x04, 0x01, 0x00, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xfe, 0xde, 0x47, 0x07, 0x01, 0x0a, 0x40, 0xc0, 0xf9, 
0x05, 0x00, 0x04, 0x01, 0x00, 0x02, 0x1c, 0x02, 0x04, 0x00, 0xf9, 0xbd, 0x23, 0x01, 0x06, 0x2c, 0x99, 0xf0, 
0x05, 0x00, 0x03, 0x01, 0x01, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xee, 0x86, 0x14, 0x02, 0x19, 0x66, 0xe2, 0xfe, 
0x05, 0x00, 0x03, 0x01, 0x01, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xe0, 0x4f, 0x09, 0x01, 0x0d, 0x42, 0xc2, 0xf8, 
0x04, 0x00, 0x04, 0x01, 0x01, 0x02, 0x1c, 0x02, 0x04, 0x00, 0xfb, 0xc6, 0x27, 0x01, 0x06, 0x27, 0x8d, 0xed, 
0x04, 0x00, 0x03, 0x01, 0x02, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xf3, 0x9e, 0x19, 0x02, 0x12, 0x52, 0xd0, 0xfb, 
0x04, 0x00, 0x03, 0x01, 0x02, 0x02, 0x1c, 0x02, 0x04, 0x00, 0xea, 0x75, 0x10, 0x07, 0x2d, 0x95, 0xee, 
0x04, 0x00, 0x03, 0x01, 0x03, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xe1, 0x4d, 0x08, 0x02, 0x13, 0x52, 0xcc, 0xfa, 
0x03, 0x00, 0x04, 0x01, 0x04, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xfd, 0xd2, 0x2c, 0x02, 0x07, 0x27, 0x85, 0xe7, 0xfe, 
0x03, 0x00, 0x03, 0x01, 0x04, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xf7, 0xb0, 0x1d, 0x02, 0x0f, 0x44, 0xb4, 0xf3, 
0x03, 0x00, 0x03, 0x01, 0x05, 0x02, 0x1c, 0x02, 0x05, 0x00, 0xee, 0x88, 0x14, 0x04, 0x1b, 0x5e, 0xcb, 0xf9, 
0x03, 0x00, 0x03, 0x01, 0x06, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xe6, 0x5f, 0x0c, 0x01, 0x08, 0x27, 0x75, 0xd8, 0xfb, 
0x02, 0x00, 0x04, 0x01, 0x07, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xfe, 0xdc, 0x3a, 0x05, 0x02, 0x0c, 0x32, 0x88, 0xe2, 0xfd, 
0x02, 0x00, 0x04, 0x01, 0x08, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xfb, 0xc6, 0x23, 0x01, 0x02, 0x10, 0x3c, 0x9a, 0xe8, 0xfd, 
0x02, 0x00, 0x03, 0x01, 0x09, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xf5, 0xaa, 0x1b, 0x04, 0x13, 0x44, 0xa0, 0xe6, 0xfc, 
0x02, 0x00, 0x03, 0x01, 0x0a, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xf0, 0x8e, 0x15, 0x04, 0x14, 0x41, 0x92, 0xde, 0xfa, 
0x02, 0x00, 0x03, 0x01, 0x0c, 0x02, 0x1c, 0x02, 0x07, 0x00, 0xea, 0x72, 0x10, 0x04, 0x12, 0x38, 0x7f, 0xd2, 0xf7, 0xfe, 
0x02, 0x00, 0x03, 0x01, 0x0d, 0x02, 0x1c, 0x02, 0x07, 0x00, 0xe4, 0x56, 0x0a, 0x03, 0x0e, 0x2d, 0x6a, 0xc2, 0xee, 0xfc, 
0x02, 0x00, 0x03, 0x01, 0x0f, 0x02, 0x1c, 0x02, 0x08, 0x00, 0xdd, 0x3b, 0x04, 0x02, 0x0a, 0x21, 0x50, 0x9e, 0xdc, 0xf5, 0xfe, 
0x01, 0x00, 0x04, 0x01, 0x11, 0x02, 0x1c, 0x02, 0x09, 0x00, 0xfd, 0xd1, 0x26, 0x01, 0x01, 0x06, 0x15, 0x36, 0x6c, 0xb5, 0xe3, 0xf5, 0xfd, 
0x01, 0x00, 0x03, 0x01, 0x14, 0x02, 0x1c, 0x02, 0x0a, 0x00, 0xf8, 0xb8, 0x1e, 0x03, 0x0a, 0x1d, 0x3e, 0x70, 0xb1, 0xde, 0xf0, 0xfa, 0xfe, 
0x01, 0x00, 0x03, 0x01, 0x18, 0x02, 0x1c, 0x02, 0x0d, 0x00, 0xf2, 0x9c, 0x18, 0x01, 0x04, 0x0c, 0x1d, 0x3b, 0x61, 0x99, 0xc7, 0xe2, 0xee, 0xf5, 0xfa, 0xfd, 
0x01, 0x00, 0x03, 0x01, 0x1c, 0x02, 0x1c, 0x02, 0x0f, 0x00, 0xed, 0x81, 0x13, 0x01, 0x04, 0x0a, 0x17, 0x2c, 0x43, 0x60, 0x8a, 0xb0, 0xc9, 0xda, 0xe4, 0xe8, 0xea, 0xec, 
0x01, 0x00, 0x03, 0x01, 0x1c, 0x02, 0x1c, 0x02, 0x0d, 0x00, 0xe8, 0x6b, 0x0e, 0x01, 0x02, 0x06, 0x0c, 0x16, 0x25, 0x36, 0x44, 0x50, 0x5e, 0x6d, 0x78, 0x7f, 
0x01, 0x00, 0x03, 0x01, 0x1c, 0x02, 0x1c, 0x02, 0x0a, 0x00, 0xe5, 0x58, 0x0a, 0x01, 0x02, 0x04, 0x07, 0x0b, 0x0f, 0x13, 0x19, 0x1c, 0x1f, 
0x01, 0x00, 0x03, 0x01, 0x1c, 0x02, 0x1c, 0x02, 0x06, 0x00, 0xe1, 0x46, 0x07, 0x01, 0x01, 0x02, 0x02, 0x02, 0x03, 
0x01, 0x00, 0x03, 0x00, 0xdd, 0x34, 0x03, 
0x00, 0x00, 0x03, 0x00, 0xfe, 0xd4, 0x26, 
0x00, 0x00, 0x03, 0x00, 0xfb, 0xc4, 0x20, 
0x00, 0x00, 0x03, 0x00, 0xf7, 0xb2, 0x1d, 
0x00, 0x00, 0x03, 0x00, 0xf3, 0x9f, 0x19, 
0x00, 0x00, 0x03, 0x00, 0xef, 0x8c, 0x15, 
0x00, 0x00, 0x03, 0x00, 0xeb, 0x7a, 0x11, 
0x00, 0x00, 0x03, 0x00, 0xe8, 0x6a, 0x0e, 
0x00, 0x00, 0x03, 0x00, 0xe6, 0x5e, 0x0c, 
0x00, 0x00, 0x03, 0x00, 0xe4, 0x53, 0x09, 
0x00, 0x00, 0x03, 0x00, 0xe1, 0x48, 0x07, 
0x00, 0x00, 0x03, 0x00, 0xdf, 0x3c, 0x05, 
0x00, 0x00, 0x03, 0x00, 0xdd, 0x31, 0x02, 
0x00, 0x00, 0x02, 0x00, 0xd9, 0x27, 
0x00, 0x00, 0x02, 0x00, 0xcd, 0x23, 
0x00, 0x00, 0x02, 0x00, 0xc0, 0x20, 
0x00, 0x00, 0x02, 0x00, 0xb2, 0x1e, 
0x00, 0x00, 0x02, 0x00, 0xa4, 0x1c, 
0x00, 0x00, 0x02, 0x00, 0x99, 0x1a, 
0x00, 0x00, 0x02, 0x00, 0x91, 0x19, 
0x00, 0x00, 0x02, 0x00, 0x89, 0x17, 
0x00, 0x00, 0x02, 0x00, 0x81, 0x16, 
0x00, 0x00, 0x02, 0x00, 0x79, 0x15, 
0x00, 0x00, 0x02, 0x00, 0x72, 0x13, 
0x00, 0x00, 0x02, 0x00, 0x6a, 0x12, 
0x00, 0x00, 0x02, 0x00, 0x62, 0x10, 
0x00, 0x00, 0x02, 0x00, 0x5a, 0x0f, 
0x00, 0x00, 0x02, 0x00, 0x52, 0x0e, 
0x00, 0x00, 0x02, 0x00, 0x4a, 0x0d, 
0x00, 0x00, 0x02, 0x00, 0x43, 0x0b, 
0x00, 0x00, 0x02, 0x00, 0x3e, 0x0a, 
0x00, 0x00, 0x02, 0x00, 0x3a, 0x0a, 
0x00, 0x00, 0x02, 0x00, 0x36, 0x09, 
0x00, 0x00, 0x02, 0x00, 0x32, 0x09, 
0x00, 0x00, 0x02, 0x00, 0x2e, 0x08, 
0x00, 0x00, 0x02, 0x00, 0x2b, 0x07, 
0x00, 0x00, 0x02, 0x00, 0x26, 0x07, 
0x00, 0x00, 0x02, 0x00, 0x23, 0x06, 
0x00, 0x00, 0x02, 0x00, 0x1f, 0x05, 
0x00, 0x00, 0x02, 0x00, 0x1b, 0x05, 
0x00, 0x00, 0x02, 0x00, 0x18, 0x04, 
0x00, 0x00, 0x02, 0x00, 0x14, 0x03, 
0x00, 0x00, 0x02, 0x00, 0x11, 0x03, 
0x00, 0x00, 0x02, 0x00, 0x0f, 0x03, 
0x00, 0x00, 0x02, 0x00, 0x0f, 0x02, 
0x00, 0x00, 0x02, 0x00, 0x0d, 0x02, 
0x00, 0x00, 0x02, 0x00, 0x0b, 0x02, 
0x00, 0x00, 0x02, 0x00, 0x0a, 0x02, 
0x00, 0x00, 0x02, 0x00, 0x09, 0x01, 
0x00, 0x00, 0x02, 0x00, 0x07, 0x01, 
0x00, 0x00, 0x02, 0x00, 0x06, 0x01, 
0x00, 0x00, 0x02, 0x00, 0x04, 0x01, 
0x00, 0x00, 0x02, 0x00, 0x03, 0x01, 
0x00, 0x00, 0x01, 0x00, 0x02, 
0x00, 0x00, 0x01, 0x00, 0x02, 
0x00, 0x00, 0x02, 0x00, 0x03, 0x01, 
0x00, 0x00, 0x02, 0x00, 0x05, 0x01, 
0x00, 0x00, 0x02, 0x00, 0x06, 0x01, 
0x00, 0x00, 0x02, 0x00, 0x08, 0x01, 
0x00, 0x00, 0x02, 0x00, 0x09, 0x01, 
0x00, 0x00, 0x02, 0x00, 0x0a, 0x02, 
0x00, 0x00, 0x02, 0x00, 0x0c, 0x02, 
0x00, 0x00, 0x02, 0x00, 0x0d, 0x02, 
0x00, 0x00, 0x02, 0x00, 0x0f, 0x02, 
0x00, 0x00, 0x02, 0x00, 0x10, 0x03, 
0x00, 0x00, 0x02, 0x00, 0x11, 0x03, 
0x00, 0x00, 0x02, 0x00, 0x15, 0x03, 
0x00, 0x00, 0x02, 0x00, 0x18, 0x04, 
0x00, 0x00, 0x02, 0x00, 0x1c, 0x05, 
0x00, 0x00, 0x02, 0x00, 0x20, 0x05, 
0x00, 0x00, 0x02, 0x00, 0x23, 0x06, 
0x00, 0x00, 0x02, 0x00, 0x27, 0x07, 
0x00, 0x00, 0x02, 0x00, 0x2b, 0x07, 
0x00, 0x00, 0x02, 0x00, 0x2f, 0x08, 
0x00, 0x00, 0x02, 0x00, 0x32, 0x09, 
0x00, 0x00, 0x02, 0x00, 0x37, 0x09, 
0x00, 0x00, 0x02, 0x00, 0x3a, 0x0a, 
0x00, 0x00, 0x02, 0x00, 0x3e, 0x0b, 
0x00, 0x00, 0x02, 0x00, 0x43, 0x0b, 
0x00, 0x00, 0x02, 0x00, 0x4a, 0x0d, 
0x00, 0x00, 0x02, 0x00, 0x52, 0x0e, 
0x00, 0x00, 0x02, 0x00, 0x5b, 0x0f, 
0x00, 0x00, 0x02, 0x00, 0x62, 0x11, 
0x00, 0x00, 0x02, 0x00, 0x6a, 0x12, 
0x00, 0x00, 0x02, 0x00, 0x72, 0x13, 
0x00, 0x00, 0x02, 0x00, 0x79, 0x15, 
0x00, 0x00, 0x02, 0x00, 0x81, 0x16, 
0x00, 0x00, 0x02, 0x00, 0x8a, 0x17, 
0x00, 0x00, 0x02, 0x00, 0x91, 0x19, 
0x00, 0x00, 0x02, 0x00, 0x99, 0x1a, 
0x00, 0x00, 0x02, 0x00, 0xa4, 0x1c, 
0x00, 0x00, 0x02, 0x00, 0xb2, 0x1e, 
0x00, 0x00, 0x02, 0x00, 0xc0, 0x21, 
0x00, 0x00, 0x02, 0x00, 0xce, 0x23, 
0x00, 0x00, 0x02, 0x00, 0xd9, 0x27, 
0x00, 0x00, 0x03, 0x00, 0xdd, 0x31, 0x02, 
0x00, 0x00, 0x03, 0x00, 0xdf, 0x3c, 0x05, 
0x00, 0x00, 0x03, 0x00, 0xe1, 0x48, 0x07, 
0x00, 0x00, 0x03, 0x00, 0xe4, 0x54, 0x0a, 
0x00, 0x00, 0x03, 0x00, 0xe6, 0x5f, 0x0c, 
0x00, 0x00, 0x03, 0x00, 0xe8, 0x6b, 0x0e, 
0x00, 0x00, 0x03, 0x00, 0xeb, 0x7b, 0x11, 
0x00, 0x00, 0x03, 0x00, 0xef, 0x8d, 0x15, 
0x00, 0x00, 0x03, 0x00, 0xf3, 0x9f, 0x19, 
0x00, 0x00, 0x03, 0x00, 0xf7, 0xb2, 0x1d, 
0x00, 0x00, 0x03, 0x00, 0xfb, 0xc4, 0x20, 
0x00, 0x00, 0x03, 0x00, 0xfe, 0xd4, 0x26, 
0x01, 0x00, 0x03, 0x00, 0xdd, 0x34, 0x03, 
0x01, 0x00, 0x03, 0x00, 0xe1, 0x46, 0x07, 
0x01, 0x00, 0x03, 0x00, 0xe5, 0x58, 0x0a, 
0x01, 0x00, 0x03, 0x00, 0xe8, 0x6b, 0x0e, 
0x01, 0x00, 0x03, 0x00, 0xed, 0x82, 0x13, 
0x01, 0x00, 0x03, 0x00, 0xf2, 0x9c, 0x18, 
0x01, 0x00, 0x03, 0x00, 0xf8, 0xb8, 0x1e, 
0x01, 0x00, 0x04, 0x00, 0xfd, 0xd1, 0x26, 0x01, 
0x02, 0x00, 0x03, 0x00, 0xdd, 0x3b, 0x04, 
0x02, 0x00, 0x03, 0x00, 0xe4, 0x57, 0x0a, 
0x02, 0x00, 0x03, 0x00, 0xea, 0x72, 0x10, 
0x02, 0x00, 0x03, 0x00, 0xf0, 0x8e, 0x15, 
0x02, 0x00, 0x03, 0x00, 0xf5, 0xab, 0x1b, 
0x02, 0x00, 0x04, 0x00, 0xfb, 0xc6, 0x23, 0x01, 
0x02, 0x00, 0x04, 0x00, 0xfe, 0xdc, 0x3a, 0x05, 
0x03, 0x00, 0x03, 0x00, 0xe6, 0x60, 0x0c, 
0x03, 0x00, 0x03, 0x00, 0xee, 0x88, 0x14, 
0x03, 0x00, 0x03, 0x00, 0xf7, 0xb1, 0x1d, 
0x03, 0x00, 0x04, 0x00, 0xfd, 0xd3, 0x2c, 0x02, 
0x04, 0x00, 0x03, 0x00, 0xe2, 0x4e, 0x08, 
0x04, 0x00, 0x03, 0x00, 0xeb, 0x76, 0x10, 
0x04, 0x00, 0x03, 0x00, 0xf3, 0x9e, 0x19, 
0x04, 0x00, 0x04, 0x00, 0xfb, 0xc6, 0x27, 0x01, 
0x05, 0x00, 0x03, 0x00, 0xe0, 0x4f, 0x09, 
0x05, 0x00, 0x03, 0x00, 0xee, 0x87, 0x14, 
0x05, 0x00, 0x04, 0x00, 0xf9, 0xbd, 0x24, 0x01, 
0x05, 0x00, 0x04, 0x00, 0xfe, 0xde, 0x48, 0x08, 
0x06, 0x00, 0x03, 0x00, 0xec, 0x7e, 0x12, 
0x06, 0x00, 0x04, 0x00, 0xf7, 0xb6, 0x21, 0x01, 
0x06, 0x00, 0x04, 0x00, 0xfe, 0xdb, 0x40, 0x06, 
0x07, 0x00, 0x03, 0x00, 0xeb, 0x7a, 0x11, 
0x07, 0x00, 0x04, 0x00, 0xf9, 0xbb, 0x25, 0x01, 
0x07, 0x00, 0x04, 0x00, 0xfe, 0xe0, 0x55, 0x0a, 
0x08, 0x00, 0x03, 0x00, 0xf2, 0x98, 0x19, 
0x08, 0x00, 0x04, 0x00, 0xfc, 0xd1, 0x36, 0x04, 
0x09, 0x00, 0x03, 0x00, 0xe9, 0x74, 0x10, 
0x09, 0x00, 0x04, 0x00, 0xf8, 0xba, 0x26, 0x02, 
0x09, 0x00, 0x04, 0x00, 0xfe, 0xe2, 0x5d, 0x0c, 
0x0a, 0x00, 0x04, 0x00, 0xf4, 0xa6, 0x1f, 0x01, 
0x0a, 0x00, 0x04, 0x00, 0xfe, 0xdb, 0x4a, 0x08, 
0x0b, 0x00, 0x04, 0x00, 0xf1, 0x93, 0x19, 0x01, 
0x0b, 0x00, 0x04, 0x00, 0xfc, 0xd3, 0x41, 0x06, 
0x0c, 0x00, 0x04, 0x00, 0xef, 0x90, 0x19, 0x01, 
0x0c, 0x00, 0x04, 0x00, 0xfc, 0xd4, 0x42, 0x07, 
0x0d, 0x00, 0x04, 0x00, 0xf0, 0x91, 0x19, 0x01, 
0x0d, 0x00, 0x04, 0x00, 0xfc, 0xd5, 0x48, 0x07, 
0x0e, 0x00, 0x04, 0x00, 0xf2, 0xa0, 0x20, 0x02, 
0x0e, 0x00, 0x04, 0x00, 0xfd, 0xdf, 0x5f, 0x0d, 
0x0f, 0x00, 0x04, 0x00, 0xf7, 0xb7, 0x2c, 0x03, 
0x0f, 0x00, 0x05, 0x00, 0xfe, 0xe7, 0x79, 0x15, 0x01, 
0x10, 0x00, 0x04, 0x00, 0xfb, 0xcf, 0x48, 0x08, 
0x11, 0x00, 0x04, 0x00, 0xf3, 0xa8, 0x26, 0x02, 
0x11, 0x00, 0x05, 0x00, 0xfe, 0xe5, 0x75, 0x14, 0x01, 
0x12, 0x00, 0x04, 0x00, 0xfb, 0xce, 0x47, 0x08, 
0x13, 0x00, 0x04, 0x00, 0xf4, 0xab, 0x2c, 0x04, 
0x13, 0x00, 0x05, 0x00, 0xfe, 0xe9, 0x8a, 0x1d, 0x02, 
0x14, 0x00, 0x05, 0x00, 0xfd, 0xdc, 0x66, 0x11, 0x01, 
0x15, 0x00, 0x04, 0x00, 0xfa, 0xc9, 0x47, 0x09, 
0x16, 0x00, 0x04, 0x00, 0xf4, 0xb0, 0x34, 0x05, 
0x16, 0x00, 0x05, 0x00, 0xfe, 0xed, 0x9d, 0x29, 0x03, 
0x17, 0x00, 0x05, 0x00, 0xfd, 0xe7, 0x8a, 0x20, 0x02, 
0x18, 0x00, 0x05, 0x00, 0xfd, 0xe0, 0x76, 0x19, 0x02, 
0x19, 0x00, 0x05, 0x00, 0xfc, 0xd8, 0x65, 0x14, 0x01, 
0x1a, 0x00, 0x05, 0x00, 0xfa, 0xd0, 0x5d, 0x13, 0x01, 
0x1b, 0x00, 0x05, 0x00, 0xfa, 0xcd, 0x5a, 0x11, 0x01, 
0x1c, 0x00, 0x05, 0x00, 0xf9, 0xcb, 0x57, 0x10, 0x01, 
0x1d, 0x00, 0x05, 0x00, 0xf8, 0xc9, 0x54, 0x11, 0x01, 
0x1e, 0x00, 0x05, 0x00, 0xf8, 0xc8, 0x57, 0x13, 0x02, 
0x1f, 0x00, 0x05, 0x00, 0xf9, 0xce, 0x63, 0x17, 0x02, 
0x20, 0x00, 0x05, 0x00, 0xfa, 0xd5, 0x6e, 0x1c, 0x02, 
0x21, 0x00, 0x05, 0x00, 0xfb, 0xdb, 0x7b, 0x21, 0x04, 
0x22, 0x00, 0x06, 0x00, 0xfc, 0xe1, 0x8d, 0x2d, 0x08, 0x01, 
0x23, 0x00, 0x06, 0x00, 0xfd, 0xe9, 0xa9, 0x40, 0x0e, 0x01, 
0x24, 0x00, 0x06, 0x00, 0xfe, 0xf2, 0xc1, 0x59, 0x17, 0x02, 
0x26, 0x00, 0x06, 0x00, 0xf8, 0xd4, 0x76, 0x24, 0x07, 0x01, 
0x27, 0x00, 0x06, 0x00, 0xfc, 0xe4, 0xa0, 0x40, 0x11, 0x02, 
0x28, 0x00, 0x06, 0x00, 0xfe, 0xf1, 0xc7, 0x69, 0x21, 0x06, 
0x2a, 0x00, 0x06, 0x00, 0xfa, 0xe0, 0x99, 0x3c, 0x12, 0x02, 
0x2b, 0x00, 0x07, 0x00, 0xfd, 0xef, 0xc7, 0x71, 0x27, 0x0b, 0x01, 
0x2d, 0x00, 0x07, 0x00, 0xfa, 0xe5, 0xb0, 0x57, 0x1d, 0x06, 0x01, 
0x2e, 0x00, 0x08, 0x00, 0xfe, 0xf6, 0xdb, 0x96, 0x41, 0x18, 0x06, 0x01, 
0x30, 0x00, 0x07, 0x00, 0xfd, 0xf0, 0xd2, 0x8c, 0x3e, 0x17, 0x05, 
0x32, 0x00, 0x08, 0x00, 0xfc, 0xee, 0xd0, 0x8a, 0x3d, 0x18, 0x07, 0x01, 
0x34, 0x00, 0x08, 0x00, 0xfc, 0xee, 0xd0, 0x8f, 0x46, 0x1e, 0x0b, 0x01, 
0x36, 0x00, 0x08, 0x00, 0xfc, 0xf0, 0xd9, 0xa3, 0x5a, 0x25, 0x10, 0x05, 
0x38, 0x00, 0x09, 0x00, 0xfd, 0xf4, 0xe1, 0xb7, 0x76, 0x3b, 0x1c, 0x0e, 0x03, 
0x3a, 0x00, 0x0a, 0x00, 0xfe, 0xf8, 0xeb, 0xd6, 0xa6, 0x67, 0x31, 0x19, 0x0b, 0x02, 
0x3d, 0x00, 0x0a, 0x00, 0xfd, 0xf4, 0xe6, 0xce, 0x98, 0x5a, 0x29, 0x15, 0x08, 0x01, 
0x40, 0x00, 0x0a, 0x00, 0xfc, 0xf2, 0xe3, 0xc5, 0x8b, 0x4d, 0x24, 0x14, 0x0a, 0x02, 
0x43, 0x00, 0x0b, 0x00, 0xfa, 0xef, 0xdf, 0xbd, 0x89, 0x54, 0x2b, 0x1b, 0x11, 0x08, 0x02, 
0x45, 0x00, 0x0e, 0x00, 0xfe, 0xf9, 0xef, 0xe2, 0xcf, 0xa6, 0x78, 0x4c, 0x2b, 0x1d, 0x14, 0x0c, 0x06, 0x01, 
0x49, 0x00, 0x10, 0x00, 0xfc, 0xf4, 0xeb, 0xe1, 0xd1, 0xae, 0x88, 0x62, 0x40, 0x27, 0x1c, 0x17, 0x11, 0x0b, 0x05, 0x01, 
0x4d, 0x00, 0x14, 0x00, 0xfd, 0xf6, 0xee, 0xe7, 0xde, 0xce, 0xb1, 0x94, 0x77, 0x5c, 0x40, 0x28, 0x1f, 0x19, 0x15, 0x10, 0x0c, 0x08, 0x04, 0x01, 
0x52, 0x00, 0x1c, 0x00, 0xfc, 0xf7, 0xf1, 0xeb, 0xe5, 0xdf, 0xd4, 0xbc, 0xa1, 0x8b, 0x76, 0x62, 0x4e, 0x3a, 0x2a, 0x22, 0x1d, 0x1a, 0x17, 0x14, 0x11, 0x0f, 0x0c, 0x09, 0x07, 0x05, 0x03, 0x01, 
0x58, 0x00, 0x41, 0x00, 0xfe, 0xf9, 0xf3, 0xef, 0xeb, 0xe7, 0xe3, 0xde, 0xd8, 0xc8, 0xb6, 0xa6, 0x97, 0x89, 0x7b, 0x6d, 0x5f, 0x53, 0x48, 0x3e, 0x33, 0x29, 0x24, 0x22, 0x20, 0x1e, 0x1d, 0x1b, 0x1a, 0x19, 0x17, 0x16, 0x15, 0x13, 0x12, 0x10, 0x0f, 0x0e, 0x0d, 0x0c, 0x0b, 0x0b, 0x0a, 0x09, 0x09, 0x08, 0x07, 0x07, 0x06, 0x05, 0x05, 0x04, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 
0x60, 0x00, 0x3b, 0x00, 0xfe, 0xfb, 0xf8, 0xf4, 0xf1, 0xef, 0xec, 0xe9, 0xe6, 0xe4, 0xe1, 0xdf, 0xdd, 0xda, 0xd2, 0xc6, 0xbc, 0xb4, 0xab, 0xa3, 0x9b, 0x92, 0x8a, 0x82, 0x79, 0x71, 0x68, 0x61, 0x58, 0x51, 0x4c, 0x48, 0x44, 0x40, 0x3c, 0x38, 0x33, 0x30, 0x2c, 0x27, 0x23, 0x20, 0x1b, 0x17, 0x15, 0x14, 0x12, 0x10, 0x0f, 0x0e, 0x0c, 0x0a, 0x09, 0x08, 0x06, 0x04, 0x03, 0x02, 0x01, 
};

#endif
