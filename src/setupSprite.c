#include <gb/gb.h>
#include "src\structures\gameObject.h"
#include "assets\graphics\sprites_c\sprites.c"
#include "src\controller.c"

void setupCharacter(){
    /*  set_sprite_data(x, y, z)
        Load sprite into memory
        x - Starting tile index
        y - Amount of tiles to load
        z - Array to load tiles from
    */
    set_sprite_data(0, 4, characterSprite_up1);
    set_sprite_data(4, 2, characterSprite_up2);
    set_sprite_data(6, 4, characterSprite_down1);
    set_sprite_data(10, 2, characterSprite_down2);
    set_sprite_data(12, 4, characterSprite_left1);
    set_sprite_data(16, 4, characterSprite_left2);
    set_sprite_data(20, 4, characterSprite_right1);
    set_sprite_data(24, 4, characterSprite_right2);

    /*  set_sprite_tile(x, y)
        Creates sprite in memory
        x - Create the sprite at the given index
        y - Set 'x' to the 'y' sprite in sprite data 
    */
    set_sprite_tile(0, 0);
    set_sprite_tile(1, 2);
    set_sprite_tile(2, 1);
    set_sprite_tile(3, 3);
}