/**
 * \file
 * <!--
 * This file is part of BeRTOS.
 *
 * Bertos is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As a special exception, you may use this file as part of a free software
 * library without restriction.  Specifically, if other files instantiate
 * templates or use macros or inline functions from this file, or you compile
 * this file and link it with other files to produce an executable, this
 * file does not by itself cause the resulting executable to be covered by
 * the GNU General Public License.  This exception does not however
 * invalidate any other reasons why the executable file might be covered by
 * the GNU General Public License.
 *
 * Copyright 2003, 2004, 2010 Develer S.r.l. (http://www.develer.com/)
 * Copyright 2000 Bernie Innocenti <bernie@codewiz.org>
 *
 * -->
 *
 * \brief AVR UART and SPI I/O driver (Implementation)
 *
 * \author Onno <developer@gorgoz.org>
 *
 * This module is automatically included so no need to include
 * in test list.
 * notest: avr
 */

#ifndef WIZ_AUTOGEN
	#warning This file is deprecated, you should probably use ser_mega.c

	#include <cpu/detect.h>

	#if CPU_AVR_MEGA
		#include "ser_mega.c"
	#elif CPU_AVR_XMEGA
		#include "ser_xmega.c"
	/*#elif  Add other AVR families here */
	#else
		#error Unknown CPU
	#endif
#endif /* WIZ_AUTOGEN */
