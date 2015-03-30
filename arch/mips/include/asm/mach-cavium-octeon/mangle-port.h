/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2003, 2004 Ralf Baechle
 */
#ifndef __ASM_MACH_OCTEON_MANGLE_PORT_H
#define __ASM_MACH_OCTEON_MANGLE_PORT_H

#include <asm/byteorder.h>

static inline bool __attribute__((const)) __oct_addr_is_RSL(unsigned long p)
{
	return ((p >> 40) & 0x7ffff) == 0x118;
}

#ifdef __BIG_ENDIAN

# define __swizzle_addr_b(port)	(port)
# define __swizzle_addr_w(port)	(port)
# define __swizzle_addr_l(port)	(port)
# define __swizzle_addr_q(port)	(port)

#else /* __LITTLE_ENDIAN */

static inline bool __attribute__((const)) __oct_addr_is_bootbus(unsigned long p)
{
	return ((p >> 40) & 0xff) == 0;
}

# define __swizzle_addr_b(port)	\
	(__oct_addr_is_bootbus(port) ? (port) ^ 7 : (port))
# define __swizzle_addr_w(port)	\
	(__oct_addr_is_bootbus(port) ? (port) ^ 6 : (port))
# define __swizzle_addr_l(port)	\
	(__oct_addr_is_bootbus(port) ? (port) ^ 4 : (port))
# define __swizzle_addr_q(port)	(port)

#endif /* __BIG_ENDIAN */

/*
 * Sane hardware offers swapping of PCI/ISA I/O space accesses in hardware;
 * less sane hardware forces software to fiddle with this...
 *
 * Regardless, if the host bus endianness mismatches that of PCI/ISA, then
 * you can't have the numerical value of data and byte addresses within
 * multibyte quantities both preserved at the same time.  Hence two
 * variations of functions: non-prefixed ones that preserve the value
 * and prefixed ones that preserve byte addresses.  The latters are
 * typically used for moving raw data between a peripheral and memory (cf.
 * string I/O functions), hence the "__mem_" prefix.
 */
#if !defined(CONFIG_SWAP_IO_SPACE)
# error "CONFIG_SWAP_IO_SPACE should be defined"
#endif

#define ioswabb(a, x)		(x)
#define __mem_ioswabb(a, x)	(x)
#define ioswabw(a, x) \
	(__oct_addr_is_RSL((unsigned long)a) ? (x) : le16_to_cpu(x))
#define __mem_ioswabw(a, x)	(x)
#define ioswabl(a, x) \
	(__oct_addr_is_RSL((unsigned long)a) ? (x) : le32_to_cpu(x))
#define __mem_ioswabl(a, x)	(x)
#define ioswabq(a, x) \
	(__oct_addr_is_RSL((unsigned long)a) ? (x) : le64_to_cpu(x))
#define __mem_ioswabq(a, x)	(x)

#endif /* __ASM_MACH_OCTEON_MANGLE_PORT_H */
