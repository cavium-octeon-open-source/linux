/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2012 Cavium Inc.
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

#ifndef __CVMX_APP_CONFIG_H__
#define __CVMX_APP_CONFIG_H__

/* This defines the name of the named block from which config(pko, pools)
   is exported/imported */
#define CVMX_APP_CONFIG "cvmx-app-config"

/* skip_app_config */
extern int skip_app_config;

/**
 * Sets the skip_app_config. This can be called by the application when
 * it wants to skip the configuration.
 */
void cvmx_skip_app_config_set(void);

/**
 * @INTERNAL
 * Called by apps to export app config to other
 * cooperating applications using a named block
 * defined by param block_name.
 *
 * @block_name: Name of the named block to use for exporting config.
 *
 * Returns 0 on success.
 */
int __cvmx_export_app_config_to_named_block(char *block_name);

/**
 * @INTERNAL
 * Called by apps to import app config from other
 * cooperating applications using a named block
 * defined by param block_name.
 *
 * @block_name: Name of the named block to use for exporting config.
 *
 * Returns 0 on success.
 */
int __cvmx_import_app_config_from_named_block(char *block_name);

/**
 * @INTERNAL
 * Called by apps to clean app config named block.
 */
void __cvmx_export_app_config_cleanup(void);

int __cvmx_export_config(void);

#endif /* __CVMX_APP_CONFIG_H__ */
