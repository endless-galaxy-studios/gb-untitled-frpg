#include <gb/gb.h>
#include "src\structures\gameObject.h"
#include "assets\graphics\sprites_c\sprites.c"
#include "src\controller.c"

// GLOBAL VARIABLES
gameObject character_up1;
gameObject character_up2;
gameObject character_down1;
gameObject character_down2;
gameObject character_left1;
gameObject character_left2;
gameObject character_right1;
gameObject character_right2;

void setupCharacter(){
    /*  set_sprite_data(x, y, z)
        Load sprite into memory
        x - Starting tile index
        y - Amount of tiles to load
        z - Array to load tiles from
    */
    set_sprite_data(0, 4, characterSprite_up1);
    set_sprite_data(4, 4, characterSprite_up2);
    set_sprite_data(8, 4, characterSprite_down1);
    set_sprite_data(12, 4, characterSprite_down2);
    set_sprite_data(16, 4, characterSprite_left1);
    set_sprite_data(20, 4, characterSprite_left2);
    set_sprite_data(24, 4, characterSprite_right1);
    set_sprite_data(28, 4, characterSprite_right2);

    // Character Parameters
    character_up1.width = 16;
    character_up1.height = 16;
    
    character_up2.width = 16;
    character_up2.height = 16;

    character_down1.width = 16;
    character_down1.height = 16;
    
    character_down2.width = 16;
    character_down2.height = 16;
    
    character_left1.width = 16;
    character_left1.height = 16;

    character_left2.width = 16;
    character_left2.height = 16;

    character_right1.width = 16;
    character_right1.height = 16;

    character_right2.width = 16;
    character_right2.height = 16;

    /*  set_sprite_tile(x, y)
        Creates sprite in memory
        x - Create the sprite at the given index
        y - Set 'x' to the 'y' sprite in sprite data 
    */
    set_sprite_tile(0, 0);
    set_sprite_tile(1, 2);
    set_sprite_tile(2, 1);
    set_sprite_tile(3, 3);
    
    set_sprite_tile(4, 4);
    set_sprite_tile(5, 6);
    set_sprite_tile(6, 5);
    set_sprite_tile(7, 7);
    
    set_sprite_tile(8, 8);
    set_sprite_tile(9, 10);
    set_sprite_tile(10, 9);
    set_sprite_tile(11, 11);
    
    set_sprite_tile(12, 12);
    set_sprite_tile(13, 14);
    set_sprite_tile(14, 13);
    set_sprite_tile(15, 15);
    
    set_sprite_tile(16, 16);
    set_sprite_tile(17, 18);
    set_sprite_tile(18, 17);
    set_sprite_tile(19, 19);
    
    set_sprite_tile(20, 20);
    set_sprite_tile(21, 22);
    set_sprite_tile(22, 21);
    set_sprite_tile(23, 23);
    
    set_sprite_tile(24, 24);
    set_sprite_tile(25, 26);
    set_sprite_tile(26, 25);
    set_sprite_tile(27, 27);
    
    set_sprite_tile(28, 28);
    set_sprite_tile(29, 30);
    set_sprite_tile(30, 29);
    set_sprite_tile(31, 31);
    
    // load tiles into gameObject struct
    character_up1.spriteID[0] = 0;
    character_up1.spriteID[1] = 1;
    character_up1.spriteID[2] = 2;
    character_up1.spriteID[3] = 3;
    
    character_up2.spriteID[0] = 4;
    character_up2.spriteID[1] = 5;
    character_up2.spriteID[2] = 6;
    character_up2.spriteID[3] = 7;

    character_down1.spriteID[0] = 8;
    character_down1.spriteID[1] = 9;
    character_down1.spriteID[2] = 10;
    character_down1.spriteID[3] = 11;
    
    character_down2.spriteID[0] = 12;
    character_down2.spriteID[1] = 13;
    character_down2.spriteID[2] = 14;
    character_down2.spriteID[3] = 15;
    
    character_left1.spriteID[0] = 16;
    character_left1.spriteID[1] = 17;
    character_left1.spriteID[2] = 18;
    character_left1.spriteID[3] = 19;
    
    character_left2.spriteID[0] = 20;
    character_left2.spriteID[1] = 21;
    character_left2.spriteID[2] = 22;
    character_left2.spriteID[3] = 23;
    
    character_right1.spriteID[0] = 24;
    character_right1.spriteID[1] = 25;
    character_right1.spriteID[2] = 26;
    character_right1.spriteID[3] = 27;
    
    character_right2.spriteID[0] = 28;
    character_right2.spriteID[1] = 29;
    character_right2.spriteID[2] = 30;
    character_right2.spriteID[3] = 31;

    // Move the starting sprite
    character_down1.x = 24;
    character_down1.y = 24;
    moveGameCharacter(&character_down1, character_down1.x, character_down1.y);
}