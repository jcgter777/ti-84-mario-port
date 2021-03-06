#include <stdint.h>

#include "tiles.h"

//uint8_t bg[256][66];
uint8_t testTiles[256][66];
uint8_t* tiles[256];

void copyTiles() {
	uint8_t tile00[66] = { // 0
		8, 8,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile01[66] = { // 1
		8, 8,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile02[66] = { // 2
		8, 8,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile03[66] = { // 3
		8, 8,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile04[66] = { // 4
		8, 8,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile05[66] = { // 5
		8, 8,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile06[66] = { // 6
		8, 8,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile07[66] = { // 7
		8, 8,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile08[66] = { // 8
		8, 8,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile09[66] = { // 9
		8, 8,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile0a[66] = { // a
		8, 8,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile0b[66] = { // b
		8, 8,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile0c[66] = { // c
		8, 8,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile0d[66] = { // d
		8, 8,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile0e[66] = { // e
		8, 8,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile0f[66] = { // f
		8, 8,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile10[66] = { // g
		8, 8,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile11[66] = { // h
		8, 8,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile12[66] = { // i
		8, 8,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile13[66] = { // j
		8, 8,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile14[66] = { // k
		8, 8,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile15[66] = { // l
		8, 8,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile16[66] = { // m
		8, 8,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x30, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile17[66] = { // n
		8, 8,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile18[66] = { // o
		8, 8,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile19[66] = { // p
		8, 8,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile1a[66] = { // q
		8, 8,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile1b[66] = { // r
		8, 8,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile1c[66] = { // s
		8, 8,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile1d[66] = { // t
		8, 8,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile1e[66] = { // u
		8, 8,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile1f[66] = { // v
		8, 8,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile20[66] = { // w
		8, 8,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x30, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile21[66] = { // x
		8, 8,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x30, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x30, 0x30, 0x40, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile22[66] = { // y
		8, 8,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x40, 0x40, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile23[66] = { // z
		8, 8,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile28[66] = { // -
		8, 8,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile29[66] = { // *
		8, 8,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x40, 0x40, 0x40, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x40, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x40, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x30, 0x40, 0x40, 0x40, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	uint8_t tile2b[66] = { // !
		8, 8,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x30, 0x30, 0x30, 0x30, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x30, 0x30, 0x40, 0x40, 0x40,
	};
	
	uint8_t tile27[66] = {
		8, 8,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
		0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	};
	
	uint8_t tile24[66] = {
		8, 8,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
	};
	uint8_t tile25[66] = {
		8,8,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
	};
	uint8_t tile26[66] = {
		8,8,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
	};
	uint8_t tile30[66] = {
		8,8,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0x1a,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0x1a, 0x1a,
		0x22, 0x22, 0x22, 0x22, 0x0f, 0x1a, 0x1a, 0x1a,
		0x22, 0x22, 0x22, 0x0f, 0x1a, 0x1a, 0x1a, 0x1a,
		0x22, 0x22, 0x0f, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
		0x22, 0x0f, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
		0x0f, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
	};
	uint8_t tile31[66] = {
		8,8,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0x0f, 0x0f,
		0x22, 0x22, 0x0f, 0x0f, 0x0f, 0x1a, 0x1a, 0x1a,
		0x0f, 0x0f, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
	};
	uint8_t tile32[66] = {
		8,8,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x0f, 0x0f, 0x0f, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x1a, 0x1a, 0x1a, 0x0f, 0x0f, 0x0f, 0x22, 0x22,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x0f, 0x0f,
	};
	uint8_t tile33[66] = {
		8,8,
		0x0f, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x1a, 0x0f, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x1a, 0x1a, 0x0f, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x1a, 0x1a, 0x1a, 0x0f, 0x22, 0x22, 0x22, 0x22,
		0x1a, 0x1a, 0x1a, 0x1a, 0x0f, 0x22, 0x22, 0x22,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x0f, 0x22, 0x22,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x0f, 0x22,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x0f,
	};
	uint8_t tile34[66] = {
		8,8,
		0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x0f, 0x1a, 0x1a,
		0x1a, 0x1a, 0x1a, 0x1a, 0x0f, 0x0f, 0x0f, 0x1a,
		0x1a, 0x1a, 0x1a, 0x1a, 0x0f, 0x0f, 0x0f, 0x1a,
		0x1a, 0x1a, 0x1a, 0x1a, 0x0f, 0x0f, 0x0f, 0x1a,
		0x1a, 0x0f, 0x0f, 0x1a, 0x0f, 0x0f, 0x0f, 0x1a,
		0x1a, 0x0f, 0x0f, 0x1a, 0x1a, 0x0f, 0x1a, 0x1a,
		0x1a, 0x0f, 0x0f, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
		0x1a, 0x0f, 0x0f, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
	};
	uint8_t tile35[66] = {
		8,8,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0x0f, 0x0f,
		0x22, 0x22, 0x22, 0x22, 0x0f, 0x29, 0x29, 0x29,
		0x22, 0x22, 0x22, 0x0f, 0x29, 0x29, 0x29, 0x29,
		0x22, 0x22, 0x22, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x22, 0x0f, 0x0f, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x0f, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x0f, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x22, 0x0f, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
	};
	uint8_t tile36[66] = {
		8,8,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0x0f,
		0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0x29, 0x29,
		0x22, 0x22, 0x22, 0x0f, 0x0f, 0x29, 0x29, 0x29,
		0x22, 0x22, 0x0f, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x22, 0x22, 0x0f, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x22, 0x22, 0x0f, 0x29, 0x29, 0x29, 0x29, 0x29,
		0x22, 0x0f, 0x29, 0x29, 0x29, 0x1a, 0x1a, 0x29,
		0x0f, 0x29, 0x29, 0x29, 0x1a, 0x29, 0x29, 0x29,
	};
	uint8_t tile37[66] = {
		8,8,
		0x0f, 0x0f, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x29, 0x29, 0x0f, 0x22, 0x22, 0x22, 0x22, 0x22,
		0x29, 0x29, 0x29, 0x0f, 0x22, 0x22, 0x22, 0x22,
		0x29, 0x29, 0x29, 0x0f, 0x22, 0x0f, 0x22, 0x22,
		0x29, 0x29, 0x29, 0x29, 0x0f, 0x29, 0x0f, 0x22,
		0x29, 0x1a, 0x29, 0x29, 0x29, 0x29, 0x29, 0x0f,
		0x29, 0x29, 0x1a, 0x29, 0x29, 0x29, 0x29, 0x0f,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x0f,
	};
	uint8_t tile38[66] = {
		8,8,
		0x0f, 0x22, 0x22, 0x0f, 0x22, 0x22, 0x22, 0x22,
		0x0f, 0x22, 0x0f, 0x22, 0x0f, 0x22, 0x22, 0x22,
		0x29, 0x0f, 0x29, 0x29, 0x0f, 0x22, 0x22, 0x22,
		0x29, 0x29, 0x29, 0x29, 0x0f, 0x22, 0x0f, 0x22,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x0f, 0x29, 0x0f,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x0f,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x0f,
		0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x0f, 0x22,
	};
	uint8_t tileb4[66] = {
		8, 8,
		0x17, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
	};
	uint8_t tileb5[66] = {
		8, 8,
		0x36, 0x0f, 0x17, 0x36, 0x36, 0x36, 0x36, 0x17,
		0x17, 0x0f, 0x36, 0x17, 0x17, 0x17, 0x17, 0x0f,
		0x17, 0x0f, 0x36, 0x17, 0x17, 0x17, 0x17, 0x0f,
		0x17, 0x0f, 0x36, 0x17, 0x17, 0x17, 0x17, 0x0f,
		0x17, 0x0f, 0x36, 0x0f, 0x17, 0x17, 0x17, 0x0f,
		0x17, 0x0f, 0x17, 0x0f, 0x0f, 0x0f, 0x0f, 0x17,
		0x17, 0x0f, 0x36, 0x36, 0x36, 0x36, 0x36, 0x0f,
		0x17, 0x0f, 0x36, 0x17, 0x17, 0x17, 0x17, 0x0f,
	};
	uint8_t tileb6[66] = {
		8, 8,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
		0x0f, 0x0f, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
		0x36, 0x36, 0x0f, 0x0f, 0x17, 0x17, 0x17, 0x17,
		0x36, 0x17, 0x36, 0x36, 0x0f, 0x0f, 0x0f, 0x0f,
		0x36, 0x17, 0x17, 0x17, 0x36, 0x36, 0x36, 0x0f,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x0f,
		0x17, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x17,
	};
	uint8_t tileb7[66] = {
		8, 8,
		0x17, 0x0f, 0x36, 0x17, 0x17, 0x17, 0x17, 0x0f,
		0x17, 0x0f, 0x36, 0x17, 0x17, 0x17, 0x17, 0x0f,
		0x0f, 0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x0f,
		0x0f, 0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x0f,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x0f,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x0f,
		0x36, 0x17, 0x17, 0x17, 0x17, 0x17, 0x0f, 0x0f,
		0x36, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x17,
	};
	
	uint16_t i;
	
	// DONT'T ASSIGN ANYTHING TO 0x00 OR NULL WILL SHOW UP AS THAT TILE
	for(i = 0; i < 66; i++) {testTiles[0x01][i] = tile00[i];} // 0
	for(i = 0; i < 66; i++) {testTiles[0x02][i] = tile01[i];} // 1
	for(i = 0; i < 66; i++) {testTiles[0x03][i] = tile02[i];} // 2
	for(i = 0; i < 66; i++) {testTiles[0x04][i] = tile03[i];} // 3
	for(i = 0; i < 66; i++) {testTiles[0x05][i] = tile04[i];} // 4
	for(i = 0; i < 66; i++) {testTiles[0x06][i] = tile05[i];} // 5
	for(i = 0; i < 66; i++) {testTiles[0x07][i] = tile06[i];} // 6
	for(i = 0; i < 66; i++) {testTiles[0x08][i] = tile07[i];} // 7
	for(i = 0; i < 66; i++) {testTiles[0x09][i] = tile08[i];} // 8
	for(i = 0; i < 66; i++) {testTiles[0x0a][i] = tile09[i];} // 9
	for(i = 0; i < 66; i++) {testTiles[0x0b][i] = tile0a[i];} // a
	for(i = 0; i < 66; i++) {testTiles[0x0c][i] = tile0b[i];} // b
	for(i = 0; i < 66; i++) {testTiles[0x0d][i] = tile0c[i];} // c
	for(i = 0; i < 66; i++) {testTiles[0x0e][i] = tile0d[i];} // d
	for(i = 0; i < 66; i++) {testTiles[0x0f][i] = tile0e[i];} // e
	for(i = 0; i < 66; i++) {testTiles[0x10][i] = tile0f[i];} // f
	for(i = 0; i < 66; i++) {testTiles[0x11][i] = tile10[i];} // g
	for(i = 0; i < 66; i++) {testTiles[0x12][i] = tile11[i];} // h
	for(i = 0; i < 66; i++) {testTiles[0x13][i] = tile12[i];} // i
	for(i = 0; i < 66; i++) {testTiles[0x14][i] = tile13[i];} // j
	for(i = 0; i < 66; i++) {testTiles[0x15][i] = tile14[i];} // k
	for(i = 0; i < 66; i++) {testTiles[0x16][i] = tile15[i];} // l
	for(i = 0; i < 66; i++) {testTiles[0x17][i] = tile16[i];} // m
	for(i = 0; i < 66; i++) {testTiles[0x18][i] = tile17[i];} // n
	for(i = 0; i < 66; i++) {testTiles[0x19][i] = tile18[i];} // o
	for(i = 0; i < 66; i++) {testTiles[0x1a][i] = tile19[i];} // p
	for(i = 0; i < 66; i++) {testTiles[0x1b][i] = tile1a[i];} // q
	for(i = 0; i < 66; i++) {testTiles[0x1c][i] = tile1b[i];} // r
	for(i = 0; i < 66; i++) {testTiles[0x1d][i] = tile1c[i];} // s
	for(i = 0; i < 66; i++) {testTiles[0x1e][i] = tile1d[i];} // t
	for(i = 0; i < 66; i++) {testTiles[0x1f][i] = tile1e[i];} // u
	for(i = 0; i < 66; i++) {testTiles[0x20][i] = tile1f[i];} // v
	for(i = 0; i < 66; i++) {testTiles[0x21][i] = tile20[i];} // w
	for(i = 0; i < 66; i++) {testTiles[0x22][i] = tile21[i];} // x
	for(i = 0; i < 66; i++) {testTiles[0x23][i] = tile22[i];} // y
	for(i = 0; i < 66; i++) {testTiles[0x24][i] = tile23[i];} // z
	for(i = 0; i < 66; i++) {testTiles[0x29][i] = tile28[i];} // -
	for(i = 0; i < 66; i++) {testTiles[0x2a][i] = tile29[i];} // *
	for(i = 0; i < 66; i++) {testTiles[0x2c][i] = tile2b[i];} // !
	
	for(i = 0; i < 66; i++) {testTiles[0x27][i] = tile27[i];}
	
	for(i = 0; i < 66; i++) {testTiles[0x24][i] = tile24[i];}
	for(i = 0; i < 66; i++) {testTiles[0x25][i] = tile25[i];}
	for(i = 0; i < 66; i++) {testTiles[0x26][i] = tile26[i];}
	for(i = 0; i < 66; i++) {testTiles[0x30][i] = tile30[i];}
	for(i = 0; i < 66; i++) {testTiles[0x31][i] = tile31[i];}
	for(i = 0; i < 66; i++) {testTiles[0x32][i] = tile32[i];}
	for(i = 0; i < 66; i++) {testTiles[0x33][i] = tile33[i];}
	for(i = 0; i < 66; i++) {testTiles[0x34][i] = tile34[i];}
	for(i = 0; i < 66; i++) {testTiles[0x35][i] = tile35[i];}
	for(i = 0; i < 66; i++) {testTiles[0x36][i] = tile36[i];}
	for(i = 0; i < 66; i++) {testTiles[0x37][i] = tile37[i];}
	for(i = 0; i < 66; i++) {testTiles[0x38][i] = tile38[i];}
	for(i = 0; i < 66; i++) {testTiles[0xb4][i] = tileb4[i];}
	for(i = 0; i < 66; i++) {testTiles[0xb5][i] = tileb5[i];}
	for(i = 0; i < 66; i++) {testTiles[0xb6][i] = tileb6[i];}
	for(i = 0; i < 66; i++) {testTiles[0xb7][i] = tileb7[i];}
	
	for(i = 0; i < 256; i++) {tiles[i] = testTiles[i];}
	
	//tilemap.tiles = (gfx_sprite_t**)tiles; // must be tiles, not bg
}
/*void drawTiles() {
	/*uint8_t a;
	uint16_t b = floor(x / 8);
	uint16_t i;*/
	
	/*for(a = 0; a < 30; a++) {
		for(i = 0; i < 41; i++) {
			rendertable[i + a * 41] = level[i + b + a * width];
		}
	}*/
	
	//tilemap.x_loc = 8 % x;
	
	/*gfx_Tilemap(&tilemap, x, 0);
}*/