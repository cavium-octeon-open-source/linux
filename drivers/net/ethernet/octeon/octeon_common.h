/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2013 Cavium, Inc.
 */
#ifndef _ETHERNET_OCTEON_OCTEON_COMMON_H
#define _ETHERNET_OCTEON_OCTEON_COMMON_H

extern void cvm_oct_common_set_rx_filtering(struct net_device *dev, u64 base_reg,
					spinlock_t *lock);

extern int cvm_oct_common_set_mac_address(struct net_device *dev, void *addr,
					u64 base_reg, spinlock_t *lock);
#endif
