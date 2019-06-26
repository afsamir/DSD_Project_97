#include "miner.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "echo.c"
#include "sph_echo.h"



void echohash(void *output, const void *input)
{
	uint8_t hash[64];
	sph_echo512_context ctx;

	
	sph_echo512_init(&ctx);
	sph_echo512(&ctx, input, 80);
	sph_echo512_close(&ctx, (void*)hash);

	
	memcpy(output, hash, 8);
}
