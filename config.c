/*
 * IKE MITM for Cisco PSK+XAUTH.
 * Copyright (C) 2005, Daniel Roethlisberger <daniel@roe.ch>
 * 
 * All rights reserved.  This is unpublished work.  Unauthorized use,
 * distribution in source or binary form, modified or unmodified, is
 * strictly prohibited.
 * 
 * $Id$
 */

#include "config.h"
#include <stdlib.h>
#include <string.h>

config * new_config()
{
	config *cfg = malloc(sizeof(config));
	memset(cfg, 0, sizeof(config));
	return cfg;
}