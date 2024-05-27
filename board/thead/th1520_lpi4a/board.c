// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (c) 2023, Yixun Lan <dlan@gentoo.org>
 *
 */

#include <common.h>
#include <cpu_func.h>
#include "asn2fdt.h"

int board_init(void)
{
	enable_caches();
	asn2fdt_test();

	return 0;
}
