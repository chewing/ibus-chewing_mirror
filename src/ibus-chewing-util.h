/*
 * Copyright © 2011  Red Hat, Inc. All rights reserved.
 * Copyright © 2011  Ding-Yi Chen <dchen at redhat.com>
 *
 * This file is part of the ibus-chewing Project.
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _IBUS_CHEWING_UTIL_H_
#define _IBUS_CHEWING_UTIL_H_

#define quote_me_(s) #s
#define quote_me(s) quote_me_(s)

#define CHEWING_CHECK_VERSION(major,minor,patch)	\
    (CHEWING_MAJOR_VERSION > (major) || \
     (CHEWING_MAJOR_VERSION == (major) && CHEWING_MINOR_VERSION > (minor)) || \
     (CHEWING_MAJOR_VERSION == (major) && CHEWING_MINOR_VERSION == (minor) && \
      CHEWING_MICRO_VERSION >= (patch)))

#define IBUS_CHEWING_LOG(level, msg, args...) \
    switch (level){\
	case 0:\
	       g_warning(msg, ##args);break;\
	case 1:\
	       g_message(msg, ##args);break;\
	case 2:\
	       g_log(NULL, G_LOG_LEVEL_INFO, msg, ##args);break;\
	default:\
		g_debug(msg, ##args);break;\
    }
#endif /* _IBUS_CHEWING_UTIL_H_ */

