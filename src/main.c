#include <gb/gb.h>
#include "src\graphicSetup.c"

UINT8 currentSpriteIndex = 1;
gameObject currentSprite;

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

/*  @TODO Offload to controller.c
    checkInput() returns UINT8 so that we can set a default sprite based on direction.
*/
UINT8 checkInput(){
    UINT8 direction = 0;

    switch(joypad()){
        case J_UP:
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
            moveGameObject(&currentSprite, currentSprite.x, currentSprite.y);
            break;

        case J_DOWN:
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
            moveGameObject(&currentSprite, currentSprite.x, currentSprite.y);
            break;

        case J_LEFT:
            if(currentSpriteIndex == 0){
                currentSpriteIndex = 1;
                
                set_sprite_tile(0, 12);
                set_sprite_tile(1, 14);
                set_sprite_tile(2, 13);
                set_sprite_tile(3, 15);
            } else {
                currentSpriteIndex = 0;

                set_sprite_tile(0, 16);
                set_sprite_tile(1, 18);
                set_sprite_tile(2, 17);
                set_sprite_tile(3, 19);
            }

            currentSprite.x -= 2;
            moveGameObject(&currentSprite, currentSprite.x, currentSprite.y);

            direction = 1;
            break;

        case J_RIGHT:
            if(currentSpriteIndex == 0){
                currentSpriteIndex = 1;
                
                set_sprite_tile(0, 20);
                set_sprite_tile(1, 22);
                set_sprite_tile(2, 21);
                set_sprite_tile(3, 23);
            } else {
                currentSpriteIndex = 0;

                set_sprite_tile(0, 24);
                set_sprite_tile(1, 26);
                set_sprite_tile(2, 25);
                set_sprite_tile(3, 27);
            }

            currentSprite.x += 2;
            moveGameObject(&currentSprite, currentSprite.x, currentSprite.y);

            direction = 2;
            break;
    }
    performDelay(5);

    return direction;
}

void main(){

    initialization();
    setupPlayerSprite();

    currentSprite.spriteID[0] = 0;
    currentSprite.spriteID[1] = 1;
    currentSprite.spriteID[2] = 2;
    currentSprite.spriteID[3] = 3;

    currentSprite.x = 24;
    currentSprite.y = 24;
    moveGameObject(&currentSprite, currentSprite.x, currentSprite.y);  

    // Flag to show the sprites on-screen
    HIDE_WIN;
    SHOW_SPRITES;
    SHOW_BKG;

    while(1){
        UINT8 direction = checkInput();

        if(direction == 1){
            set_sprite_tile(0, 16);
            set_sprite_tile(1, 18);
            set_sprite_tile(2, 17);
            set_sprite_tile(3, 19);
        } else if(direction == 2){
            set_sprite_tile(0, 20);
            set_sprite_tile(1, 22);
            set_sprite_tile(2, 21);
            set_sprite_tile(3, 23);
        }
        
    }
}

