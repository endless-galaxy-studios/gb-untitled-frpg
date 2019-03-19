#include <gb/gb.h>
#include <stdio.h>
#include "assets\sprites.c"
#include "structures\gameObject.h"

// Global Variables
gameObject character;
//gameObject brickWall;
UBYTE tileSize = 8;

void initialization(){
    DISPLAY_ON;		    // Turn on the display
	NR52_REG = 0x8F;	// Turn on the sound
	NR51_REG = 0x11;	// Enable the sound channels
	NR50_REG = 0x77;	// Increase the volume to its max
}

void performDelay(UINT8 numberOfLoops){
    UINT8 i;
    for(i = 0; i < numberOfLoops; i++) wait_vbl_done();
}

void moveGameCharacter(gameObject* character, UINT8 x, UINT8 y){
    move_sprite(character->spriteID[0], x, y);
    move_sprite(character->spriteID[1], x + tileSize, y);
    move_sprite(character->spriteID[2], x, y + tileSize);
    move_sprite(character->spriteID[3], x + tileSize, y + tileSize);
}

void setupCharacter(){
    /*  set_sprite_data(x, y, z)
        Load sprite into memory
        x - Starting tile index
        y - Amount of tiles to load
        z - Array to load tiles from
    */
    set_sprite_data(0, 4, characterSprite);
    //set_sprite_data(4, 4, brickSprite);

    // Character Parameters
    character.x = 24;
    character.y = 24;
    character.width = 16;
    character.height = 16;

    // Brick Wall Parameters
    /*brickWall.x = 48;
    brickWall.y = 48;
    brickWall.width = 16;
    brickWall.height = 16;*/

    /*  set_sprite_tile(x, y)
        Creates sprite in memory
        x - Create the sprite at the given index
        y - Set 'x' to the 'y' sprite in sprite data 
    */
    set_sprite_tile(0, 0);
    set_sprite_tile(1, 2);
    set_sprite_tile(2, 1);
    set_sprite_tile(3, 3);

    /*set_sprite_tile(4, 4);
    set_sprite_tile(5, 6);
    set_sprite_tile(6, 5);
    set_sprite_tile(7, 7);*/
    
    // load tiles into gameObject struct
    character.spriteID[0] = 0;
    character.spriteID[1] = 1;
    character.spriteID[2] = 2;
    character.spriteID[3] = 3;

    moveGameCharacter(&character, character.x, character.y);
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
        /*  @BUG I'm not sure why the below code works? Realistically, y + 2 
            should make the sprite move UP, not DOWN, becuase math grid? LMAO.
        */
        if(joypad() & J_UP){
            character.y -= 2;
            moveGameCharacter(&character, character.x, character.y);
        } else if(joypad() & J_DOWN){
            character.y += 2;
            moveGameCharacter(&character, character.x, character.y);
        } 
        
        if(joypad() & J_LEFT){
            character.x -= 2;
            moveGameCharacter(&character, character.x, character.y);
        } else if(joypad() & J_RIGHT){
            character.x += 2;
            moveGameCharacter(&character, character.x, character.y);
        } 
        performDelay(5);
    }
}