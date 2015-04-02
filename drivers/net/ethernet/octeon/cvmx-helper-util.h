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
 * Small helper utilities.
 *
 */

#ifndef __CVMX_HELPER_UTIL_H__
#define __CVMX_HELPER_UTIL_H__

#include <asm/octeon/cvmx.h>

// #include "cvmx-mio-defs.h"
#include "cvmx-helper.h"
#include "cvmx-fpa.h"

typedef char cvmx_pknd_t;
typedef char cvmx_bpid_t;

#define CVMX_INVALID_PKND	((cvmx_pknd_t) -1)
#define CVMX_INVALID_BPID	((cvmx_bpid_t) -1)
#define CVMX_MAX_PKND		((cvmx_pknd_t) 64)
#define CVMX_MAX_BPID		((cvmx_bpid_t) 64)

#define CVMX_HELPER_MAX_IFACE		11
#define CVMX_HELPER_MAX_PORTS		16

/* Maximum range for normalized (a.k.a. IPD) port numbers (12-bit field) */
#define	CVMX_PKO3_IPD_NUM_MAX	0x1000	//FIXME- take it from someplace else ?

#define CVMX_PKO3_IPD_PORT_NULL (CVMX_PKO3_IPD_NUM_MAX-1)

struct cvmx_xport {
	int node;
	int port;
};
typedef struct cvmx_xport cvmx_xport_t;

static inline struct cvmx_xport cvmx_helper_ipd_port_to_xport(int ipd_port)
{
	struct cvmx_xport r;
	r.port = ipd_port & (CVMX_PKO3_IPD_NUM_MAX - 1);
	r.node = (ipd_port >> 12) & CVMX_NODE_MASK;
	return r;
}

static inline int cvmx_helper_node_to_ipd_port(int node, int index)
{
	return (node << 12) + index;
}

struct cvmx_xiface {
	int node;
	int interface;
};
typedef struct cvmx_xiface cvmx_xiface_t;

/**
 * Return node and interface number from XIFACE.
 *
 * @xiface: interface with node information
 *
 * Returns struct that contains node and interface number.
 */
static inline struct cvmx_xiface cvmx_helper_xiface_to_node_interface(int
								      xiface)
{
	cvmx_xiface_t interface_node;
	/*
	 * If the majic number 0xde0000 is not present in the
	 * interface, then assume it is node 0.
	 */

	if (((xiface >> 0x8) & 0xff) == 0xde) {
		interface_node.node = (xiface >> 16) & CVMX_NODE_MASK;
		interface_node.interface = xiface & 0xff;
	} else {
		interface_node.node = cvmx_get_node_num();
		interface_node.interface = xiface & 0xff;
	}
	return interface_node;
}

/* Used internally only*/
static inline bool __cvmx_helper_xiface_is_null(int xiface)
{
	return (xiface & 0xff) == 0xff;
}

#define __CVMX_XIFACE_NULL 0xff

/**
 * Return interface with majic number and node information (XIFACE)
 *
 * @node:       node of the interface referred to
 * @interface:  interface to use.
 *
 * Returns
 */
static inline int cvmx_helper_node_interface_to_xiface(int node, int interface)
{
	return ((node & CVMX_NODE_MASK) << 16) | (0xde << 8) | (interface &
								0xff);
}

/**
 * Free the pip packet buffers contained in a work queue entry.
 * The work queue entry is not freed.
 *
 * @work:   Work queue entry with packet to free
 */
static inline void cvmx_helper_free_pip_pkt_data(cvmx_wqe_t * work)
{
	uint64_t number_buffers;
	cvmx_buf_ptr_t buffer_ptr;
	cvmx_buf_ptr_t next_buffer_ptr;
	uint64_t start_of_buffer;

	number_buffers = work->word2.s.bufs;
	if (number_buffers == 0)
		return;
	buffer_ptr = work->packet_ptr;

	/* Since the number of buffers is not zero, we know this is not a dynamic
	   short packet. We need to check if it is a packet received with
	   IPD_CTL_STATUS[NO_WPTR]. If this is true, we need to free all buffers
	   except for the first one. The caller doesn't expect their WQE pointer
	   to be freed */
	start_of_buffer = ((buffer_ptr.s.addr >> 7) - buffer_ptr.s.back) << 7;
	if (cvmx_ptr_to_phys(work) == start_of_buffer) {
		next_buffer_ptr =
		    *(cvmx_buf_ptr_t *) cvmx_phys_to_ptr(buffer_ptr.s.addr - 8);
		buffer_ptr = next_buffer_ptr;
		number_buffers--;
	}

	while (number_buffers--) {
		/* Remember the back pointer is in cache lines, not 64bit words */
		start_of_buffer =
		    ((buffer_ptr.s.addr >> 7) - buffer_ptr.s.back) << 7;
		/* Read pointer to next buffer before we free the current buffer. */
		next_buffer_ptr =
		    *(cvmx_buf_ptr_t *) cvmx_phys_to_ptr(buffer_ptr.s.addr - 8);
		cvmx_fpa_free(cvmx_phys_to_ptr(start_of_buffer),
			      buffer_ptr.s.pool, 0);
		buffer_ptr = next_buffer_ptr;
	}
}

#if 0
/**
 * Free the pki packet buffers contained in a work queue entry.
 * If first packet buffer contains wqe, wqe gets freed too so do not access
 * wqe after calling this function.
 * This function asssumes that buffers to be freed are from
 * Naturally aligned pool/aura.
 * It does not use don't write back.
 * @work:   Work queue entry with packet to free
 */
static inline void cvmx_helper_free_pki_pkt_data(cvmx_wqe_t * work)
{
	uint64_t number_buffers;
	uint64_t start_of_buffer;
	cvmx_buf_ptr_pki_t next_buffer_ptr;
	cvmx_buf_ptr_pki_t buffer_ptr;
	cvmx_wqe_78xx_t *wqe = (cvmx_wqe_78xx_t *) work;

	if (!octeon_has_feature(OCTEON_FEATURE_CN78XX_WQE)) {
		return;
	}
	/* Make sure errata pki-20776 has been applied */
	cvmx_wqe_pki_errata_20776(work);
	buffer_ptr = wqe->packet_ptr;
	number_buffers = cvmx_wqe_get_bufs(work);

	while (number_buffers--) {
		/* FIXME: change WQE function prototype */
		unsigned x = cvmx_wqe_get_aura(work);
		cvmx_fpa3_gaura_t aura = __cvmx_fpa3_gaura(x >> 10, x & 0x3ff);
		/* XXX- assumes the buffer is cache-line aligned and naturally aligned mode */
		start_of_buffer = (buffer_ptr.addr >> 7) << 7;
		/* Read pointer to next buffer before we free the current buffer. */
		next_buffer_ptr = *(cvmx_buf_ptr_pki_t *)
		    cvmx_phys_to_ptr(buffer_ptr.addr - 8);
		/* FPA AURA comes from WQE, includes node */
		cvmx_fpa3_free(cvmx_phys_to_ptr(start_of_buffer), aura, 0);
		buffer_ptr = next_buffer_ptr;
	}
}

/**
 * Free the pki wqe entry buffer.
 * If wqe buffers contains first packet buffer, wqe does not get freed here.
 * This function asssumes that buffers to be freed are from
 * Naturally aligned pool/aura.
 * It does not use don't write back.
 * @work:   Work queue entry to free
 */
static inline void cvmx_wqe_pki_free(cvmx_wqe_t * work)
{
	cvmx_wqe_78xx_t *wqe = (cvmx_wqe_78xx_t *) work;
	unsigned x;
	cvmx_fpa3_gaura_t aura;

	if (!octeon_has_feature(OCTEON_FEATURE_CN78XX_WQE)) {
		return;
	}
	/* Do nothing if the first packet buffer shares WQE buffer */
	if (!wqe->packet_ptr.packet_outside_wqe)
		return;

	/* FIXME change WQE function prototype */
	x = cvmx_wqe_get_aura(work);
	aura = __cvmx_fpa3_gaura(x >> 10, x & 0x3ff);

	cvmx_fpa3_free(work, aura, 0);
}
#endif

/**
 * Convert a interface mode into a human readable string
 *
 * @mode:   Mode to convert
 *
 * Returns String
 */
extern const char
    *cvmx_helper_interface_mode_to_string(cvmx_helper_interface_mode_t mode);

/**
 * Debug routine to dump the packet structure to the console
 *
 * @work:   Work queue entry containing the packet to dump
 * Returns
 */
extern int cvmx_helper_dump_packet(cvmx_wqe_t * work);

/**
 * Get the version of the CVMX libraries.
 *
 * Returns Version string. Note this buffer is allocated statically
 *         and will be shared by all callers.
 */
extern const char *cvmx_helper_get_version(void);

/**
 * @INTERNAL
 * Setup the common GMX settings that determine the number of
 * ports. These setting apply to almost all configurations of all
 * chips.
 *
 * @xiface: Interface to configure
 * @num_ports: Number of ports on the interface
 *
 * Returns Zero on success, negative on failure
 */
extern int __cvmx_helper_setup_gmx(int xiface, int num_ports);

/**
 * @INTERNAL
 * Get the number of pko_ports on an interface.
 *
 * @interface:
 *
 * Returns the number of pko_ports on the interface.
 */
extern int __cvmx_helper_get_num_pko_ports(int interface);

/**
 * Returns the IPD port number for a port on the given
 * interface.
 *
 * @interface: Interface to use
 * @port:      Port on the interface
 *
 * Returns IPD port number
 */
extern int cvmx_helper_get_ipd_port(int interface, int port);

/**
 * Returns the PKO port number for a port on the given interface,
 * This is the base pko_port for o68 and ipd_port for older models.
 *
 * @interface: Interface to use
 * @port:      Port on the interface
 *
 * Returns PKO port number and -1 on error.
 */
extern int cvmx_helper_get_pko_port(int interface, int port);

/**
 * Returns the IPD/PKO port number for the first port on the given
 * interface.
 *
 * @interface: Interface to use
 *
 * Returns IPD/PKO port number
 */
static inline int cvmx_helper_get_first_ipd_port(int interface)
{
	return cvmx_helper_get_ipd_port(interface, 0);
}

/**
 * Returns the IPD/PKO port number for the last port on the given
 * interface.
 *
 * @interface: Interface to use
 *
 * Returns IPD/PKO port number
 *
 * Note: for o68, the last ipd port on an interface does not always equal to
 * the first plus the number of ports as the ipd ports are not contiguous in
 * some cases, e.g., SGMII.
 *
 * Note: code that makes the assumption of contiguous ipd port numbers needs to
 * be aware of this.
 */
static inline int cvmx_helper_get_last_ipd_port(int interface)
{
	extern int cvmx_helper_ports_on_interface(int interface);

	return cvmx_helper_get_ipd_port(interface,
					cvmx_helper_ports_on_interface
					(interface) - 1);
}

/**
 * Free the packet buffers contained in a work queue entry.
 * The work queue entry is not freed.
 * Note that this function will not free the work queue entry
 * even if it contains a non-redundant data packet, and hence
 * it is not really comparable to how the PKO would free a packet
 * buffers if requested.
 *
 * @work:   Work queue entry with packet to free
 */
void cvmx_helper_free_packet_data(cvmx_wqe_t * work);

/**
 * Returns the interface number for an IPD/PKO port number.
 *
 * @ipd_port: IPD/PKO port number
 *
 * Returns Interface number
 */
extern int cvmx_helper_get_interface_num(int ipd_port);

/**
 * Returns the interface index number for an IPD/PKO port
 * number.
 *
 * @ipd_port: IPD/PKO port number
 *
 * Returns Interface index number
 */
extern int cvmx_helper_get_interface_index_num(int ipd_port);

/**
 * Get port kind for a given port in an interface.
 *
 * @xiface:  Interface
 * @index:   index of the port in the interface
 *
 * Returns port kind on sucicess  and -1 on failure
 */
extern int cvmx_helper_get_pknd(int xiface, int index);

/**
 * Get bpid for a given port in an interface.
 *
 * @interface:  Interface
 * @port:       index of the port in the interface
 *
 * Returns port kind on sucicess  and -1 on failure
 */
extern int cvmx_helper_get_bpid(int interface, int port);

/**
 * Internal functions.
 */
extern int __cvmx_helper_post_init_interfaces(void);
extern int cvmx_helper_setup_red(int pass_thresh, int drop_thresh);
extern void cvmx_helper_show_stats(int port);

/*
 * Return number of array alements
 */
#define	NUM_ELEMENTS(arr) (sizeof(arr)/sizeof((arr)[0]))

#endif /* __CVMX_HELPER_H__ */
