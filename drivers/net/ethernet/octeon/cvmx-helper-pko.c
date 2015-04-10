/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2013 Cavium Inc.
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
 * Helper Functions for the PKO
 *
 * $Id: cvmx-helper-pko.c 107520 2014-11-08 01:13:59Z ddaney $
 */

#include <asm/octeon/octeon.h>
#include <asm/octeon/cvmx-clock.h>

#include "cvmx-helper-cfg.h"
#include "cvmx-hwpko.h"
#include "cvmx-fpa1.h"

//XXX- these config data structures will go away soon!
static CVMX_SHARED int64_t pko_fpa_config_pool = -1;
static CVMX_SHARED uint64_t pko_fpa_config_size = 1024;
static CVMX_SHARED uint64_t pko_fpa_config_count = 0;

void cvmx_pko_set_cmd_que_pool_config(int64_t pool, uint64_t buffer_size,
				      uint64_t buffer_count)
{
	pko_fpa_config_pool = pool;
	pko_fpa_config_size = buffer_size;
	pko_fpa_config_count = buffer_count;

}

EXPORT_SYMBOL(cvmx_pko_set_cmd_que_pool_config);

void cvmx_pko_set_cmd_queue_pool_buffer_count(uint64_t buffer_count)
{
	pko_fpa_config_count = buffer_count;
}

void cvmx_pko_get_cmd_que_pool_config(cvmx_fpa_pool_config_t * pko_pool)
{
	pko_pool->pool_num = pko_fpa_config_pool;
	pko_pool->buffer_size = pko_fpa_config_size;
	pko_pool->buffer_count = pko_fpa_config_count;
}

int64_t cvmx_fpa_get_pko_pool(void)
{
	return pko_fpa_config_pool;
}

/**
 * Gets the buffer size of pko pool
 */
uint64_t cvmx_fpa_get_pko_pool_block_size(void)
{
	return pko_fpa_config_size;
}

/**
 * Gets the buffer size  of pko pool
 */
uint64_t cvmx_fpa_get_pko_pool_buffer_count(void)
{
	return pko_fpa_config_count;
}

/**
 * Initialize the PKO
 *
 */
int cvmx_helper_pko_init(void)
{
	//#     error "Pool number in kernel not implemented"

	__cvmx_helper_init_port_config_data(0);

	cvmx_pko_hw_init(cvmx_fpa_get_pko_pool(),
			 cvmx_fpa_get_pko_pool_block_size()
	    );
	return 0;

}

/**
 * @INTERNAL
 * Setup the PKO for the ports on an interface. The number of
 * queues per port and the priority of each PKO output queue
 * is set here. PKO must be disabled when this function is called.
 *
 * @interface: Interface to setup PKO for
 *
 * Returns Zero on success, negative on failure
 *
 * @note This is for PKO1/PKO2, and is not used for PKO3.
 */
int __cvmx_helper_interface_setup_pko(int interface)
{
	/*
	 * Each packet output queue has an associated priority. The
	 * higher the priority, the more often it can send a packet. A
	 * priority of 8 means it can send in all 8 rounds of
	 * contention. We're going to make each queue one less than
	 * the last.  The vector of priorities has been extended to
	 * support CN5xxx CPUs, where up to 16 queues can be
	 * associated to a port.  To keep backward compatibility we
	 * don't change the initial 8 priorities and replicate them in
	 * the second half.  With per-core PKO queues (PKO lockless
	 * operation) all queues have the same priority.
	 */
	/* uint8_t priorities[16] = {8,7,6,5,4,3,2,1,8,7,6,5,4,3,2,1}; */
	uint8_t priorities[16] = {[0 ... 15] = 8 };

	/*
	 * Setup the IPD/PIP and PKO for the ports discovered
	 * above. Here packet classification, tagging and output
	 * priorities are set.
	 */
	int num_ports = cvmx_helper_ports_on_interface(interface);
	while (num_ports--) {
		int ipd_port;

		if (!cvmx_helper_is_port_valid(interface, num_ports))
			continue;

		ipd_port = cvmx_helper_get_ipd_port(interface, num_ports);

		cvmx_pko_config_port(ipd_port,
				     cvmx_pko_get_base_queue(ipd_port),
				     cvmx_pko_get_num_queues(ipd_port),
				     priorities);
		ipd_port++;
	}
	return 0;
//NOTE:
// Now this function is called for all chips including 68xx,
// but on the 68xx it does not enable multiple pko_iports per
// eport, while before it was doing 3 pko_iport per eport
// buf the reason for that is not clear.
}

/**
 * wait for the pko queue to drain
 *
 * @queue: a valid pko queue
 * Returns count is the length of the queue after calling this
 * function
 */
static int cvmx_helper_wait_pko_queue_drain(int queue)
{
	const int timeout = 5;	/* Wait up to 5 seconds for timeouts */
	int count;
	uint64_t start_cycle, stop_cycle;

	count = cvmx_pko_queue_pend_count(queue);
	if (count < 0)
		return count;

	start_cycle = cvmx_get_cycle();
	stop_cycle =
	    start_cycle + cvmx_clock_get_rate(CVMX_CLOCK_CORE) * timeout;
	while (count > 0 && (cvmx_get_cycle() < stop_cycle)) {
		cvmx_wait(10000);
		count = cvmx_pko_queue_pend_count(queue);
	}

	return count;
}

/**
 * @INTERNAL
 *
 * Drain and wait until all PKO queues are empty.
 */
int __cvmx_helper_pko_drain(void)
{
	int result = 0;

	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		int queue, max_queue;

		/* PKO2 */
		max_queue = __cvmx_helper_cfg_pko_max_queue();
		for (queue = 0; queue < max_queue; queue++) {
			if (cvmx_helper_wait_pko_queue_drain(queue)) {
				result = -1;
				return result;
			}
		}
	} else {
		int num_interfaces = cvmx_helper_get_number_of_interfaces();
		int interface, num_ports, index;

		/* PKO1 */
		for (interface = 0; interface < num_interfaces; interface++) {
			num_ports = cvmx_helper_ports_on_interface(interface);
			for (index = 0; index < num_ports; index++) {
				int pko_port;
				int queue;
				int max_queue;
				if (!cvmx_helper_is_port_valid
				    (interface, index))
					continue;
				pko_port =
				    cvmx_helper_get_ipd_port(interface, index);
				queue = cvmx_pko_get_base_queue(pko_port);
				max_queue =
				    queue + cvmx_pko_get_num_queues(pko_port);
				while (queue < max_queue) {
					if (cvmx_helper_wait_pko_queue_drain
					    (queue)) {
						result = -1;
						return result;
					}
					queue++;
				}
			}
		}
	}
	return result;
}
