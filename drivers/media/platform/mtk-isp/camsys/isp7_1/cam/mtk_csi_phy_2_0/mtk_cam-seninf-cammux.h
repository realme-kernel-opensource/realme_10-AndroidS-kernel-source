/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#ifndef __SENINF_CAM_MUX_H__
#define __SENINF_CAM_MUX_H__

#define SENINF_CAM_MUX_CTRL_0 0x0000
#define RG_SENINF_CAM_MUX0_SRC_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX0_SRC_SEL_MASK (0xf << 0)
#define RG_SENINF_CAM_MUX1_SRC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX1_SRC_SEL_MASK (0xf << 8)
#define RG_SENINF_CAM_MUX2_SRC_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX2_SRC_SEL_MASK (0xf << 16)
#define RG_SENINF_CAM_MUX3_SRC_SEL_SHIFT 24
#define RG_SENINF_CAM_MUX3_SRC_SEL_MASK (0xf << 24)

#define SENINF_CAM_MUX_CTRL_1 0x0004
#define RG_SENINF_CAM_MUX4_SRC_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX4_SRC_SEL_MASK (0xf << 0)
#define RG_SENINF_CAM_MUX5_SRC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX5_SRC_SEL_MASK (0xf << 8)
#define RG_SENINF_CAM_MUX6_SRC_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX6_SRC_SEL_MASK (0xf << 16)
#define RG_SENINF_CAM_MUX7_SRC_SEL_SHIFT 24
#define RG_SENINF_CAM_MUX7_SRC_SEL_MASK (0xf << 24)

#define SENINF_CAM_MUX_CTRL_2 0x0008
#define RG_SENINF_CAM_MUX8_SRC_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX8_SRC_SEL_MASK (0xf << 0)
#define RG_SENINF_CAM_MUX9_SRC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX9_SRC_SEL_MASK (0xf << 8)
#define RG_SENINF_CAM_MUX10_SRC_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX10_SRC_SEL_MASK (0xf << 16)
#define RG_SENINF_CAM_MUX11_SRC_SEL_SHIFT 24
#define RG_SENINF_CAM_MUX11_SRC_SEL_MASK (0xf << 24)

#define SENINF_CAM_MUX_CTRL_3 0x000c
#define RG_SENINF_CAM_MUX12_SRC_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX12_SRC_SEL_MASK (0xf << 0)
#define RG_SENINF_CAM_MUX13_SRC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX13_SRC_SEL_MASK (0xf << 8)
#define RG_SENINF_CAM_MUX14_SRC_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX14_SRC_SEL_MASK (0xf << 16)
#define RG_SENINF_CAM_MUX15_SRC_SEL_SHIFT 24
#define RG_SENINF_CAM_MUX15_SRC_SEL_MASK (0xf << 24)

#define SENINF_CAM_MUX_EN 0x0010
#define SENINF_CAM_MUX0_EN_SHIFT 0
#define SENINF_CAM_MUX0_EN_MASK (0x1 << 0)
#define SENINF_CAM_MUX1_EN_SHIFT 1
#define SENINF_CAM_MUX1_EN_MASK (0x1 << 1)
#define SENINF_CAM_MUX2_EN_SHIFT 2
#define SENINF_CAM_MUX2_EN_MASK (0x1 << 2)
#define SENINF_CAM_MUX3_EN_SHIFT 3
#define SENINF_CAM_MUX3_EN_MASK (0x1 << 3)
#define SENINF_CAM_MUX4_EN_SHIFT 4
#define SENINF_CAM_MUX4_EN_MASK (0x1 << 4)
#define SENINF_CAM_MUX5_EN_SHIFT 5
#define SENINF_CAM_MUX5_EN_MASK (0x1 << 5)
#define SENINF_CAM_MUX6_EN_SHIFT 6
#define SENINF_CAM_MUX6_EN_MASK (0x1 << 6)
#define SENINF_CAM_MUX7_EN_SHIFT 7
#define SENINF_CAM_MUX7_EN_MASK (0x1 << 7)
#define SENINF_CAM_MUX8_EN_SHIFT 8
#define SENINF_CAM_MUX8_EN_MASK (0x1 << 8)
#define SENINF_CAM_MUX9_EN_SHIFT 9
#define SENINF_CAM_MUX9_EN_MASK (0x1 << 9)
#define SENINF_CAM_MUX10_EN_SHIFT 10
#define SENINF_CAM_MUX10_EN_MASK (0x1 << 10)
#define SENINF_CAM_MUX11_EN_SHIFT 11
#define SENINF_CAM_MUX11_EN_MASK (0x1 << 11)
#define SENINF_CAM_MUX12_EN_SHIFT 12
#define SENINF_CAM_MUX12_EN_MASK (0x1 << 12)
#define SENINF_CAM_MUX13_EN_SHIFT 13
#define SENINF_CAM_MUX13_EN_MASK (0x1 << 13)
#define SENINF_CAM_MUX14_EN_SHIFT 14
#define SENINF_CAM_MUX14_EN_MASK (0x1 << 14)
#define SENINF_CAM_MUX15_EN_SHIFT 15
#define SENINF_CAM_MUX15_EN_MASK (0x1 << 15)

#define SENINF_CAM_MUX_CHK_EN 0x0018
#define SENINF_CAM_MUX0_CHK_EN_SHIFT 0
#define SENINF_CAM_MUX0_CHK_EN_MASK (0x1 << 0)
#define SENINF_CAM_MUX1_CHK_EN_SHIFT 1
#define SENINF_CAM_MUX1_CHK_EN_MASK (0x1 << 1)
#define SENINF_CAM_MUX2_CHK_EN_SHIFT 2
#define SENINF_CAM_MUX2_CHK_EN_MASK (0x1 << 2)
#define SENINF_CAM_MUX3_CHK_EN_SHIFT 3
#define SENINF_CAM_MUX3_CHK_EN_MASK (0x1 << 3)
#define SENINF_CAM_MUX4_CHK_EN_SHIFT 4
#define SENINF_CAM_MUX4_CHK_EN_MASK (0x1 << 4)
#define SENINF_CAM_MUX5_CHK_EN_SHIFT 5
#define SENINF_CAM_MUX5_CHK_EN_MASK (0x1 << 5)
#define SENINF_CAM_MUX6_CHK_EN_SHIFT 6
#define SENINF_CAM_MUX6_CHK_EN_MASK (0x1 << 6)
#define SENINF_CAM_MUX7_CHK_EN_SHIFT 7
#define SENINF_CAM_MUX7_CHK_EN_MASK (0x1 << 7)
#define SENINF_CAM_MUX8_CHK_EN_SHIFT 8
#define SENINF_CAM_MUX8_CHK_EN_MASK (0x1 << 8)
#define SENINF_CAM_MUX9_CHK_EN_SHIFT 9
#define SENINF_CAM_MUX9_CHK_EN_MASK (0x1 << 9)
#define SENINF_CAM_MUX10_CHK_EN_SHIFT 10
#define SENINF_CAM_MUX10_CHK_EN_MASK (0x1 << 10)
#define SENINF_CAM_MUX11_CHK_EN_SHIFT 11
#define SENINF_CAM_MUX11_CHK_EN_MASK (0x1 << 11)
#define SENINF_CAM_MUX12_CHK_EN_SHIFT 12
#define SENINF_CAM_MUX12_CHK_EN_MASK (0x1 << 12)
#define SENINF_CAM_MUX13_CHK_EN_SHIFT 13
#define SENINF_CAM_MUX13_CHK_EN_MASK (0x1 << 13)
#define SENINF_CAM_MUX14_CHK_EN_SHIFT 14
#define SENINF_CAM_MUX14_CHK_EN_MASK (0x1 << 14)
#define SENINF_CAM_MUX15_CHK_EN_SHIFT 15
#define SENINF_CAM_MUX15_CHK_EN_MASK (0x1 << 15)

#define SENINF_CAM_MUX0_OPT 0x0020
#define RG_SENINF_CAM_MUX0_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX0_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX0_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX0_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX0_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX0_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX0_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX0_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX0_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX0_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX1_OPT 0x0024
#define RG_SENINF_CAM_MUX1_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX1_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX1_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX1_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX1_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX1_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX1_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX1_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX1_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX1_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX2_OPT 0x0028
#define RG_SENINF_CAM_MUX2_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX2_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX2_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX2_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX2_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX2_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX2_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX2_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX2_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX2_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX3_OPT 0x002c
#define RG_SENINF_CAM_MUX3_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX3_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX3_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX3_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX3_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX3_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX3_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX3_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX3_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX3_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX4_OPT 0x0030
#define RG_SENINF_CAM_MUX4_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX4_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX4_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX4_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX4_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX4_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX4_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX4_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX4_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX4_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX5_OPT 0x0034
#define RG_SENINF_CAM_MUX5_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX5_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX5_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX5_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX5_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX5_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX5_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX5_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX5_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX5_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX6_OPT 0x0038
#define RG_SENINF_CAM_MUX6_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX6_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX6_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX6_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX6_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX6_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX6_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX6_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX6_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX6_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX7_OPT 0x003c
#define RG_SENINF_CAM_MUX7_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX7_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX7_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX7_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX7_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX7_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX7_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX7_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX7_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX7_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX8_OPT 0x0040
#define RG_SENINF_CAM_MUX8_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX8_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX8_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX8_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX8_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX8_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX8_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX8_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX8_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX8_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX9_OPT 0x0044
#define RG_SENINF_CAM_MUX9_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX9_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX9_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX9_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX9_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX9_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX9_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX9_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX9_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX9_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX10_OPT 0x0048
#define RG_SENINF_CAM_MUX10_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX10_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX10_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX10_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX10_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX10_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX10_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX10_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX10_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX10_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX11_OPT 0x004c
#define RG_SENINF_CAM_MUX11_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX11_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX11_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX11_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX11_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX11_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX11_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX11_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX11_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX11_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX12_OPT 0x0050
#define RG_SENINF_CAM_MUX12_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX12_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX12_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX12_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX12_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX12_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX12_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX12_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX12_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX12_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX13_OPT 0x0054
#define RG_SENINF_CAM_MUX13_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX13_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX13_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX13_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX13_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX13_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX13_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX13_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX13_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX13_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX14_OPT 0x0058
#define RG_SENINF_CAM_MUX14_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX14_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX14_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX14_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX14_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX14_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX14_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX14_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX14_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX14_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX15_OPT 0x005c
#define RG_SENINF_CAM_MUX15_VC_EN_SHIFT 0
#define RG_SENINF_CAM_MUX15_VC_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX15_DT_EN_SHIFT 1
#define RG_SENINF_CAM_MUX15_DT_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX15_VC_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX15_VC_SEL_MASK (0x1f << 8)
#define RG_SENINF_CAM_MUX15_DT_SEL_SHIFT 16
#define RG_SENINF_CAM_MUX15_DT_SEL_MASK (0x3f << 16)
#define RG_SENINF_CAM_MUX15_VSYNC_BYPASS_SHIFT 24
#define RG_SENINF_CAM_MUX15_VSYNC_BYPASS_MASK (0x1 << 24)

#define SENINF_CAM_MUX_CTRL 0x0080
#define SENINF_CAM_MUX_SW_RST_SHIFT 0
#define SENINF_CAM_MUX_SW_RST_MASK (0x1 << 0)
#define SENINF_CAM_MUX_IRQ_SW_RST_SHIFT 1
#define SENINF_CAM_MUX_IRQ_SW_RST_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX_SLICE_FULL_OPT_SHIFT 7
#define RG_SENINF_CAM_MUX_SLICE_FULL_OPT_MASK (0x1 << 7)
#define RG_SENINF_CAM_MUX_IRQ_CLR_MODE_SHIFT 8
#define RG_SENINF_CAM_MUX_IRQ_CLR_MODE_MASK (0x1 << 8)
#define RG_SENINF_CAM_MUX_IRQ_VERIF_EN_SHIFT 9
#define RG_SENINF_CAM_MUX_IRQ_VERIF_EN_MASK (0x1 << 9)

#define SENINF_CAM_MUX_DYN_CTRL 0x0088
#define RG_SENINF_CAM_MUX_DYN_SWITCH_BSY0_SHIFT 0
#define RG_SENINF_CAM_MUX_DYN_SWITCH_BSY0_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX_DYN_SWITCH_BSY1_SHIFT 4
#define RG_SENINF_CAM_MUX_DYN_SWITCH_BSY1_MASK (0x1 << 4)
#define CAM_MUX_DYN_PAGE_SEL_SHIFT 28
#define CAM_MUX_DYN_PAGE_SEL_MASK (0x1 << 28)

#define SENINF_CAM_MUX_DYN_EN 0x008c
#define RG_SENINF_CAM_MUX_DYN_SWITCH_EN0_SHIFT 0
#define RG_SENINF_CAM_MUX_DYN_SWITCH_EN0_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX_DYN_SWITCH_EN1_SHIFT 16
#define RG_SENINF_CAM_MUX_DYN_SWITCH_EN1_MASK (0xffff << 16)

#define SENINF_CAM_MUX_NEXT_CTRL_0 0x0090
#define CAM_MUX0_NEXT_SRC_SEL_SHIFT 0
#define CAM_MUX0_NEXT_SRC_SEL_MASK (0xf << 0)
#define CAM_MUX1_NEXT_SRC_SEL_SHIFT 8
#define CAM_MUX1_NEXT_SRC_SEL_MASK (0xf << 8)
#define CAM_MUX2_NEXT_SRC_SEL_SHIFT 16
#define CAM_MUX2_NEXT_SRC_SEL_MASK (0xf << 16)
#define CAM_MUX3_NEXT_SRC_SEL_SHIFT 24
#define CAM_MUX3_NEXT_SRC_SEL_MASK (0xf << 24)

#define SENINF_CAM_MUX_NEXT_CTRL_1 0x0094
#define CAM_MUX4_NEXT_SRC_SEL_SHIFT 0
#define CAM_MUX4_NEXT_SRC_SEL_MASK (0xf << 0)
#define CAM_MUX5_NEXT_SRC_SEL_SHIFT 8
#define CAM_MUX5_NEXT_SRC_SEL_MASK (0xf << 8)
#define CAM_MUX6_NEXT_SRC_SEL_SHIFT 16
#define CAM_MUX6_NEXT_SRC_SEL_MASK (0xf << 16)
#define CAM_MUX7_NEXT_SRC_SEL_SHIFT 24
#define CAM_MUX7_NEXT_SRC_SEL_MASK (0xf << 24)

#define SENINF_CAM_MUX_NEXT_CTRL_2 0x0098
#define CAM_MUX8_NEXT_SRC_SEL_SHIFT 0
#define CAM_MUX8_NEXT_SRC_SEL_MASK (0xf << 0)
#define CAM_MUX9_NEXT_SRC_SEL_SHIFT 8
#define CAM_MUX9_NEXT_SRC_SEL_MASK (0xf << 8)
#define CAM_MUX10_NEXT_SRC_SEL_SHIFT 16
#define CAM_MUX10_NEXT_SRC_SEL_MASK (0xf << 16)
#define CAM_MUX11_NEXT_SRC_SEL_SHIFT 24
#define CAM_MUX11_NEXT_SRC_SEL_MASK (0xf << 24)

#define SENINF_CAM_MUX_NEXT_CTRL_3 0x009c
#define CAM_MUX12_NEXT_SRC_SEL_SHIFT 0
#define CAM_MUX12_NEXT_SRC_SEL_MASK (0xf << 0)
#define CAM_MUX13_NEXT_SRC_SEL_SHIFT 8
#define CAM_MUX13_NEXT_SRC_SEL_MASK (0xf << 8)
#define CAM_MUX14_NEXT_SRC_SEL_SHIFT 16
#define CAM_MUX14_NEXT_SRC_SEL_MASK (0xf << 16)
#define CAM_MUX15_NEXT_SRC_SEL_SHIFT 24
#define CAM_MUX15_NEXT_SRC_SEL_MASK (0xf << 24)

#define SENINF_CAM_MUX_IRQ_EN 0x00a0
#define RG_SENINF_CAM_MUX0_HSIZE_ERR_IRQ_EN_SHIFT 0
#define RG_SENINF_CAM_MUX0_HSIZE_ERR_IRQ_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX0_VSIZE_ERR_IRQ_EN_SHIFT 1
#define RG_SENINF_CAM_MUX0_VSIZE_ERR_IRQ_EN_MASK (0x1 << 1)
#define RG_SENINF_CAM_MUX1_HSIZE_ERR_IRQ_EN_SHIFT 2
#define RG_SENINF_CAM_MUX1_HSIZE_ERR_IRQ_EN_MASK (0x1 << 2)
#define RG_SENINF_CAM_MUX1_VSIZE_ERR_IRQ_EN_SHIFT 3
#define RG_SENINF_CAM_MUX1_VSIZE_ERR_IRQ_EN_MASK (0x1 << 3)
#define RG_SENINF_CAM_MUX2_HSIZE_ERR_IRQ_EN_SHIFT 4
#define RG_SENINF_CAM_MUX2_HSIZE_ERR_IRQ_EN_MASK (0x1 << 4)
#define RG_SENINF_CAM_MUX2_VSIZE_ERR_IRQ_EN_SHIFT 5
#define RG_SENINF_CAM_MUX2_VSIZE_ERR_IRQ_EN_MASK (0x1 << 5)
#define RG_SENINF_CAM_MUX3_HSIZE_ERR_IRQ_EN_SHIFT 6
#define RG_SENINF_CAM_MUX3_HSIZE_ERR_IRQ_EN_MASK (0x1 << 6)
#define RG_SENINF_CAM_MUX3_VSIZE_ERR_IRQ_EN_SHIFT 7
#define RG_SENINF_CAM_MUX3_VSIZE_ERR_IRQ_EN_MASK (0x1 << 7)
#define RG_SENINF_CAM_MUX4_HSIZE_ERR_IRQ_EN_SHIFT 8
#define RG_SENINF_CAM_MUX4_HSIZE_ERR_IRQ_EN_MASK (0x1 << 8)
#define RG_SENINF_CAM_MUX4_VSIZE_ERR_IRQ_EN_SHIFT 9
#define RG_SENINF_CAM_MUX4_VSIZE_ERR_IRQ_EN_MASK (0x1 << 9)
#define RG_SENINF_CAM_MUX5_HSIZE_ERR_IRQ_EN_SHIFT 10
#define RG_SENINF_CAM_MUX5_HSIZE_ERR_IRQ_EN_MASK (0x1 << 10)
#define RG_SENINF_CAM_MUX5_VSIZE_ERR_IRQ_EN_SHIFT 11
#define RG_SENINF_CAM_MUX5_VSIZE_ERR_IRQ_EN_MASK (0x1 << 11)
#define RG_SENINF_CAM_MUX6_HSIZE_ERR_IRQ_EN_SHIFT 12
#define RG_SENINF_CAM_MUX6_HSIZE_ERR_IRQ_EN_MASK (0x1 << 12)
#define RG_SENINF_CAM_MUX6_VSIZE_ERR_IRQ_EN_SHIFT 13
#define RG_SENINF_CAM_MUX6_VSIZE_ERR_IRQ_EN_MASK (0x1 << 13)
#define RG_SENINF_CAM_MUX7_HSIZE_ERR_IRQ_EN_SHIFT 14
#define RG_SENINF_CAM_MUX7_HSIZE_ERR_IRQ_EN_MASK (0x1 << 14)
#define RG_SENINF_CAM_MUX7_VSIZE_ERR_IRQ_EN_SHIFT 15
#define RG_SENINF_CAM_MUX7_VSIZE_ERR_IRQ_EN_MASK (0x1 << 15)
#define RG_SENINF_CAM_MUX8_HSIZE_ERR_IRQ_EN_SHIFT 16
#define RG_SENINF_CAM_MUX8_HSIZE_ERR_IRQ_EN_MASK (0x1 << 16)
#define RG_SENINF_CAM_MUX8_VSIZE_ERR_IRQ_EN_SHIFT 17
#define RG_SENINF_CAM_MUX8_VSIZE_ERR_IRQ_EN_MASK (0x1 << 17)
#define RG_SENINF_CAM_MUX9_HSIZE_ERR_IRQ_EN_SHIFT 18
#define RG_SENINF_CAM_MUX9_HSIZE_ERR_IRQ_EN_MASK (0x1 << 18)
#define RG_SENINF_CAM_MUX9_VSIZE_ERR_IRQ_EN_SHIFT 19
#define RG_SENINF_CAM_MUX9_VSIZE_ERR_IRQ_EN_MASK (0x1 << 19)
#define RG_SENINF_CAM_MUX10_HSIZE_ERR_IRQ_EN_SHIFT 20
#define RG_SENINF_CAM_MUX10_HSIZE_ERR_IRQ_EN_MASK (0x1 << 20)
#define RG_SENINF_CAM_MUX10_VSIZE_ERR_IRQ_EN_SHIFT 21
#define RG_SENINF_CAM_MUX10_VSIZE_ERR_IRQ_EN_MASK (0x1 << 21)
#define RG_SENINF_CAM_MUX11_HSIZE_ERR_IRQ_EN_SHIFT 22
#define RG_SENINF_CAM_MUX11_HSIZE_ERR_IRQ_EN_MASK (0x1 << 22)
#define RG_SENINF_CAM_MUX11_VSIZE_ERR_IRQ_EN_SHIFT 23
#define RG_SENINF_CAM_MUX11_VSIZE_ERR_IRQ_EN_MASK (0x1 << 23)
#define RG_SENINF_CAM_MUX12_HSIZE_ERR_IRQ_EN_SHIFT 24
#define RG_SENINF_CAM_MUX12_HSIZE_ERR_IRQ_EN_MASK (0x1 << 24)
#define RG_SENINF_CAM_MUX12_VSIZE_ERR_IRQ_EN_SHIFT 25
#define RG_SENINF_CAM_MUX12_VSIZE_ERR_IRQ_EN_MASK (0x1 << 25)
#define RG_SENINF_CAM_MUX13_HSIZE_ERR_IRQ_EN_SHIFT 26
#define RG_SENINF_CAM_MUX13_HSIZE_ERR_IRQ_EN_MASK (0x1 << 26)
#define RG_SENINF_CAM_MUX13_VSIZE_ERR_IRQ_EN_SHIFT 27
#define RG_SENINF_CAM_MUX13_VSIZE_ERR_IRQ_EN_MASK (0x1 << 27)
#define RG_SENINF_CAM_MUX14_HSIZE_ERR_IRQ_EN_SHIFT 28
#define RG_SENINF_CAM_MUX14_HSIZE_ERR_IRQ_EN_MASK (0x1 << 28)
#define RG_SENINF_CAM_MUX14_VSIZE_ERR_IRQ_EN_SHIFT 29
#define RG_SENINF_CAM_MUX14_VSIZE_ERR_IRQ_EN_MASK (0x1 << 29)
#define RG_SENINF_CAM_MUX15_HSIZE_ERR_IRQ_EN_SHIFT 30
#define RG_SENINF_CAM_MUX15_HSIZE_ERR_IRQ_EN_MASK (0x1 << 30)
#define RG_SENINF_CAM_MUX15_VSIZE_ERR_IRQ_EN_SHIFT 31
#define RG_SENINF_CAM_MUX15_VSIZE_ERR_IRQ_EN_MASK (0x1 << 31)

#define SENINF_CAM_MUX_IRQ_STATUS 0x00a8
#define RO_SENINF_CAM_MUX0_HSIZE_ERR_IRQ_SHIFT 0
#define RO_SENINF_CAM_MUX0_HSIZE_ERR_IRQ_MASK (0x1 << 0)
#define RO_SENINF_CAM_MUX0_VSIZE_ERR_IRQ_SHIFT 1
#define RO_SENINF_CAM_MUX0_VSIZE_ERR_IRQ_MASK (0x1 << 1)
#define RO_SENINF_CAM_MUX1_HSIZE_ERR_IRQ_SHIFT 2
#define RO_SENINF_CAM_MUX1_HSIZE_ERR_IRQ_MASK (0x1 << 2)
#define RO_SENINF_CAM_MUX1_VSIZE_ERR_IRQ_SHIFT 3
#define RO_SENINF_CAM_MUX1_VSIZE_ERR_IRQ_MASK (0x1 << 3)
#define RO_SENINF_CAM_MUX2_HSIZE_ERR_IRQ_SHIFT 4
#define RO_SENINF_CAM_MUX2_HSIZE_ERR_IRQ_MASK (0x1 << 4)
#define RO_SENINF_CAM_MUX2_VSIZE_ERR_IRQ_SHIFT 5
#define RO_SENINF_CAM_MUX2_VSIZE_ERR_IRQ_MASK (0x1 << 5)
#define RO_SENINF_CAM_MUX3_HSIZE_ERR_IRQ_SHIFT 6
#define RO_SENINF_CAM_MUX3_HSIZE_ERR_IRQ_MASK (0x1 << 6)
#define RO_SENINF_CAM_MUX3_VSIZE_ERR_IRQ_SHIFT 7
#define RO_SENINF_CAM_MUX3_VSIZE_ERR_IRQ_MASK (0x1 << 7)
#define RO_SENINF_CAM_MUX4_HSIZE_ERR_IRQ_SHIFT 8
#define RO_SENINF_CAM_MUX4_HSIZE_ERR_IRQ_MASK (0x1 << 8)
#define RO_SENINF_CAM_MUX4_VSIZE_ERR_IRQ_SHIFT 9
#define RO_SENINF_CAM_MUX4_VSIZE_ERR_IRQ_MASK (0x1 << 9)
#define RO_SENINF_CAM_MUX5_HSIZE_ERR_IRQ_SHIFT 10
#define RO_SENINF_CAM_MUX5_HSIZE_ERR_IRQ_MASK (0x1 << 10)
#define RO_SENINF_CAM_MUX5_VSIZE_ERR_IRQ_SHIFT 11
#define RO_SENINF_CAM_MUX5_VSIZE_ERR_IRQ_MASK (0x1 << 11)
#define RO_SENINF_CAM_MUX6_HSIZE_ERR_IRQ_SHIFT 12
#define RO_SENINF_CAM_MUX6_HSIZE_ERR_IRQ_MASK (0x1 << 12)
#define RO_SENINF_CAM_MUX6_VSIZE_ERR_IRQ_SHIFT 13
#define RO_SENINF_CAM_MUX6_VSIZE_ERR_IRQ_MASK (0x1 << 13)
#define RO_SENINF_CAM_MUX7_HSIZE_ERR_IRQ_SHIFT 14
#define RO_SENINF_CAM_MUX7_HSIZE_ERR_IRQ_MASK (0x1 << 14)
#define RO_SENINF_CAM_MUX7_VSIZE_ERR_IRQ_SHIFT 15
#define RO_SENINF_CAM_MUX7_VSIZE_ERR_IRQ_MASK (0x1 << 15)
#define RO_SENINF_CAM_MUX8_HSIZE_ERR_IRQ_SHIFT 16
#define RO_SENINF_CAM_MUX8_HSIZE_ERR_IRQ_MASK (0x1 << 16)
#define RO_SENINF_CAM_MUX8_VSIZE_ERR_IRQ_SHIFT 17
#define RO_SENINF_CAM_MUX8_VSIZE_ERR_IRQ_MASK (0x1 << 17)
#define RO_SENINF_CAM_MUX9_HSIZE_ERR_IRQ_SHIFT 18
#define RO_SENINF_CAM_MUX9_HSIZE_ERR_IRQ_MASK (0x1 << 18)
#define RO_SENINF_CAM_MUX9_VSIZE_ERR_IRQ_SHIFT 19
#define RO_SENINF_CAM_MUX9_VSIZE_ERR_IRQ_MASK (0x1 << 19)
#define RO_SENINF_CAM_MUX10_HSIZE_ERR_IRQ_SHIFT 20
#define RO_SENINF_CAM_MUX10_HSIZE_ERR_IRQ_MASK (0x1 << 20)
#define RO_SENINF_CAM_MUX10_VSIZE_ERR_IRQ_SHIFT 21
#define RO_SENINF_CAM_MUX10_VSIZE_ERR_IRQ_MASK (0x1 << 21)
#define RO_SENINF_CAM_MUX11_HSIZE_ERR_IRQ_SHIFT 22
#define RO_SENINF_CAM_MUX11_HSIZE_ERR_IRQ_MASK (0x1 << 22)
#define RO_SENINF_CAM_MUX11_VSIZE_ERR_IRQ_SHIFT 23
#define RO_SENINF_CAM_MUX11_VSIZE_ERR_IRQ_MASK (0x1 << 23)
#define RO_SENINF_CAM_MUX12_HSIZE_ERR_IRQ_SHIFT 24
#define RO_SENINF_CAM_MUX12_HSIZE_ERR_IRQ_MASK (0x1 << 24)
#define RO_SENINF_CAM_MUX12_VSIZE_ERR_IRQ_SHIFT 25
#define RO_SENINF_CAM_MUX12_VSIZE_ERR_IRQ_MASK (0x1 << 25)
#define RO_SENINF_CAM_MUX13_HSIZE_ERR_IRQ_SHIFT 26
#define RO_SENINF_CAM_MUX13_HSIZE_ERR_IRQ_MASK (0x1 << 26)
#define RO_SENINF_CAM_MUX13_VSIZE_ERR_IRQ_SHIFT 27
#define RO_SENINF_CAM_MUX13_VSIZE_ERR_IRQ_MASK (0x1 << 27)
#define RO_SENINF_CAM_MUX14_HSIZE_ERR_IRQ_SHIFT 28
#define RO_SENINF_CAM_MUX14_HSIZE_ERR_IRQ_MASK (0x1 << 28)
#define RO_SENINF_CAM_MUX14_VSIZE_ERR_IRQ_SHIFT 29
#define RO_SENINF_CAM_MUX14_VSIZE_ERR_IRQ_MASK (0x1 << 29)
#define RO_SENINF_CAM_MUX15_HSIZE_ERR_IRQ_SHIFT 30
#define RO_SENINF_CAM_MUX15_HSIZE_ERR_IRQ_MASK (0x1 << 30)
#define RO_SENINF_CAM_MUX15_VSIZE_ERR_IRQ_SHIFT 31
#define RO_SENINF_CAM_MUX15_VSIZE_ERR_IRQ_MASK (0x1 << 31)

#define SENINF_CAM_MUX_IRQ_TRIG 0x00ac
#define RG_SENINF_CAM_MUX_IRQ_TRIG_SHIFT 0
#define RG_SENINF_CAM_MUX_IRQ_TRIG_MASK (0xffffffff << 0)

#define SENINF_CAM_MUX_VSYNC_IRQ_EN 0x00b0
#define RG_SENINF_CAM_MUX_VSYNC_IRQ_EN_SHIFT 0
#define RG_SENINF_CAM_MUX_VSYNC_IRQ_EN_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX_VSYNC_ALL_IRQ_EN_SHIFT 24
#define RG_SENINF_CAM_MUX_VSYNC_ALL_IRQ_EN_MASK (0x3 << 24)
#define RG_SENINF_CAM_MUX_VSYNC_ALL_NONE_IRQ_EN_SHIFT 28
#define RG_SENINF_CAM_MUX_VSYNC_ALL_NONE_IRQ_EN_MASK (0x3 << 28)

#define SENINF_CAM_MUX_VSYNC_IRQ_STS 0x00b4
#define RO_SENINF_CAM_MUX_VSYNC_IRQ_SHIFT 0
#define RO_SENINF_CAM_MUX_VSYNC_IRQ_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX_VSYNC_ALL_IRQ_SHIFT 24
#define RO_SENINF_CAM_MUX_VSYNC_ALL_IRQ_MASK (0x3 << 24)
#define RG_SENINF_CAM_MUX_VSYNC_ALL_NONE_IRQ_SHIFT 28
#define RG_SENINF_CAM_MUX_VSYNC_ALL_NONE_IRQ_MASK (0x3 << 28)

#define SENINF_CAM_MUX_VSYNC_IRQ_TRIG 0x00bc
#define RG_SENINF_CAM_MUX_VSYNC_IRQ_TRIG_SHIFT 0
#define RG_SENINF_CAM_MUX_VSYNC_IRQ_TRIG_MASK (0xffffffff << 0)

#define SENINF_CAM_MUX_DBG_CTRL 0x00c0
#define RG_SENINF_CAM_MUX_DBG_EN_SHIFT 0
#define RG_SENINF_CAM_MUX_DBG_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX_DBG_SEL_SHIFT 8
#define RG_SENINF_CAM_MUX_DBG_SEL_MASK (0xff << 8)

#define SENINF_CAM_MUX_DBG_OUT 0x00c4
#define RO_SENINF_CAM_MUX_DBG_OUT_SHIFT 0
#define RO_SENINF_CAM_MUX_DBG_OUT_MASK (0xffffffff << 0)

#define SENINF_CAM_MUX_VSYNC_T0_WINDOW_L 0x00d0
#define RG_SENINF_CAM_MUX_VSYNC_TIMER0_WINDOW_L_SHIFT 0
#define RG_SENINF_CAM_MUX_VSYNC_TIMER0_WINDOW_L_MASK (0xffffffff << 0)

#define SENINF_CAM_MUX_VSYNC_T1_WINDOW_L 0x00d8
#define RG_SENINF_CAM_MUX_VSYNC_TIMER1_WINDOW_L_SHIFT 0
#define RG_SENINF_CAM_MUX_VSYNC_TIMER1_WINDOW_L_MASK (0xffffffff << 0)

#define SENINF_CAM_MUX_SAT_IRQ_EN 0x00e0
#define RG_SENINF_CAM_MUX_SKIP_NEXT_FRAME_EN_RISE0_IRQ_EN_SHIFT 0
#define RG_SENINF_CAM_MUX_SKIP_NEXT_FRAME_EN_RISE0_IRQ_EN_MASK (0x1 << 0)
#define RG_SENINF_CAM_MUX_SKIP_NEXT_FRAME_EN_RISE1_IRQ_EN_SHIFT 1
#define RG_SENINF_CAM_MUX_SKIP_NEXT_FRAME_EN_RISE1_IRQ_EN_MASK (0x1 << 1)

#define SENINF_CAM_MUX_SAT_IRQ_STATUS 0x00e8
#define RO_SENINF_CAM_MUX_SKIP_NEXT_FRAME_EN_RISE0_IRQ_SHIFT 0
#define RO_SENINF_CAM_MUX_SKIP_NEXT_FRAME_EN_RISE0_IRQ_MASK (0x1 << 0)
#define RO_SENINF_CAM_MUX_SKIP_NEXT_FRAME_EN_RISE1_IRQ_SHIFT 1
#define RO_SENINF_CAM_MUX_SKIP_NEXT_FRAME_EN_RISE1_IRQ_MASK (0x1 << 1)

#define SENINF_CAM_MUX_SAT_IRQ_TRIG 0x00ec
#define RG_SENINF_CAM_MUX_SKIP_NEXT_FRAME_EN_RISE_IRQ_TRIG_SHIFT 0
#define RG_SENINF_CAM_MUX_SKIP_NEXT_FRAME_EN_RISE_IRQ_TRIG_MASK (0xffffffff << 0)

#define SENINF_CAM_SPARE 0x00f8
#define RG_SENINF_TOP_SPARE_0_SHIFT 0
#define RG_SENINF_TOP_SPARE_0_MASK (0xff << 0)
#define RG_SENINF_TOP_SPARE_1_SHIFT 16
#define RG_SENINF_TOP_SPARE_1_MASK (0xff << 16)

#define SENINF_CAM_MUX0_CHK_CTL_0 0x0100
#define RG_SENINF_CAM_MUX0_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX0_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX0_CHK_CTL_1 0x0104
#define RG_SENINF_CAM_MUX0_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX0_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX0_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX0_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX0_CHK_RES 0x0108
#define RO_SENINF_CAM_MUX0_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX0_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX0_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX0_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX0_CHK_ERR_RES 0x010c
#define RO_SENINF_CAM_MUX0_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX0_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX0_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX0_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX1_CHK_CTL_0 0x0110
#define RG_SENINF_CAM_MUX1_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX1_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX1_CHK_CTL_1 0x0114
#define RG_SENINF_CAM_MUX1_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX1_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX1_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX1_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX1_CHK_RES 0x0118
#define RO_SENINF_CAM_MUX1_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX1_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX1_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX1_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX1_CHK_ERR_RES 0x011c
#define RO_SENINF_CAM_MUX1_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX1_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX1_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX1_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX2_CHK_CTL_0 0x0120
#define RG_SENINF_CAM_MUX2_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX2_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX2_CHK_CTL_1 0x0124
#define RG_SENINF_CAM_MUX2_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX2_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX2_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX2_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX2_CHK_RES 0x0128
#define RO_SENINF_CAM_MUX2_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX2_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX2_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX2_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX2_CHK_ERR_RES 0x012c
#define RO_SENINF_CAM_MUX2_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX2_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX2_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX2_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX3_CHK_CTL_0 0x0130
#define RG_SENINF_CAM_MUX3_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX3_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX3_CHK_CTL_1 0x0134
#define RG_SENINF_CAM_MUX3_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX3_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX3_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX3_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX3_CHK_RES 0x0138
#define RO_SENINF_CAM_MUX3_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX3_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX3_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX3_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX3_CHK_ERR_RES 0x013c
#define RO_SENINF_CAM_MUX3_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX3_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX3_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX3_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX4_CHK_CTL_0 0x0140
#define RG_SENINF_CAM_MUX4_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX4_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX4_CHK_CTL_1 0x0144
#define RG_SENINF_CAM_MUX4_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX4_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX4_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX4_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX4_CHK_RES 0x0148
#define RO_SENINF_CAM_MUX4_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX4_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX4_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX4_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX4_CHK_ERR_RES 0x014c
#define RO_SENINF_CAM_MUX4_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX4_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX4_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX4_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX5_CHK_CTL_0 0x0150
#define RG_SENINF_CAM_MUX5_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX5_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX5_CHK_CTL_1 0x0154
#define RG_SENINF_CAM_MUX5_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX5_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX5_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX5_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX5_CHK_RES 0x0158
#define RO_SENINF_CAM_MUX5_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX5_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX5_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX5_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX5_CHK_ERR_RES 0x015c
#define RO_SENINF_CAM_MUX5_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX5_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX5_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX5_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX6_CHK_CTL_0 0x0160
#define RG_SENINF_CAM_MUX6_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX6_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX6_CHK_CTL_1 0x0164
#define RG_SENINF_CAM_MUX6_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX6_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX6_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX6_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX6_CHK_RES 0x0168
#define RO_SENINF_CAM_MUX6_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX6_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX6_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX6_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX6_CHK_ERR_RES 0x016c
#define RO_SENINF_CAM_MUX6_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX6_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX6_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX6_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX7_CHK_CTL_0 0x0170
#define RG_SENINF_CAM_MUX7_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX7_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX7_CHK_CTL_1 0x0174
#define RG_SENINF_CAM_MUX7_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX7_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX7_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX7_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX7_CHK_RES 0x0178
#define RO_SENINF_CAM_MUX7_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX7_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX7_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX7_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX7_CHK_ERR_RES 0x017c
#define RO_SENINF_CAM_MUX7_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX7_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX7_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX7_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX8_CHK_CTL_0 0x0180
#define RG_SENINF_CAM_MUX8_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX8_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX8_CHK_CTL_1 0x0184
#define RG_SENINF_CAM_MUX8_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX8_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX8_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX8_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX8_CHK_RES 0x0188
#define RO_SENINF_CAM_MUX8_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX8_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX8_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX8_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX8_CHK_ERR_RES 0x018c
#define RO_SENINF_CAM_MUX8_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX8_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX8_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX8_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX9_CHK_CTL_0 0x0190
#define RG_SENINF_CAM_MUX9_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX9_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX9_CHK_CTL_1 0x0194
#define RG_SENINF_CAM_MUX9_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX9_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX9_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX9_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX9_CHK_RES 0x0198
#define RO_SENINF_CAM_MUX9_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX9_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX9_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX9_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX9_CHK_ERR_RES 0x019c
#define RO_SENINF_CAM_MUX9_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX9_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX9_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX9_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX10_CHK_CTL_0 0x01a0
#define RG_SENINF_CAM_MUX10_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX10_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX10_CHK_CTL_1 0x01a4
#define RG_SENINF_CAM_MUX10_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX10_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX10_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX10_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX10_CHK_RES 0x01a8
#define RO_SENINF_CAM_MUX10_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX10_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX10_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX10_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX10_CHK_ERR_RES 0x01ac
#define RO_SENINF_CAM_MUX10_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX10_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX10_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX10_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX11_CHK_CTL_0 0x01b0
#define RG_SENINF_CAM_MUX11_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX11_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX11_CHK_CTL_1 0x01b4
#define RG_SENINF_CAM_MUX11_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX11_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX11_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX11_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX11_CHK_RES 0x01b8
#define RO_SENINF_CAM_MUX11_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX11_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX11_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX11_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX11_CHK_ERR_RES 0x01bc
#define RO_SENINF_CAM_MUX11_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX11_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX11_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX11_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX12_CHK_CTL_0 0x01c0
#define RG_SENINF_CAM_MUX12_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX12_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX12_CHK_CTL_1 0x01c4
#define RG_SENINF_CAM_MUX12_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX12_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX12_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX12_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX12_CHK_RES 0x01c8
#define RO_SENINF_CAM_MUX12_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX12_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX12_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX12_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX12_CHK_ERR_RES 0x01cc
#define RO_SENINF_CAM_MUX12_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX12_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX12_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX12_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX13_CHK_CTL_0 0x01d0
#define RG_SENINF_CAM_MUX13_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX13_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX13_CHK_CTL_1 0x01d4
#define RG_SENINF_CAM_MUX13_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX13_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX13_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX13_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX13_CHK_RES 0x01d8
#define RO_SENINF_CAM_MUX13_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX13_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX13_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX13_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX13_CHK_ERR_RES 0x01dc
#define RO_SENINF_CAM_MUX13_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX13_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX13_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX13_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX14_CHK_CTL_0 0x01e0
#define RG_SENINF_CAM_MUX14_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX14_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX14_CHK_CTL_1 0x01e4
#define RG_SENINF_CAM_MUX14_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX14_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX14_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX14_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX14_CHK_RES 0x01e8
#define RO_SENINF_CAM_MUX14_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX14_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX14_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX14_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX14_CHK_ERR_RES 0x01ec
#define RO_SENINF_CAM_MUX14_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX14_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX14_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX14_RCV_ERR_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX15_CHK_CTL_0 0x01f0
#define RG_SENINF_CAM_MUX15_PIX_MODE_SEL_SHIFT 0
#define RG_SENINF_CAM_MUX15_PIX_MODE_SEL_MASK (0x3 << 0)

#define SENINF_CAM_MUX15_CHK_CTL_1 0x01f4
#define RG_SENINF_CAM_MUX15_EXP_HSIZE_SHIFT 0
#define RG_SENINF_CAM_MUX15_EXP_HSIZE_MASK (0xffff << 0)
#define RG_SENINF_CAM_MUX15_EXP_VSIZE_SHIFT 16
#define RG_SENINF_CAM_MUX15_EXP_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX15_CHK_RES 0x01f8
#define RO_SENINF_CAM_MUX15_RCV_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX15_RCV_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX15_RCV_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX15_RCV_VSIZE_MASK (0xffff << 16)

#define SENINF_CAM_MUX15_CHK_ERR_RES 0x01fc
#define RO_SENINF_CAM_MUX15_RCV_ERR_HSIZE_SHIFT 0
#define RO_SENINF_CAM_MUX15_RCV_ERR_HSIZE_MASK (0xffff << 0)
#define RO_SENINF_CAM_MUX15_RCV_ERR_VSIZE_SHIFT 16
#define RO_SENINF_CAM_MUX15_RCV_ERR_VSIZE_MASK (0xffff << 16)

#endif
