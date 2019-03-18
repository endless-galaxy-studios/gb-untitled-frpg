#include <gb/gb.h>
#include <stdio.h>
#include "assets\sprites.c"
#include "gameCharacter.h"

gameCharacter character;
UBYTE spriteSize = 8;

void movegamecharacter(gameCharacter* character, UINT8 x, UINT8 y){
    move_sprite(character->spriteID[0], x, y);
    move_sprite(character->spriteID[1], x + spriteSize, y);
    move_sprite(character->spriteID[2], x, y + spriteSize);
    move_sprite(character->spriteID[3], x + spriteSize, y + spriteSize);
}

void setupCharacter(){
    /*  set_sprite_data(x, y, z)
        Load sprite into memory
        x - Starting tile index
        y - Amount of tiles to load
        z - Array to load tiles from
    */
    set_sprite_data(0, 4, characterSprite);

    character.x = 24;
    character.y = 24;
    character.width = 16;
    character.height = 16;

    /*  set_sprite_tile(x, y)
        Creates sprite in memory
        x - Create the sprite at the given index
        y - Set 'x' to the 'y' sprite in sprite data 
    */
    set_sprite_tile(0, 0);
    set_sprite_tile(1, 2);
    set_sprite_tile(2, 1);
    set_sprite_tile(3, 3);
    
    // load tiles into character struct
    character.spriteID[0] = 0;
    character.spriteID[1] = 1;
    character.spriteID[2] = 2;
    character.spriteID[3] = 3;

    movegamecharacter(&character, character.x, character.y);
}

void main(){
    initialization();
    setupCharacter();   

    /*  move_sprite(x, y, z)
        Moves the sprite
        x - sprite index
        y - x-coordinate
        z - y-coordinate
    */

    // Flag to show the sprites on-screen
    SHOW_SPRITES;

    while(1){
        
    }
}

void initialization(){
    DISPLAY_ON;		    // Turn on the display
	NR52_REG = 0x8F;	// Turn on the sound
	NR51_REG = 0x11;	// Enable the sound channels
	NR50_REG = 0x77;	// Increase the volume to its max
}