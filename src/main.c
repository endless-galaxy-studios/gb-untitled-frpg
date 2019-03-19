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
    initialization();
    setupCharacter();  

    // Flag to show the sprites on-screen
    SHOW_SPRITES;

    while(1){
        /*  @BUG I'm not sure why the below code works? Realistically, y + 2 
            should make the sprite move UP, not DOWN, becuase math grid? LMAO.
        */
        if(joypad() & J_UP){
            character_down1.y -= 2;
            moveGameCharacter(&character_down1, character_down1.x, character_down1.y);
        } else if(joypad() & J_DOWN){
            character_down1.y += 2;
            moveGameCharacter(&character_down1, character_down1.x, character_down1.y);
        } 
        
        if(joypad() & J_LEFT){
            character_down1.x -= 2;
            moveGameCharacter(&character_down1, character_down1.x, character_down1.y);
        } else if(joypad() & J_RIGHT){
            character_down1.x += 2;
            moveGameCharacter(&character_down1, character_down1.x, character_down1.y);
        } 
        performDelay(5);
    }
}