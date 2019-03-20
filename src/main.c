#include <gb/gb.h>
#include "src\setupSprite.c"

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

void main(){
    UINT8 currentSpriteIndex = 1;
    gameObject currentSprite;

    initialization();
    setupCharacter();

    currentSprite.spriteID[0] = 0;
    currentSprite.spriteID[1] = 1;
    currentSprite.spriteID[2] = 2;
    currentSprite.spriteID[3] = 3;

    currentSprite.x = 24;
    currentSprite.y = 24;
    moveGameCharacter(&currentSprite, currentSprite.x, currentSprite.y);  

    // Flag to show the sprites on-screen
    SHOW_SPRITES;

    while(1){
        if(joypad() == J_UP){
            if(currentSpriteIndex == 0){
                currentSpriteIndex = 1;
                
                set_sprite_tile(0, 0);
                set_sprite_tile(1, 2);
                set_sprite_tile(2, 1);
                set_sprite_tile(3, 3);
            } else {
                currentSpriteIndex = 0;

                set_sprite_tile(0, 0);
                set_sprite_tile(1, 2);
                set_sprite_tile(2, 4);
                set_sprite_tile(3, 5);
            }

            currentSprite.y -= 2;
            moveGameCharacter(&currentSprite, currentSprite.x, currentSprite.y);
        } else if(joypad() == J_DOWN){
            if(currentSpriteIndex == 0){
                currentSpriteIndex = 1;
                
                set_sprite_tile(0, 6);
                set_sprite_tile(1, 8);
                set_sprite_tile(2, 7);
                set_sprite_tile(3, 9);
            } else {
                currentSpriteIndex = 0;

                set_sprite_tile(0, 6);
                set_sprite_tile(1, 8);
                set_sprite_tile(2, 10);
                set_sprite_tile(3, 11);
            }
            currentSprite.y += 2;
            moveGameCharacter(&currentSprite, currentSprite.x, currentSprite.y);
        } 
        
        /*if(joypad() & J_LEFT){
            character_down1.x -= 2;
            moveGameCharacter(&character_down1, character_down1.x, character_down1.y);
        } else if(joypad() & J_RIGHT){
            character_down1.x += 2;
            moveGameCharacter(&character_down1, character_down1.x, character_down1.y);
        }*/
        performDelay(5);
    }
}