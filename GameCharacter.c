#include <gb/gb.h>

typedef struct GameCharacter {
	UBYTE spritids[4];
	UINT8 x;
	UINT8 y;
	UINT8 width;
	UINT8 height;
} GameCharacter;