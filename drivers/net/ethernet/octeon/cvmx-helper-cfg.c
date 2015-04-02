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
 * Helper Functions for the Configuration Framework
 *
 */
#include <linux/export.h>
#include <asm/octeon/cvmx.h>
#include <asm/octeon/cvmx-helper.h>
#include <asm/octeon/cvmx-helper-board.h>
#include <asm/octeon/cvmx-helper-util.h>
#include <asm/octeon/cvmx-helper-cfg.h>
// #include <asm/octeon/cvmx-helper-ilk.h>
// #include <asm/octeon/cvmx-helper-bgx.h>
// #include <asm/octeon/cvmx-ilk.h>
// #include <asm/octeon/cvmx-range.h>
#include <asm/octeon/cvmx-global-resources.h>
#include <asm/octeon/cvmx-pko-internal-ports-range.h>

#if !defined(min)
#define min( a, b ) ( ( a ) < ( b ) ) ? ( a ) : ( b )
#endif

CVMX_SHARED struct cvmx_cfg_port_param
    cvmx_cfg_port[CVMX_MAX_NODES][CVMX_HELPER_MAX_IFACE]
    [CVMX_HELPER_CFG_MAX_PORT_PER_IFACE] =
    {[0 ... CVMX_MAX_NODES - 1][0 ... CVMX_HELPER_MAX_IFACE - 1] =
{[0 ... CVMX_HELPER_CFG_MAX_PORT_PER_IFACE - 1] = {
			    .phy_info = NULL,
			    .ccpp_pknd = CVMX_HELPER_CFG_INVALID_VALUE,
			    .ccpp_bpid = CVMX_HELPER_CFG_INVALID_VALUE,
			    .ccpp_pko_port_base = CVMX_HELPER_CFG_INVALID_VALUE,
			    .ccpp_pko_num_ports = CVMX_HELPER_CFG_INVALID_VALUE,
			    .agl_rx_clk_skew = 0,
			    .valid = true,
			    .sgmii_phy_mode = false,
			    .sgmii_1000x_mode = false,
			    .agl_rx_clk_delay_bypass = false,
			    .force_link_up = false,
			    .disable_an = false,
			    .link_down_pwr_dn = false,
			    .phy_present = false}
						 }
};

/*
 * Indexed by the pko_port number
 */
static CVMX_SHARED int __cvmx_cfg_pko_highest_queue;
CVMX_SHARED struct cvmx_cfg_pko_port_param
    cvmx_pko_queue_table[CVMX_HELPER_CFG_MAX_PKO_PORT] =
    {[0 ... CVMX_HELPER_CFG_MAX_PKO_PORT - 1] =
{CVMX_HELPER_CFG_INVALID_VALUE, CVMX_HELPER_CFG_INVALID_VALUE} };

CVMX_SHARED cvmx_user_static_pko_queue_config_t __cvmx_pko_queue_static_config;

CVMX_SHARED struct cvmx_cfg_pko_port_map
    cvmx_cfg_pko_port_map[CVMX_HELPER_CFG_MAX_PKO_PORT] =
    {[0 ... CVMX_HELPER_CFG_MAX_PKO_PORT - 1] =
{CVMX_HELPER_CFG_INVALID_VALUE, CVMX_HELPER_CFG_INVALID_VALUE,
CVMX_HELPER_CFG_INVALID_VALUE}
};

/*
 * This array assists translation from ipd_port to pko_port.
 * The ``16'' is the rounded value for the 3rd 4-bit value of
 * ipd_port, used to differentiate ``interfaces.''
 */
static CVMX_SHARED struct cvmx_cfg_pko_port_pair ipd2pko_port_cache[16]
[CVMX_HELPER_CFG_MAX_PORT_PER_IFACE] =
    {[0 ... 15] = {[0 ... CVMX_HELPER_CFG_MAX_PORT_PER_IFACE - 1] =
		       {CVMX_HELPER_CFG_INVALID_VALUE,
			    CVMX_HELPER_CFG_INVALID_VALUE}}
};

#ifdef CVMX_USER_DEFINED_HELPER_CONFIG_INIT

static CVMX_SHARED int cvmx_cfg_default_pko_nqueues = 1;

/*
 * A pool for holding the pko_nqueues for the pko_ports assigned to a
 * physical port.
 */
static CVMX_SHARED uint8_t
    cvmx_cfg_pko_nqueue_pool[CVMX_HELPER_CFG_MAX_PKO_QUEUES] =
    {[0 ... CVMX_HELPER_CFG_MAX_PKO_QUEUES - 1] = 1 };

#endif

/*
 * Options
 *
 * Each array-elem's intial value is also the option's default value.
 */
static CVMX_SHARED uint64_t cvmx_cfg_opts[CVMX_HELPER_CFG_OPT_MAX] =
    {[0 ... CVMX_HELPER_CFG_OPT_MAX - 1] = 1 };

/*
 * MISC
 */
static CVMX_SHARED int cvmx_cfg_max_pko_engines;	/* # of PKO DMA engines
							   allocated */
static int cvmx_pko_queue_alloc(uint64_t port, int count);
static const int dbg = 0;

int __cvmx_helper_cfg_pknd(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	int pkind;

	pkind = cvmx_cfg_port[xi.node][xi.interface][index].ccpp_pknd;
	return pkind;
}

int __cvmx_helper_cfg_bpid(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].ccpp_bpid;
}

int __cvmx_helper_cfg_pko_port_base(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].ccpp_pko_port_base;
}

int __cvmx_helper_cfg_pko_port_num(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].ccpp_pko_num_ports;
}

int __cvmx_helper_cfg_pko_queue_num(int pko_port)
{
	return cvmx_pko_queue_table[pko_port].ccppp_num_queues;
}

int __cvmx_helper_cfg_pko_queue_base(int pko_port)
{
	return cvmx_pko_queue_table[pko_port].ccppp_queue_base;
}

int __cvmx_helper_cfg_pko_max_queue(void)
{
	return __cvmx_cfg_pko_highest_queue;
}

int __cvmx_helper_cfg_pko_max_engine(void)
{
	return cvmx_cfg_max_pko_engines;
}

int cvmx_helper_cfg_opt_set(cvmx_helper_cfg_option_t opt, uint64_t val)
{
	if (opt >= CVMX_HELPER_CFG_OPT_MAX)
		return -1;

	cvmx_cfg_opts[opt] = val;

	return 0;
}

uint64_t cvmx_helper_cfg_opt_get(cvmx_helper_cfg_option_t opt)
{
	if (opt >= CVMX_HELPER_CFG_OPT_MAX)
		return (uint64_t) CVMX_HELPER_CFG_INVALID_VALUE;

	return cvmx_cfg_opts[opt];
}

/*
 * initialize the queue allocation list. the existing static allocation result
 * is used as a starting point to ensure backward compatibility.
 *
 * Returns  0 on success
 *         -1 on failure
 */
int cvmx_pko_queue_grp_alloc(uint64_t start, uint64_t end, uint64_t count)
{
	uint64_t port;
	int ret_val;

	for (port = start; port < end; port++) {
		ret_val = cvmx_pko_queue_alloc(port, count);
		if (ret_val == -1) {
			cvmx_printf("ERROR: %sL Failed to allocate queue "
				    "for port=%d count=%d\n",
				    __func__, (int)port, (int)count);
			return ret_val;
		}
	}
	return 0;
}

int cvmx_pko_queue_init_from_cvmx_config_non_pknd(void)
{
	int ret_val = -1;
	uint64_t count, start, end;

	start = 0;
	end =
	    __cvmx_pko_queue_static_config.non_pknd.pko_ports_per_interface[0];
	count =
	    __cvmx_pko_queue_static_config.non_pknd.
	    pko_queues_per_port_interface[0];
	cvmx_pko_queue_grp_alloc(start, end, count);

	start = 16;
	end =
	    start +
	    __cvmx_pko_queue_static_config.non_pknd.pko_ports_per_interface[1];
	count =
	    __cvmx_pko_queue_static_config.non_pknd.
	    pko_queues_per_port_interface[1];
	ret_val = cvmx_pko_queue_grp_alloc(start, end, count);
	if (ret_val != 0)
		return -1;

	start = end;
	end = 36;
	count = __cvmx_pko_queue_static_config.non_pknd.pko_queues_per_port_pci;
	cvmx_pko_queue_grp_alloc(start, end, count);
	if (ret_val != 0)
		return -1;

	start = end;
	end = 40;
	count =
	    __cvmx_pko_queue_static_config.non_pknd.pko_queues_per_port_loop;
	cvmx_pko_queue_grp_alloc(start, end, count);
	if (ret_val != 0)
		return -1;

	start = end;
	end = 42;
	count =
	    __cvmx_pko_queue_static_config.non_pknd.pko_queues_per_port_srio[0];
	cvmx_pko_queue_grp_alloc(start, end, count);
	if (ret_val != 0)
		return -1;

	start = end;
	end = 44;
	count =
	    __cvmx_pko_queue_static_config.non_pknd.pko_queues_per_port_srio[1];
	cvmx_pko_queue_grp_alloc(start, end, count);
	if (ret_val != 0)
		return -1;

	start = end;
	end = 46;
	count =
	    __cvmx_pko_queue_static_config.non_pknd.pko_queues_per_port_srio[2];
	cvmx_pko_queue_grp_alloc(start, end, count);
	if (ret_val != 0)
		return -1;

	start = end;
	end = 48;
	count =
	    __cvmx_pko_queue_static_config.non_pknd.pko_queues_per_port_srio[3];
	cvmx_pko_queue_grp_alloc(start, end, count);
	if (ret_val != 0)
		return -1;
	return 0;
}

static int CVMX_SHARED queue_range_init = 0;

int init_cvmx_pko_que_range(void)
{
	int rv = 0;

	if (queue_range_init)
		return 0;
	queue_range_init = 1;
	rv = cvmx_create_global_resource_range(CVMX_GR_TAG_PKO_QUEUES,
					       CVMX_HELPER_CFG_MAX_PKO_QUEUES);
	if (rv != 0) {
		cvmx_printf("ERROR: %s: Failed to initalize pko queues range\n",
			    __func__);
	}
	return rv;
}

/*
 * get a block of "count" queues for "port"
 *
 * @param  port   the port for which the queues are requested
 * @param  count  the number of queues requested
 *
 * Returns  0 on success
 *         -1 on failure
 */
static int cvmx_pko_queue_alloc(uint64_t port, int count)
{
	int ret_val = -1;
	int highest_queue;

	init_cvmx_pko_que_range();

	if (cvmx_pko_queue_table[port].ccppp_num_queues == count)
		return cvmx_pko_queue_table[port].ccppp_queue_base;

	if (cvmx_pko_queue_table[port].ccppp_num_queues > 0) {
		cvmx_printf("WARNING: %s port=%d already %d queues\n",
			    __func__, (int)port,
			    (int)cvmx_pko_queue_table[port].ccppp_num_queues);
		return -1;
	}

	if (port >= CVMX_HELPER_CFG_MAX_PKO_QUEUES) {
		cvmx_printf("ERROR: %s port=%d > %d\n", __func__,
			    (int)port, CVMX_HELPER_CFG_MAX_PKO_QUEUES);
		return -1;
	}

	ret_val = cvmx_allocate_global_resource_range(CVMX_GR_TAG_PKO_QUEUES,
						      port, count, 1);
	//cvmx_dprintf("allocated pko que : port=%02d base=%02d count=%02d \n", (int) port, ret_val, (int) count);
	if (ret_val == -1)
		return ret_val;
	cvmx_pko_queue_table[port].ccppp_queue_base = ret_val;
	cvmx_pko_queue_table[port].ccppp_num_queues = count;

	highest_queue = ret_val + count - 1;
	if (highest_queue > __cvmx_cfg_pko_highest_queue)
		__cvmx_cfg_pko_highest_queue = highest_queue;
	return 0;
}

/*
 * return the queues for "port"
 *
 * @param  port   the port for which the queues are returned
 *
 * Returns  0 on success
 *         -1 on failure
 */
int cvmx_pko_queue_free(uint64_t port)
{
	int ret_val = -1;

	init_cvmx_pko_que_range();
	if (port >= CVMX_HELPER_CFG_MAX_PKO_QUEUES) {
		cvmx_dprintf("ERROR: %s port=%d > %d", __FUNCTION__,
			     (int)port, CVMX_HELPER_CFG_MAX_PKO_QUEUES);
		return -1;
	}

	ret_val =
	    cvmx_free_global_resource_range_with_base(CVMX_GR_TAG_PKO_QUEUES,
						      cvmx_pko_queue_table
						      [port].ccppp_queue_base,
						      cvmx_pko_queue_table
						      [port].ccppp_num_queues);
	if (ret_val != 0)
		return ret_val;

	cvmx_pko_queue_table[port].ccppp_num_queues = 0;
	cvmx_pko_queue_table[port].ccppp_queue_base =
	    CVMX_HELPER_CFG_INVALID_VALUE;
	ret_val = 0;
	return ret_val;
}

void cvmx_pko_queue_free_all(void)
{
	int i;

	for (i = 0; i < CVMX_HELPER_CFG_MAX_PKO_PORT; i++)
		if (cvmx_pko_queue_table[i].ccppp_queue_base !=
		    CVMX_HELPER_CFG_INVALID_VALUE)
			cvmx_pko_queue_free(i);
	//cvmx_range_show(pko_queue_range);
}

void cvmx_pko_queue_show()
{
	int i;

	cvmx_show_global_resource_range(CVMX_GR_TAG_PKO_QUEUES);
	for (i = 0; i < CVMX_HELPER_CFG_MAX_PKO_PORT; i++)
		if (cvmx_pko_queue_table[i].ccppp_queue_base !=
		    CVMX_HELPER_CFG_INVALID_VALUE)
			cvmx_dprintf("port=%d que_base=%d que_num=%d \n", i,
				     (int)cvmx_pko_queue_table[i].
				     ccppp_queue_base,
				     (int)cvmx_pko_queue_table[i].
				     ccppp_num_queues);
}

EXPORT_SYMBOL(__cvmx_helper_cfg_pknd);
EXPORT_SYMBOL(__cvmx_helper_cfg_bpid);
EXPORT_SYMBOL(__cvmx_helper_cfg_pko_port_base);
EXPORT_SYMBOL(__cvmx_helper_cfg_pko_port_num);
EXPORT_SYMBOL(__cvmx_helper_cfg_pko_queue_base);
EXPORT_SYMBOL(__cvmx_helper_cfg_pko_queue_num);
EXPORT_SYMBOL(__cvmx_helper_cfg_pko_max_queue);
EXPORT_SYMBOL(__cvmx_helper_cfg_pko_port_interface);
EXPORT_SYMBOL(__cvmx_helper_cfg_pko_port_index);
EXPORT_SYMBOL(__cvmx_helper_cfg_pko_port_eid);
EXPORT_SYMBOL(__cvmx_helper_cfg_pko_max_engine);
EXPORT_SYMBOL(cvmx_helper_cfg_opt_get);
EXPORT_SYMBOL(cvmx_helper_cfg_opt_set);
EXPORT_SYMBOL(cvmx_helper_cfg_ipd2pko_port_base);
EXPORT_SYMBOL(cvmx_helper_cfg_ipd2pko_port_num);
EXPORT_SYMBOL(cvmx_pko_queue_free_all);

void cvmx_helper_cfg_show_cfg(void)
{
	int i, j;

	for (i = 0; i < cvmx_helper_get_number_of_interfaces(); i++) {
		cvmx_dprintf
		    ("cvmx_helper_cfg_show_cfg: interface%d mode %10s nports%4d\n",
		     i,
		     cvmx_helper_interface_mode_to_string
		     (cvmx_helper_interface_get_mode(i)),
		     cvmx_helper_interface_enumerate(i));

		for (j = 0; j < cvmx_helper_interface_enumerate(i); j++) {
			cvmx_dprintf("\tpknd[%i][%d]%d", i, j,
				     __cvmx_helper_cfg_pknd(i, j));
			cvmx_dprintf(" pko_port_base[%i][%d]%d", i, j,
				     __cvmx_helper_cfg_pko_port_base(i, j));
			cvmx_dprintf(" pko_port_num[%i][%d]%d\n", i, j,
				     __cvmx_helper_cfg_pko_port_num(i, j));
		}
	}

	for (i = 0; i < CVMX_HELPER_CFG_MAX_PKO_PORT; i++) {
		if (__cvmx_helper_cfg_pko_queue_base(i) !=
		    CVMX_HELPER_CFG_INVALID_VALUE) {
			cvmx_dprintf
			    ("cvmx_helper_cfg_show_cfg: pko_port%d qbase%d nqueues%d "
			     "interface%d index%d\n", i,
			     __cvmx_helper_cfg_pko_queue_base(i),
			     __cvmx_helper_cfg_pko_queue_num(i),
			     __cvmx_helper_cfg_pko_port_interface(i),
			     __cvmx_helper_cfg_pko_port_index(i));
		}
	}
}

/*
 * initialize cvmx_cfg_pko_port_map
 */
void cvmx_helper_cfg_init_pko_port_map(void)
{
	int i, j, k;
	int pko_eid;
	int pko_port_base, pko_port_max;
	cvmx_helper_interface_mode_t mode;

	/*
	 * one pko_eid is allocated to each port except for ILK, NPI, and
	 * LOOP. Each of the three has one eid.
	 */
	pko_eid = 0;
	for (i = 0; i < cvmx_helper_get_number_of_interfaces(); i++) {
		mode = cvmx_helper_interface_get_mode(i);
		for (j = 0; j < cvmx_helper_interface_enumerate(i); j++) {
			pko_port_base =
			    cvmx_cfg_port[0][i][j].ccpp_pko_port_base;
			pko_port_max =
			    pko_port_base +
			    cvmx_cfg_port[0][i][j].ccpp_pko_num_ports;
			if (!octeon_has_feature(OCTEON_FEATURE_PKO3)) {
				cvmx_helper_cfg_assert(pko_port_base !=
						       CVMX_HELPER_CFG_INVALID_VALUE);
				cvmx_helper_cfg_assert(pko_port_max >=
						       pko_port_base);
			}
			for (k = pko_port_base; k < pko_port_max; k++) {
				cvmx_cfg_pko_port_map[k].ccppl_interface = i;
				cvmx_cfg_pko_port_map[k].ccppl_index = j;
				cvmx_cfg_pko_port_map[k].ccppl_eid = pko_eid;
			}

			if (!
			    (mode == CVMX_HELPER_INTERFACE_MODE_NPI
			     || mode == CVMX_HELPER_INTERFACE_MODE_LOOP
			     || mode == CVMX_HELPER_INTERFACE_MODE_ILK))
				pko_eid++;
		}

		if (mode == CVMX_HELPER_INTERFACE_MODE_NPI
		    || mode == CVMX_HELPER_INTERFACE_MODE_LOOP
		    || mode == CVMX_HELPER_INTERFACE_MODE_ILK)
			pko_eid++;
	}

	/*
	 * Legal pko_eids [0, 0x13] should not be exhausted.
	 */
	if (!octeon_has_feature(OCTEON_FEATURE_PKO3))
		cvmx_helper_cfg_assert(pko_eid <= 0x14);

	cvmx_cfg_max_pko_engines = pko_eid;
}

int __cvmx_helper_cfg_pko_port_interface(int pko_port)
{
	return cvmx_cfg_pko_port_map[pko_port].ccppl_interface;
}

int __cvmx_helper_cfg_pko_port_index(int pko_port)
{
	return cvmx_cfg_pko_port_map[pko_port].ccppl_index;
}

int __cvmx_helper_cfg_pko_port_eid(int pko_port)
{
	return cvmx_cfg_pko_port_map[pko_port].ccppl_eid;
}

#define IPD2PKO_CACHE_Y(ipd_port)	(ipd_port) >> 8
#define IPD2PKO_CACHE_X(ipd_port)	(ipd_port) & 0xff

static inline int __cvmx_helper_cfg_ipd2pko_cachex(int ipd_port)
{
	int ipd_x = IPD2PKO_CACHE_X(ipd_port);
	if (ipd_port & 0x800)
		ipd_x = (ipd_x >> 4) & 3;
	return ipd_x;
}

/*
 * ipd_port to pko_port translation cache
 */
int __cvmx_helper_cfg_init_ipd2pko_cache(void)
{
	int i, j, n;
	int ipd_y, ipd_x, ipd_port;

	for (i = 0; i < cvmx_helper_get_number_of_interfaces(); i++) {
		n = cvmx_helper_interface_enumerate(i);

		for (j = 0; j < n; j++) {
			ipd_port = cvmx_helper_get_ipd_port(i, j);
			ipd_y = IPD2PKO_CACHE_Y(ipd_port);
			ipd_x = __cvmx_helper_cfg_ipd2pko_cachex(ipd_port);
			ipd2pko_port_cache[ipd_y]
			    [ipd_x] = (struct cvmx_cfg_pko_port_pair) {
			__cvmx_helper_cfg_pko_port_base(i, j),
				    __cvmx_helper_cfg_pko_port_num(i, j)};
		}
	}

	return 0;
}

int cvmx_helper_cfg_ipd2pko_port_base(int ipd_port)
{
	int ipd_y, ipd_x;

	/* Internal PKO ports are not present in PKO3 */
	if (OCTEON_IS_MODEL(OCTEON_CN78XX))
		return ipd_port;

	ipd_y = IPD2PKO_CACHE_Y(ipd_port);
	ipd_x = __cvmx_helper_cfg_ipd2pko_cachex(ipd_port);

	return ipd2pko_port_cache[ipd_y][ipd_x].ccppp_base_port;
}

int cvmx_helper_cfg_ipd2pko_port_num(int ipd_port)
{
	int ipd_y, ipd_x;

	ipd_y = IPD2PKO_CACHE_Y(ipd_port);
	ipd_x = __cvmx_helper_cfg_ipd2pko_cachex(ipd_port);

	return ipd2pko_port_cache[ipd_y][ipd_x].ccppp_nports;
}

/**
 * Return the number of queues to be assigned to this pko_port
 *
 * @pko_port:
 * Returns the number of queues for this pko_port
 *
 */
static int cvmx_helper_cfg_dft_nqueues(int pko_port)
{
	cvmx_helper_interface_mode_t mode;
	int interface;
	int n;
	int ret;

	interface = __cvmx_helper_cfg_pko_port_interface(pko_port);
	mode = cvmx_helper_interface_get_mode(interface);

	n = NUM_ELEMENTS(__cvmx_pko_queue_static_config.pknd.pko_cfg_iface);

	if (mode == CVMX_HELPER_INTERFACE_MODE_LOOP) {
		ret =
		    __cvmx_pko_queue_static_config.pknd.pko_cfg_loop.
		    queues_per_port;
	} else if (mode == CVMX_HELPER_INTERFACE_MODE_NPI) {
		ret =
		    __cvmx_pko_queue_static_config.pknd.pko_cfg_npi.
		    queues_per_port;
	}

	else if ((interface >= 0) && (interface < n)) {
		ret =
		    __cvmx_pko_queue_static_config.pknd.
		    pko_cfg_iface[interface].queues_per_port;
	} else {
		/* Should never be called */
		ret = 1;
	}
	/* Override for sanity in case of empty static config table */
	if (ret == 0)
		ret = 1;
	return ret;
}

static int cvmx_helper_cfg_init_pko_iports_and_queues_using_static_config(void)
{
	int pko_port_base = 0;
	int cvmx_cfg_default_pko_nports = 1;
	int i, j, n, k;
	int rv = 0;

	/* When not using config file, each port is assigned one internal pko port */
	for (i = 0; i < cvmx_helper_get_number_of_interfaces(); i++) {
		n = cvmx_helper_interface_enumerate(i);
		for (j = 0; j < n; j++) {
			cvmx_cfg_port[0][i][j].ccpp_pko_port_base =
			    pko_port_base;
			cvmx_cfg_port[0][i][j].ccpp_pko_num_ports =
			    cvmx_cfg_default_pko_nports;
			/* Initalize interface early here so that the
			   cvmx_helper_cfg_dft_nqueues() below
			   can get the interface number corresponding to the pko port */
			for (k = pko_port_base;
			     k < pko_port_base + cvmx_cfg_default_pko_nports;
			     k++) {
				cvmx_cfg_pko_port_map[k].ccppl_interface = i;
			}
			pko_port_base += cvmx_cfg_default_pko_nports;
		}
	}
	cvmx_helper_cfg_assert(pko_port_base <= CVMX_HELPER_CFG_MAX_PKO_PORT);

	/* Assigning queues per pko */
	for (i = 0; i < pko_port_base; i++) {
		int base;
		n = cvmx_helper_cfg_dft_nqueues(i);
		base = cvmx_pko_queue_alloc(i, n);
		if (base == -1) {
			cvmx_printf("ERROR: %s: failed to alloc %d queues "
				    "for pko port=%d\n", __func__, n, i);
			rv = -1;
		}
	}
	return rv;
}

/**
 * Returns if port is valid for a given interface
 *
 * @xiface:  interface to check
 * @index:      port index in the interface
 *
 * Returns status of the port present or not.
 */
int cvmx_helper_is_port_valid(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].valid;
}

EXPORT_SYMBOL(cvmx_helper_is_port_valid);

void cvmx_helper_set_port_valid(int xiface, int index, bool valid)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	cvmx_cfg_port[xi.node][xi.interface][index].valid = valid;
}

EXPORT_SYMBOL(cvmx_helper_set_port_valid);

void cvmx_helper_set_mac_phy_mode(int xiface, int index, bool valid)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	cvmx_cfg_port[xi.node][xi.interface][index].sgmii_phy_mode = valid;
}

EXPORT_SYMBOL(cvmx_helper_set_mac_phy_mode);

bool cvmx_helper_get_mac_phy_mode(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].sgmii_phy_mode;
}

EXPORT_SYMBOL(cvmx_helper_get_mac_phy_mode);

void cvmx_helper_set_1000x_mode(int xiface, int index, bool valid)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	cvmx_cfg_port[xi.node][xi.interface][index].sgmii_1000x_mode = valid;
}

EXPORT_SYMBOL(cvmx_helper_set_1000x_mode);

bool cvmx_helper_get_1000x_mode(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].sgmii_1000x_mode;
}

EXPORT_SYMBOL(cvmx_helper_get_1000x_mode);

void cvmx_helper_set_agl_rx_clock_delay_bypass(int xiface, int index,
					       bool valid)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	cvmx_cfg_port[xi.node][xi.interface][index].agl_rx_clk_delay_bypass =
	    valid;
}

EXPORT_SYMBOL(cvmx_helper_set_agl_rx_clock_delay_bypass);

bool cvmx_helper_get_agl_rx_clock_delay_bypass(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].
	    agl_rx_clk_delay_bypass;
}

EXPORT_SYMBOL(cvmx_helper_get_agl_rx_clock_delay_bypass);

void cvmx_helper_set_agl_rx_clock_skew(int xiface, int index, uint8_t value)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	cvmx_cfg_port[xi.node][xi.interface][index].agl_rx_clk_skew = value;
}

EXPORT_SYMBOL(cvmx_helper_set_agl_rx_clock_skew);

uint8_t cvmx_helper_get_agl_rx_clock_skew(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].agl_rx_clk_skew;
}

EXPORT_SYMBOL(cvmx_helper_get_agl_rx_clock_skew);

void cvmx_helper_set_port_force_link_up(int xiface, int index, bool value)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	cvmx_cfg_port[xi.node][xi.interface][index].force_link_up = value;
}

EXPORT_SYMBOL(cvmx_helper_set_port_force_link_up);

bool cvmx_helper_get_port_force_link_up(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].force_link_up;
}

EXPORT_SYMBOL(cvmx_helper_get_port_force_link_up);

void cvmx_helper_set_port_phy_present(int xiface, int index, bool value)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	cvmx_cfg_port[xi.node][xi.interface][index].phy_present = value;
}

EXPORT_SYMBOL(cvmx_helper_set_port_phy_present);

bool cvmx_helper_get_port_phy_present(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].phy_present;
}

EXPORT_SYMBOL(cvmx_helper_get_port_phy_present);

int __cvmx_helper_init_port_valid(void)
{
	return 0;
}

typedef int (*cvmx_import_config_t) (void);
cvmx_import_config_t cvmx_import_app_config = NULL;

int __cvmx_helper_init_port_config_data_local(void)
{
	int rv = 0;
	int dbg = 0;

	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		if (cvmx_import_app_config) {
			rv = (*cvmx_import_app_config) ();
			if (rv != 0) {
				cvmx_dprintf("failed to import config\n");
				return -1;
			}
		}

		cvmx_helper_cfg_init_pko_port_map();
		__cvmx_helper_cfg_init_ipd2pko_cache();
	} else {
		if (cvmx_import_app_config) {
			rv = (*cvmx_import_app_config) ();
			if (rv != 0) {
				cvmx_dprintf("failed to import config\n");
				return -1;
			}
		}
	}
	if (dbg) {
		cvmx_helper_cfg_show_cfg();
		cvmx_pko_queue_show();
	}
	return rv;
}

/*
 * This call is made from Linux octeon_ethernet driver
 * to setup the PKO with a specific queue count and
 * internal port count configuration.
 */
int cvmx_pko_alloc_iport_and_queues(int interface, int port, int port_cnt,
				    int queue_cnt)
{
	int rv, p, port_start, cnt;

	if (dbg)
		cvmx_dprintf("%s: intf %d/%d pcnt %d qcnt %d\n",
			     __func__, interface, port, port_cnt, queue_cnt);

	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		rv = cvmx_pko_internal_ports_alloc(interface, port, port_cnt);
		if (rv < 0) {
			cvmx_printf
			    ("ERROR: %s: failed to allocate internal ports for"
			     "interface=%d port=%d cnt=%d\n", __func__,
			     interface, port, port_cnt);
			return -1;
		}
		port_start = __cvmx_helper_cfg_pko_port_base(interface, port);
		cnt = __cvmx_helper_cfg_pko_port_num(interface, port);
	} else {
		port_start = cvmx_helper_get_ipd_port(interface, port);
		cnt = 1;
	}

	for (p = port_start; p < port_start + cnt; p++) {
		rv = cvmx_pko_queue_alloc(p, queue_cnt);
		if (rv < 0) {
			cvmx_printf("ERROR: %s: failed to allocate "
				    "queues for port=%d cnt=%d\n",
				    __func__, p, queue_cnt);
			return -1;
		}
	}
	return 0;
}

EXPORT_SYMBOL(cvmx_pko_alloc_iport_and_queues);

int __cvmx_helper_init_port_config_data(int node)
{
	int rv = 0;
	int i, j, n;
	int num_interfaces, interface;
	int pknd = 0, bpid = 0;
	const int use_static_config = 0;

	if (dbg)
		cvmx_printf("%s:\n", __func__);

	if (octeon_has_feature(OCTEON_FEATURE_CN78XX_WQE)) {
		/* PKO3: only needs BPID, PKND to be setup,
		 * while the rest of PKO3 init is done in cvmx-helper-pko3.c
		 */
		pknd = 0;
		bpid = 0;
		for (i = 0; i < cvmx_helper_get_number_of_interfaces(); i++) {
			int xiface =
			    cvmx_helper_node_interface_to_xiface(node, i);
			n = cvmx_helper_interface_enumerate(xiface);
			if (cvmx_helper_interface_get_mode(xiface) !=
			    CVMX_HELPER_INTERFACE_MODE_NPI) {
				for (j = 0; j < n; j++) {
					cvmx_cfg_port[node][i][j].ccpp_pknd =
					    pknd++;
					cvmx_cfg_port[node][i][j].ccpp_bpid =
					    bpid++;
				}
			} else {
				for (j = 0; j < n; j++) {
					cvmx_cfg_port[node][i][j].ccpp_pknd =
					    pknd;
					cvmx_cfg_port[node][i][j].ccpp_bpid =
					    bpid;
				}
				pknd++;
				bpid++;
			}
		}		/* for i=0 */
		cvmx_helper_cfg_assert(pknd <= CVMX_HELPER_CFG_MAX_PIP_PKND);
		cvmx_helper_cfg_assert(bpid <= CVMX_HELPER_CFG_MAX_PIP_BPID);
	} else if (octeon_has_feature(OCTEON_FEATURE_PKND)) {

		if (use_static_config)
			cvmx_helper_cfg_init_pko_iports_and_queues_using_static_config
			    ();

		/* Initialize pknd and bpid */
		for (i = 0; i < cvmx_helper_get_number_of_interfaces(); i++) {
			n = cvmx_helper_interface_enumerate(i);
			for (j = 0; j < n; j++) {
				cvmx_cfg_port[0][i][j].ccpp_pknd = pknd++;
				cvmx_cfg_port[0][i][j].ccpp_bpid = bpid++;
			}
		}
		cvmx_helper_cfg_assert(pknd <= CVMX_HELPER_CFG_MAX_PIP_PKND);
		cvmx_helper_cfg_assert(bpid <= CVMX_HELPER_CFG_MAX_PIP_BPID);
	} else {
		if (use_static_config)
			cvmx_pko_queue_init_from_cvmx_config_non_pknd();
	}

	/* Remainder not used for PKO3 */
	if (octeon_has_feature(OCTEON_FEATURE_CN78XX_WQE))
		return 0;

	/* init ports, queues which are not initialized */
	num_interfaces = cvmx_helper_get_number_of_interfaces();
	for (interface = 0; interface < num_interfaces; interface++) {
		int num_ports =
		    __cvmx_helper_early_ports_on_interface(interface);
		int port, port_base, queue;

		for (port = 0; port < num_ports; port++) {
			bool init_req = false;

			if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
				port_base =
				    __cvmx_helper_cfg_pko_port_base(interface,
								    port);
				if (port_base == CVMX_HELPER_CFG_INVALID_VALUE)
					init_req = true;
			} else {
				port_base =
				    cvmx_helper_get_ipd_port(interface, port);
				queue =
				    __cvmx_helper_cfg_pko_queue_base(port_base);
				if (queue == CVMX_HELPER_CFG_INVALID_VALUE)
					init_req = true;
			}

			if (init_req) {
				rv = cvmx_pko_alloc_iport_and_queues(interface,
								     port, 1,
								     1);
				if (rv < 0) {
					cvmx_dprintf
					    ("cvm_pko_alloc_iport_and_queues failed.\n");
					return rv;
				}
			}
		}
	}

	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		cvmx_helper_cfg_init_pko_port_map();
		__cvmx_helper_cfg_init_ipd2pko_cache();
	}

	if (dbg) {
		cvmx_helper_cfg_show_cfg();
		cvmx_pko_queue_show();
	}
	return rv;
}

EXPORT_SYMBOL(__cvmx_helper_init_port_config_data);

/**
 * @INTERNAL
 * Returns if autonegotiation is enabled or not.
 *
 * @xiface:	node and interface
 * @index:		port index
 *
 * Returns 0 if autonegotiation is disabled, 1 if enabled.
 */
bool cvmx_helper_get_port_autonegotiation(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return !cvmx_cfg_port[xi.node][xi.interface][index].disable_an;
}

/**
 * @INTERNAL
 * Sets the PHY info data structure
 *
 * @xiface:	node and interface
 * @index:		port index
 * @param[in] phy_info	phy information data structure pointer
 */
void cvmx_helper_set_port_phy_info(int xiface, int index,
				   struct cvmx_phy_info *phy_info)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	cvmx_cfg_port[xi.node][xi.interface][index].phy_info = phy_info;
}

/**
 * @INTERNAL
 * Returns the PHY information data structure for a port
 *
 * @xiface:	node and interface
 * @index:		port index
 *
 * Returns pointer to PHY information data structure or NULL if not set
 */
struct cvmx_phy_info *cvmx_helper_get_port_phy_info(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	return cvmx_cfg_port[xi.node][xi.interface][index].phy_info;
}
