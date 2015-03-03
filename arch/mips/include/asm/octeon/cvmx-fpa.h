/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2010 Cavium Inc.
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
 * Interface to the hardware Free Pool Allocator.
 *
 *
 */

#ifndef __CVMX_FPA_H__
#define __CVMX_FPA_H__

#include "cvmx-scratch.h"
#include "cvmx.h"

#include "cvmx-fpa-defs.h"
#include "cvmx-fpa1.h"
// #include "cvmx-fpa3.h"

#define CVMX_FPA_MIN_BLOCK_SIZE 128
#define CVMX_FPA_ALIGNMENT      128
#define CVMX_FPA_POOL_NAME_LEN  16

#if 0
/* On CN78XX in backward-compatible mode, pool is mapped to AURA */
#define CVMX_FPA_NUM_POOLS (octeon_has_feature(OCTEON_FEATURE_FPA3) ? \
			cvmx_fpa3_num_auras() : CVMX_FPA1_NUM_POOLS)

/* On CN78XX in backward-compatible mode, pool is mapped to AURA */
#endif
#define CVMX_FPA_NUM_POOLS CVMX_FPA1_NUM_POOLS


/**
 * Structure to store FPA pool configuration parameters.
 */
struct cvmx_fpa_pool_config {
	int64_t pool_num;
	uint64_t buffer_size;
	uint64_t buffer_count;
};
typedef struct cvmx_fpa_pool_config cvmx_fpa_pool_config_t;

/**
 * Return the name of the pool
 *
 * @pool_num:   Pool to get the name of
 * Returns The name
 */
const char *cvmx_fpa_get_name(int pool_num);

/**
 * Return the base of the pool
 *
 * @pool:   Pool to get the base of
 * Returns The base
 */
void *cvmx_fpa_get_base(int pool);

/**
 * Check if a pointer belongs to an FPA pool. Return non-zero
 * if the supplied pointer is inside the memory controlled by
 * an FPA pool.
 *
 * @pool:   Pool to check
 * @ptr:    Pointer to check
 * Returns Non-zero if pointer is in the pool. Zero if not
 */
int cvmx_fpa_is_member(int pool, void *ptr);

/**
 * Initialize FPA per node
 */
int cvmx_fpa_global_init_node(int node);

/**
 * Enable the FPA
 */
static inline void cvmx_fpa_enable(void)
{
//	if (!octeon_has_feature(OCTEON_FEATURE_FPA3))
		cvmx_fpa1_enable();
//	else
//		cvmx_fpa_global_init_node(cvmx_get_node_num());
}

/**
 * Disable the FPA
 */
static inline void cvmx_fpa_disable(void)
{
//	if (!octeon_has_feature(OCTEON_FEATURE_FPA3))
		cvmx_fpa1_disable();
	/* FPA3 does not have a disable funcion */
}

/**
 * @INTERNAL
 * @deprecated OBSOLETE
 *
 * Kept for transition assistance only
 */
static inline void cvmx_fpa_global_initialize(void)
{
	cvmx_fpa_global_init_node(cvmx_get_node_num());
}

#if 0
/**
 * @INTERNAL
 *
 * Convert FPA1 style POOL into FPA3 AURA in
 * backward compatibility mode.
 */
static inline cvmx_fpa3_gaura_t
cvmx_fpa1_pool_to_fpa3_aura(cvmx_fpa1_pool_t pool)
{
	if ((octeon_has_feature(OCTEON_FEATURE_FPA3))) {
		unsigned node = cvmx_get_node_num();
		cvmx_fpa3_gaura_t aura = __cvmx_fpa3_gaura(node, pool);
		return aura;
	}
	return CVMX_FPA3_INVALID_GAURA;
}
#endif

/**
 * Get a new block from the FPA
 *
 * @pool:   Pool to get the block from
 * Returns Pointer to the block or NULL on failure
 */
static inline void *cvmx_fpa_alloc(uint64_t pool)
{
//	/* FPA3 is handled differently */
//	if ((octeon_has_feature(OCTEON_FEATURE_FPA3))) {
//		return cvmx_fpa3_alloc(cvmx_fpa1_pool_to_fpa3_aura(pool));
//	} else
		return cvmx_fpa1_alloc(pool);
}

/**
 * Asynchronously get a new block from the FPA
 *
 * The result of cvmx_fpa_async_alloc() may be retrieved using
 * cvmx_fpa_async_alloc_finish().
 *
 * @scr_addr: Local scratch address to put response in.  This is a byte
 *		   address but must be 8 byte aligned.
 * @pool:      Pool to get the block from
 */
static inline void cvmx_fpa_async_alloc(uint64_t scr_addr, uint64_t pool)
{
//	if ((octeon_has_feature(OCTEON_FEATURE_FPA3))) {
//		return cvmx_fpa3_async_alloc(scr_addr,
//					     cvmx_fpa1_pool_to_fpa3_aura(pool));
//	} else
		return cvmx_fpa1_async_alloc(scr_addr, pool);
}

/**
 * Retrieve the result of cvmx_fpa_async_alloc
 *
 * @scr_addr: The Local scratch address.  Must be the same value
 * passed to cvmx_fpa_async_alloc().
 *
 * @pool: Pool the block came from.  Must be the same value
 * passed to cvmx_fpa_async_alloc.
 *
 * Returns Pointer to the block or NULL on failure
 */
static inline void *cvmx_fpa_async_alloc_finish(uint64_t scr_addr,
						uint64_t pool)
{
//	if ((octeon_has_feature(OCTEON_FEATURE_FPA3)))
//		return cvmx_fpa3_async_alloc_finish(scr_addr,
//						    cvmx_fpa1_pool_to_fpa3_aura
//						    (pool));
//	else
		return cvmx_fpa1_async_alloc_finish(scr_addr, pool);
}

/**
 * Free a block allocated with a FPA pool.
 * Does NOT provide memory ordering in cases where the memory block was
 * modified by the core.
 *
 * @ptr:    Block to free
 * @pool:   Pool to put it in
 * @num_cache_lines:
 *               Cache lines to invalidate
 */
static inline void cvmx_fpa_free_nosync(void *ptr, uint64_t pool,
					uint64_t num_cache_lines)
{
//	/* FPA3 is handled differently */
//	if ((octeon_has_feature(OCTEON_FEATURE_FPA3)))
//		cvmx_fpa3_free_nosync(ptr, cvmx_fpa1_pool_to_fpa3_aura(pool),
//				      num_cache_lines);
//	else
		cvmx_fpa1_free_nosync(ptr, pool, num_cache_lines);
}

/**
 * Free a block allocated with a FPA pool.  Provides required memory
 * ordering in cases where memory block was modified by core.
 *
 * @ptr:    Block to free
 * @pool:   Pool to put it in
 * @num_cache_lines:
 *               Cache lines to invalidate
 */
static inline void cvmx_fpa_free(void *ptr, uint64_t pool,
				 uint64_t num_cache_lines)
{
//	if ((octeon_has_feature(OCTEON_FEATURE_FPA3)))
//		cvmx_fpa3_free(ptr, cvmx_fpa1_pool_to_fpa3_aura(pool),
//			       num_cache_lines);
//	else
		cvmx_fpa1_free(ptr, pool, num_cache_lines);
}

/**
 * Setup a FPA pool to control a new block of memory.
 * This can only be called once per pool. Make sure proper
 * locking enforces this.
 *
 * @pool:       Pool to initialize
 * @name:       Constant character string to name this pool.
 *                   String is not copied.
 * @buffer:     Pointer to the block of memory to use. This must be
 *                   accessable by all processors and external hardware.
 * @block_size: Size for each block controlled by the FPA
 * @num_blocks: Number of blocks
 *
 * Returns the pool number on Success,
 *         -1 on failure
 */
extern int cvmx_fpa_setup_pool(int pool, const char *name, void *buffer,
			       uint64_t block_size, uint64_t num_blocks);

extern int cvmx_fpa_shutdown_pool(int pool);

/**
 * Gets the block size of buffer in specified pool
 * @pool:	 Pool to get the block size from
 * Returns       Size of buffer in specified pool
 */
extern unsigned cvmx_fpa_get_block_size(int pool);

extern int cvmx_fpa_is_pool_available(int pool_num);
extern uint64_t cvmx_fpa_get_pool_owner(int pool_num);
extern int cvmx_fpa_get_max_pools(void);
extern int cvmx_fpa_get_current_count(int pool_num);

#endif /*  __CVM_FPA_H__ */
