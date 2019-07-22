#include "miner.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "echo.c"
#include "sph_echo.h"



void echohash(void *output, const void *input)
{
	uint8_t hash[128];
	sph_echo512_context ctx;

	printf("input size : %d\n", strlen(input));
	sph_echo512_init(&ctx);
	sph_echo512(&ctx, input, strlen(input));
	sph_echo512_close(&ctx, (void*)hash);

	memcpy(output, hash, 64);
}
