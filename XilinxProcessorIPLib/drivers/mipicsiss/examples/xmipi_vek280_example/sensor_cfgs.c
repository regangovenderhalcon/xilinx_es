/******************************************************************************
* Copyright (C) 2017 - 2022 Xilinx, Inc.  All rights reserved.
* Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
* SPDX-License-Identifier: MIT
 ******************************************************************************/

/*****************************************************************************/
/**
 *
 * @file sensor_cfgs.c
 *
 * This file contains the IMX274 CSI2 Camera sensor configurations for
 *
 * IMX274
 * - 1280x720@60fps 	(quad lane)
 * - 1920x1080@30fps	(quad lane)
 * - 1920x1080@60fps	(quad lane)
 * - 3840x2160@30fps	(quad lane)
 * - 3840x2160@60fps	(quad lane)
 *
 * The structure names are sensor_<lane_count>L_<resolution>_<fps>fps_regs[]
 *
 * <pre>
 * MODIFICATION HISTORY:
 *
 * Ver   Who    Date     Changes
 * ----- ------ -------- --------------------------------------------------
 * 1.00  pg    12/07/17 Initial release.
 * </pre>
 *
 ******************************************************************************/

#include "sensor_cfgs.h"
#include "xparameters.h"

struct regval_list imx274_config_1080p_60fps_regs[] = {
	{0x3000, 0x12},
	{0x3120, 0xF0},
	{0x3121, 0x00},
	{0x3122, 0x02},
	{0x3129, 0x9C},
	{0x312A, 0x02},
	{0x312D, 0x02},
	{0x310B, 0x00},
	{0x304C, 0x00},
	{0x304D, 0x03},
	{0x331C, 0x1A},
	{0x331D, 0x00},
	{0x3502, 0x02},
	{0x3529, 0x0E},
	{0x352A, 0x0E},
	{0x352B, 0x0E},
	{0x3538, 0x0E},
	{0x3539, 0x0E},
	{0x3553, 0x00},
	{0x357D, 0x05},
	{0x357F, 0x05},
	{0x3581, 0x04},
	{0x3583, 0x76},
	{0x3587, 0x01},
	{0x35BB, 0x0E},
	{0x35BC, 0x0E},
	{0x35BD, 0x0E},
	{0x35BE, 0x0E},
	{0x35BF, 0x0E},
	{0x366E, 0x00},
	{0x366F, 0x00},
	{0x3670, 0x00},
	{0x3671, 0x00},
	{0x3304, 0x32},
	{0x3305, 0x00},
	{0x3306, 0x32},
	{0x3307, 0x00},
	{0x3590, 0x32},
	{0x3591, 0x00},
	{0x3686, 0x32},
	{0x3687, 0x00},
	{0x3004, 0x02},
	{0x3005, 0x21},
	{0x3006, 0x00},
	{0x3007, 0x11},
	{0x300E, 0x01},
	{0x300F, 0x00},
	{0x301A, 0x00},
	{0x306B, 0x05},
	{0x30E2, 0x02},
	{0x30F6, 0x04},
	{0x30F7, 0x01},
	{0x30F8, 0x06},
	{0x30F9, 0x09},
	{0x30FA, 0x00},
	{0x30EE, 0x01},
	{0x3130, 0x4E},
	{0x3131, 0x04},
	{0x3132, 0x46},
	{0x3133, 0x04},
	{0x3342, 0x0A},
	{0x3343, 0x00},
	{0x3344, 0x1A},
	{0x3345, 0x00},
	{0x33A6, 0x01},
	{0x3528, 0x0E},
	{0x3554, 0x00},
	{0x3555, 0x01},
	{0x3556, 0x01},
	{0x3557, 0x01},
	{0x3558, 0x01},
	{0x3559, 0x00},
	{0x355A, 0x00},
	{0x35BA, 0x0E},
	{0x366A, 0x1B},
	{0x366B, 0x1A},
	{0x366C, 0x19},
	{0x366D, 0x17},
	{0x3A41, 0x08},
	{0x3012, 0x03},
	{0x3000, 0x00},
	{0x303E, 0x02},
	{0x30F4, 0x00},
	{0x3018, 0xA2},
};

struct regval_list imx274_config_1080p_30fps_regs[] = {
	{0x3000, 0x12},
	{0x3120, 0xF0},
	{0x3121, 0x00},
	{0x3122, 0x02},
	{0x3129, 0x9C},
	{0x312A, 0x02},
	{0x312D, 0x02},
	{0x310B, 0x00},
	{0x304C, 0x00},
	{0x304D, 0x03},
	{0x331C, 0x1A},
	{0x331D, 0x00},
	{0x3502, 0x02},
	{0x3529, 0x0E},
	{0x352A, 0x0E},
	{0x352B, 0x0E},
	{0x3538, 0x0E},
	{0x3539, 0x0E},
	{0x3553, 0x00},
	{0x357D, 0x05},
	{0x357F, 0x05},
	{0x3581, 0x04},
	{0x3583, 0x76},
	{0x3587, 0x01},
	{0x35BB, 0x0E},
	{0x35BC, 0x0E},
	{0x35BD, 0x0E},
	{0x35BE, 0x0E},
	{0x35BF, 0x0E},
	{0x366E, 0x00},
	{0x366F, 0x00},
	{0x3670, 0x00},
	{0x3671, 0x00},
	{0x3304, 0x32},
	{0x3305, 0x00},
	{0x3306, 0x32},
	{0x3307, 0x00},
	{0x3590, 0x32},
	{0x3591, 0x00},
	{0x3686, 0x32},
	{0x3687, 0x00},
	{0x3004, 0x02},
	{0x3005, 0x61},
	{0x3006, 0x00},
	{0x3007, 0x19},
	{0x300E, 0x02},
	{0x300F, 0x00},
	{0x301A, 0x00},
	{0x306B, 0x05},
	{0x30E2, 0x02},
	{0x30F6, 0x68},
	{0x30F7, 0x01},
	{0x30F8, 0xAC},
	{0x30F9, 0x08},
	{0x30FA, 0x00},
	{0x30EE, 0x01},
	{0x3130, 0x4E},
	{0x3131, 0x04},
	{0x3132, 0x46},
	{0x3133, 0x04},
	{0x3342, 0x0A},
	{0x3343, 0x00},
	{0x3344, 0x1B},
	{0x3345, 0x00},
	{0x33A6, 0x00},
	{0x3528, 0x0E},
	{0x3554, 0x00},
	{0x3555, 0x01},
	{0x3556, 0x01},
	{0x3557, 0x01},
	{0x3558, 0x01},
	{0x3559, 0x00},
	{0x355A, 0x00},
	{0x35BA, 0x0E},
	{0x366A, 0x1B},
	{0x366B, 0x19},
	{0x366C, 0x17},
	{0x366D, 0x17},
	{0x3A41, 0x08},
	{0x3012, 0x03},
	{0x3000, 0x00},
	{0x303E, 0x02},
	{0x30F4, 0x00},
	{0x3018, 0xA2},
};

struct regval_list imx274_config_720p_60fps_regs[] = {
	{0x3000, 0x12},
	{0x3120, 0xF0},
	{0x3121, 0x00},
	{0x3122, 0x02},
	{0x3129, 0x9C},
	{0x312A, 0x02},
	{0x312D, 0x02},
	{0x310B, 0x00},
	{0x304C, 0x00},
	{0x304D, 0x03},
	{0x331C, 0x1A},
	{0x331D, 0x00},
	{0x3502, 0x02},
	{0x3529, 0x0E},
	{0x352A, 0x0E},
	{0x352B, 0x0E},
	{0x3538, 0x0E},
	{0x3539, 0x0E},
	{0x3553, 0x00},
	{0x357D, 0x05},
	{0x357F, 0x05},
	{0x3581, 0x04},
	{0x3583, 0x76},
	{0x3587, 0x01},
	{0x35BB, 0x0E},
	{0x35BC, 0x0E},
	{0x35BD, 0x0E},
	{0x35BE, 0x0E},
	{0x35BF, 0x0E},
	{0x366E, 0x00},
	{0x366F, 0x00},
	{0x3670, 0x00},
	{0x3671, 0x00},
	{0x3304, 0x32},
	{0x3305, 0x00},
	{0x3306, 0x32},
	{0x3307, 0x00},
	{0x3590, 0x32},
	{0x3591, 0x00},
	{0x3686, 0x32},
	{0x3687, 0x00},
	{0x3004, 0x03},
	{0x3005, 0x31},
	{0x3006, 0x00},
	{0x3007, 0x09},
	{0x300E, 0x01},
	{0x300F, 0x00},
	{0x301A, 0x00},
	{0x306B, 0x05},
	{0x30E2, 0x03},
	{0x30F6, 0x04},
	{0x30F7, 0x01},
	{0x30F8, 0x06},
	{0x30F9, 0x09},
	{0x30FA, 0x00},
	{0x30EE, 0x01},
	{0x3130, 0xE2},
	{0x3131, 0x02},
	{0x3132, 0xDE},
	{0x3133, 0x02},
	{0x3342, 0x0A},
	{0x3343, 0x00},
	{0x3344, 0x1B},
	{0x3345, 0x00},
	{0x33A6, 0x01},
	{0x3528, 0x0E},
	{0x3554, 0x00},
	{0x3555, 0x01},
	{0x3556, 0x01},
	{0x3557, 0x01},
	{0x3558, 0x01},
	{0x3559, 0x00},
	{0x355A, 0x00},
	{0x35BA, 0x0E},
	{0x366A, 0x1B},
	{0x366B, 0x19},
	{0x366C, 0x17},
	{0x366D, 0x17},
	{0x3A41, 0x04},
	{0x3012, 0x05},
	{0x3000, 0x00},
	{0x303E, 0x02},
	{0x30F4, 0x00},
	{0x3018, 0xA2},
};

struct regval_list imx274_config_4K_30fps_regs[] = {
	{0x3000, 0x12},
	{0x3120, 0xF0},
	{0x3121, 0x00},
	{0x3122, 0x02},
	{0x3129, 0x9C},
	{0x312A, 0x02},
	{0x312D, 0x02},
	{0x310B, 0x00},
	{0x304C, 0x00},
	{0x304D, 0x03},
	{0x331C, 0x1A},
	{0x331D, 0x00},
	{0x3502, 0x02},
	{0x3529, 0x0E},
	{0x352A, 0x0E},
	{0x352B, 0x0E},
	{0x3538, 0x0E},
	{0x3539, 0x0E},
	{0x3553, 0x00},
	{0x357D, 0x05},
	{0x357F, 0x05},
	{0x3581, 0x04},
	{0x3583, 0x76},
	{0x3587, 0x01},
	{0x35BB, 0x0E},
	{0x35BC, 0x0E},
	{0x35BD, 0x0E},
	{0x35BE, 0x0E},
	{0x35BF, 0x0E},
	{0x366E, 0x00},
	{0x366F, 0x00},
	{0x3670, 0x00},
	{0x3671, 0x00},
	{0x3304, 0x32},
	{0x3305, 0x00},
	{0x3306, 0x32},
	{0x3307, 0x00},
	{0x3590, 0x32},
	{0x3591, 0x00},
	{0x3686, 0x32},
	{0x3687, 0x00},
	{0x3004, 0x01},
	{0x3005, 0x01},
	{0x3006, 0x00},
	{0x3007, 0x02},
	{0x300C, 0xff},
	{0x300D, 0x00},
	{0x300E, 0x00},
	{0x300F, 0x00},
	{0x3018, 0xA2},
	{0x301A, 0x00},
	{0x306B, 0x05},
	{0x30E2, 0x01},
	{0x30F6, 0xED},
	{0x30F7, 0x01},
	{0x30F8, 0x08},
	{0x30F9, 0x13},
	{0x30FA, 0x00},
	{0x30dd, 0x01},
	{0x30de, 0x0b},
	{0x30df, 0x00},
	{0x30e0, 0x06},
	{0x30e1, 0x00},
	{0x3037, 0x01},
	{0x3038, 0x0c},
	{0x3039, 0x00},
	{0x303a, 0x0c},
	{0x303b, 0x0f},
	{0x30EE, 0x01},
	{0x3130, 0x86},
	{0x3131, 0x08},
	{0x3132, 0x7E},
	{0x3133, 0x08},
	{0x3342, 0x0A},
	{0x3343, 0x00},
	{0x3344, 0x16},
	{0x3345, 0x00},
	{0x33A6, 0x01},
	{0x3528, 0x0E},
	{0x3554, 0x1F},
	{0x3555, 0x01},
	{0x3556, 0x01},
	{0x3557, 0x01},
	{0x3558, 0x01},
	{0x3559, 0x00},
	{0x355A, 0x00},
	{0x35BA, 0x0E},
	{0x366A, 0x1B},
	{0x366B, 0x1A},
	{0x366C, 0x19},
	{0x366D, 0x17},
	{0x3A41, 0x08},
	{0x3012, 0x04},
	{0x3000, 0x00},
	{0x303E, 0x02},
	{0x30F4, 0x00},
	{0x3018, 0xA2},
};

struct regval_list imx274_config_4K_60fps_regs[] = {
	{0x3000, 0x12},
	{0x3120, 0xF0},
	{0x3121, 0x00},
	{0x3122, 0x02},
	{0x3129, 0x9C},
	{0x312A, 0x02},
	{0x312D, 0x02},
	{0x310B, 0x00},
	{0x304C, 0x00},
	{0x304D, 0x03},
	{0x331C, 0x1A},
	{0x331D, 0x00},
	{0x3502, 0x02},
	{0x3529, 0x0E},
	{0x352A, 0x0E},
	{0x352B, 0x0E},
	{0x3538, 0x0E},
	{0x3539, 0x0E},
	{0x3553, 0x00},
	{0x357D, 0x05},
	{0x357F, 0x05},
	{0x3581, 0x04},
	{0x3583, 0x76},
	{0x3587, 0x01},
	{0x35BB, 0x0E},
	{0x35BC, 0x0E},
	{0x35BD, 0x0E},
	{0x35BE, 0x0E},
	{0x35BF, 0x0E},
	{0x366E, 0x00},
	{0x366F, 0x00},
	{0x3670, 0x00},
	{0x3671, 0x00},
	{0x3304, 0x32},
	{0x3305, 0x00},
	{0x3306, 0x32},
	{0x3307, 0x00},
	{0x3590, 0x32},
	{0x3591, 0x00},
	{0x3686, 0x32},
	{0x3687, 0x00},
	{0x3004, 0x01},
	{0x3005, 0x01},
	{0x3006, 0x00},
	{0x3007, 0xA2},
	{0x300C, 0xff},
	{0x300D, 0x00},
	{0x300E, 0x00},
	{0x300F, 0x00},
	{0x3018, 0xA2},
	{0x301A, 0x00},
	{0x306B, 0x05},
	{0x30E2, 0x01},
	{0x30F6, 0x07},
	{0x30F7, 0x01},
	{0x30F8, 0xC6},
	{0x30F9, 0x11},
	{0x30FA, 0x00},
	{0x30dd, 0x01},
	{0x30de, 0x07},
	{0x30df, 0x00},
	{0x30e0, 0x03},
	{0x30e1, 0x00},
	{0x3037, 0x01},
	{0x3038, 0x0c},
	{0x3039, 0x00},
	{0x303a, 0x0c},
	{0x303b, 0x0f},
	{0x30EE, 0x01},
	{0x3130, 0x78},
	{0x3131, 0x08},
	{0x3132, 0x70},
	{0x3133, 0x08},
	{0x3342, 0x0A},
	{0x3343, 0x00},
	{0x3344, 0x16},
	{0x3345, 0x00},
	{0x33A6, 0x01},
	{0x3528, 0x0E},
	{0x3554, 0x1F},
	{0x3555, 0x01},
	{0x3556, 0x01},
	{0x3557, 0x01},
	{0x3558, 0x01},
	{0x3559, 0x00},
	{0x355A, 0x00},
	{0x35BA, 0x0E},
	{0x366A, 0x1B},
	{0x366B, 0x1A},
	{0x366C, 0x19},
	{0x366D, 0x17},
	{0x3A41, 0x08},
	{0x3012, 0x04},
	{0x3000, 0x00},
	{0x303E, 0x02},
	{0x30F4, 0x00},
	{0x3018, 0xA2},
};

struct regval_list imx274_mode3[] = {
{0x3000,0x12},
{0x303C,0x11}, //PG MOde for testing --Kalyan
{0x303D,0x03},//PG MOde for testing --Kalyan
{0x3120,0xF0},
{0x3121,0x00},
{0x3122,0x02},
{0x3129,0x9C},
{0x312A,0x02},
{0x312D,0x02},
{0x310B,0x00},
{0x304C,0x00},
{0x304D,0x03},
{0x331C,0x1A},
{0x331D,0x00},
{0x3502,0x02},
{0x3529,0x0E},
{0x352A,0x0E},
{0x352B,0x0E},
{0x3538,0x0E},
{0x3539,0x0E},
{0x3553,0x00},
{0x357D,0x05},
{0x357F,0x05},
{0x3581,0x04},
{0x3583,0x76},
{0x3587,0x01},
{0x35BB,0x0E},
{0x35BC,0x0E},
{0x35BD,0x0E},
{0x35BE,0x0E},
{0x35BF,0x0E},
{0x366E,0x00},
{0x366F,0x00},
{0x3670,0x00},
{0x3671,0x00},
{0x3304,0x32},
{0x3305,0x00},
{0x3306,0x32},
{0x3307,0x00},
{0x3590,0x32},
{0x3591,0x00},
{0x3686,0x32},
{0x3687,0x00},
{0x3004,0x02},
{0x3005,0x21},
{0x3006,0x00},
{0x3007,0x11},
{0x300E,0x00},
{0x300F,0x00},
{0x301A,0x00},
{0x306B,0x05},
{0x30E2,0x02},
{0x30F6,0x04},
{0x30F7,0x01},
{0x30F8,0x06},
{0x30F9,0x09},
{0x30FA,0x00},
{0x30EE,0x01},
{0x3130,0x4E},
{0x3131,0x04},
{0x3132,0x46},
{0x3133,0x04},
{0x3342,0x0A},
{0x3343,0x00},
{0x3344,0x1A},
{0x3345,0x00},
{0x33A6,0x01},
{0x3528,0x0E},
{0x3554,0x00},
{0x3555,0x01},
{0x3556,0x01},
{0x3557,0x01},
{0x3558,0x01},
{0x3559,0x00},
{0x355A,0x00},
{0x35BA,0x0E},
{0x366A,0x1B},
{0x366B,0x1A},
{0x366C,0x19},
{0x366D,0x17},
{0x3A41,0x08},
{0x3012,0x06},
{0x3000,0x00},
{0x303E,0x02},
{0x30F4,0x00},
{0x3018,0xA2},
};
#define	ARRAY_SIZE(x)	sizeof((x))/sizeof((x)[0])

const int length_imx274_config_720p_60fps_regs =
        ARRAY_SIZE(imx274_config_720p_60fps_regs);
const int length_imx274_config_1080p_60fps_regs =
		ARRAY_SIZE(imx274_config_1080p_60fps_regs);
const int length_imx274_config_1080p_30fps_regs =
		ARRAY_SIZE(imx274_config_1080p_30fps_regs);
const int length_imx274_config_4K_60fps_regs =
		ARRAY_SIZE(imx274_config_4K_60fps_regs);
const int length_imx274_config_4K_30fps_regs =
		ARRAY_SIZE(imx274_config_4K_30fps_regs);
const int length_imx274_mode3 =
		ARRAY_SIZE(imx274_mode3);
