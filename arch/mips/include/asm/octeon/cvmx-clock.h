/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2014 Cavium Inc.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, Version 2, as
 * published by the Free Software Foundation.
 *
 * This file is distributed in the hope that it will be useful, but
 * AS-IS and WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE, TITLE, or
 * NONINFRINGEMENT.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 * or visit http://www.gnu.org/licenses/.
 *
 * This file may also be available under a different license from Cavium.
 * Contact Cavium Inc. for more information
 ***********************license end**************************************/

/**
 * @file
 *
 * Interface to Core, IO and DDR Clock.
 *
 */

#ifndef __CVMX_CLOCK_H__
#define __CVMX_CLOCK_H__

#include <asm/octeon/octeon.h>
#include <asm/octeon/cvmx-lmcx-defs.h>
#include <asm/octeon/cvmx-fpa-defs.h>
#include <asm/octeon/cvmx-tim-defs.h>

/**
 * Enumeration of different Clocks in Octeon.
 */
typedef enum {
	CVMX_CLOCK_RCLK,
			    /**< Clock used by cores, coherent bus and L2 cache. */
	CVMX_CLOCK_SCLK,
			    /**< Clock used by IO blocks. */
	CVMX_CLOCK_DDR,
			    /**< Clock used by DRAM */
	CVMX_CLOCK_CORE,
			    /**< Alias for CVMX_CLOCK_RCLK */
	CVMX_CLOCK_TIM,
			    /**< Alias for CVMX_CLOCK_SCLK */
	CVMX_CLOCK_IPD,
			    /**< Alias for CVMX_CLOCK_SCLK */
} cvmx_clock_t;

/**
 * Get cycle count based on the clock type.
 *
 * @clock: - Enumeration of the clock type.
 * Returns      - Get the number of cycles executed so far.
 */
static inline uint64_t cvmx_clock_get_count(cvmx_clock_t clock)
{
	switch (clock) {
	case CVMX_CLOCK_RCLK:
	case CVMX_CLOCK_CORE:
		{
			uint64_t cycle;
			CVMX_RDHWR(cycle, 31);
			return (cycle);
		}
	case CVMX_CLOCK_SCLK:
	case CVMX_CLOCK_IPD:
		if (OCTEON_IS_MODEL(OCTEON_CN78XX)
		    || OCTEON_IS_MODEL(OCTEON_CN73XX)
		    || OCTEON_IS_MODEL(OCTEON_CN75XX))
			return cvmx_read_csr(CVMX_FPA_CLK_COUNT);
		return cvmx_read_csr(CVMX_IPD_CLK_COUNT);
	case CVMX_CLOCK_TIM:
		if (OCTEON_IS_MODEL(OCTEON_CN78XX)
		    || OCTEON_IS_MODEL(OCTEON_CN73XX)
		    || OCTEON_IS_MODEL(OCTEON_CN75XX))
			return cvmx_read_csr(CVMX_TIM_FR_RN_CYCLES);
		return cvmx_read_csr(CVMX_IPD_CLK_COUNT);

	case CVMX_CLOCK_DDR:
		if (OCTEON_IS_OCTEON2() || OCTEON_IS_OCTEON3())
			return cvmx_read_csr(CVMX_LMCX_DCLK_CNT(0));
		else
			return ((cvmx_read_csr(CVMX_LMCX_DCLK_CNT_HI(0)) << 32)
				| cvmx_read_csr(CVMX_LMCX_DCLK_CNT_LO(0)));
	}

	cvmx_dprintf("cvmx_clock_get_count: Unknown clock type\n");
	return 0;
}

static inline uint64_t cvmx_clock_get_rate(cvmx_clock_t clock)
{
	switch (clock) {
	case CVMX_CLOCK_RCLK:
	case CVMX_CLOCK_CORE:
		return octeon_get_clock_rate();
	case CVMX_CLOCK_SCLK:
	case CVMX_CLOCK_TIM:
	case CVMX_CLOCK_IPD:
		return octeon_get_io_clock_rate();
	default:
		WARN_ON(1);
		return 0;
	}
}

#define cvmx_clock_get_rate_node(a,b) cvmx_clock_get_rate(b)

#endif /* __CVMX_CLOCK_H__ */
