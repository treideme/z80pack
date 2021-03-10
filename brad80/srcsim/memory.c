/*
 * Z80SIM  -  a Z80-CPU simulator
 *
 * Copyright (C) 2021 by Thomas Reidemeister
 *
 * This module implements memory management
 *
 * History:
 * FIXME: (Thomas Reidemeister) Created from memory.c in mosteksim
 * 15-SEP-19 (Mike Douglas) Created from memory.c in the z80sim
 * 		directory. Emulate memory of the Mostek AID-80F and SYS-80FT
 *		computers by treating 0xe000-0xefff as ROM.
 */

#include "sim.h"

/* 64KB non banked memory */
BYTE memory[65536];		/* 64KB RAM */

void init_memory(void)
{
}

void init_rom(void)
{
}
