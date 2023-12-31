/*
 * Copyright (c) 2015-2022 Xilinx, Inc. and Contributors. All rights reserved.
 * Copyright (c) 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "metal-test-internal.h"
#include <metal/mutex.h>

static const int mutex_test_count = 1000;

static int mutex(void)
{
	metal_mutex_t lock;
	int i;

	metal_mutex_init(&lock);

	for (i = 0; i < mutex_test_count; i++) {
		metal_mutex_acquire(&lock);
		metal_mutex_release(&lock);
	}

	return 0;
}
METAL_ADD_TEST(mutex);
