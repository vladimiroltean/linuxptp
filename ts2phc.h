/**
 * @file ts2phc.h
 * @brief Structure definitions for ts2phc
 * @note Copyright 2020 Vladimir Oltean <olteanv@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef HAVE_TS2PHC_H
#define HAVE_TS2PHC_H

struct ts2phc_slave_array;

struct ts2phc_private {
	struct ts2phc_master *master;
	STAILQ_HEAD(slave_ifaces_head, ts2phc_slave) slaves;
	unsigned int n_slaves;
	struct ts2phc_slave_array *polling_array;
	struct config *cfg;
};

#include "ts2phc_master.h"
#include "ts2phc_slave.h"

#endif
