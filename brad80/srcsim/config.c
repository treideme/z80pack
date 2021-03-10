/*
 * Z80SIM  -  a Z80-CPU simulator
 *
 * Copyright (C) 2021 by Thomas Reidemeister
 *
 * This module reads the system configuration file and sets
 * global variables, so that the system can be configured.
 *
 * History:
 * FIXME: (Thomas Reidemeister Douglas) created for Brad80 board
 * 28-SEP-19 (Udo Munk) use logging
 * 17-OCT-19 (Udo Munk) fix logging
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "sim.h"
#include "simglb.h"
#include "log.h"

#define BUFSIZE 256	/* max line length of command buffer */

static const char *TAG = "config";

void config(void)
{
	LOGI(TAG, "Executed config");
}
