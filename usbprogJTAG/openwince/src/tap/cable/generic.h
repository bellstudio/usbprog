/*
 * $Id: generic.h,v 1.2 2003/09/14 20:04:25 telka Exp $
 *
 * Copyright (C) 2003 ETC s.r.o.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Written by Marcel Telka <marcel@telka.sk>, 2003.
 *
 */

#ifndef GENERIC_H
#define	GENERIC_H

#include "cable.h"
#include "parport.h"

typedef struct {
	int trst;
	int sreset;
} generic_params_t;

#define	PARAM_TRST(cable)	((generic_params_t *) cable->params)->trst
#define	PARAM_SRESET(cable)	((generic_params_t *) cable->params)->sreset

cable_t *generic_connect( cable_driver_t *cable_driver, parport_t *port );
void generic_disconnect( cable_t *cable );
void generic_cable_free( cable_t *cable );
void generic_done( cable_t *cable );
int generic_get_trst( cable_t *cable );

#endif /* GENERIC_H */
