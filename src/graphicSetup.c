#include <gb/gb.h>
#include "src\structures\gameObject.h"
#include "assets\graphics\sprites_c\playerSprite.c"
#include "assets\graphics\sprites_c\PokeCenter.h"
#include "src\controller.c"

void setupPlayerSprite(){
    /*  set_sprite_data(x, y, z)
        Load sprite into memory
        x - Starting tile index
        y - Amount of tiles to load
        z - Array to load tiles from
    */
    set_sprite_data(0, 4, playerSprite_up1);
    set_sprite_data(4, 2, playerSprite_up2);
    set_sprite_data(6, 4, playerSprite_down1);
    set_sprite_data(10, 2, playerSprite_down2);
    set_sprite_data(12, 4, playerSprite_left1);
    set_sprite_data(16, 4, playerSprite_left2);
    set_sprite_data(20, 4, playerSprite_right1);
    set_sprite_data(24, 4, playerSprite_right2);

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

void setupBackground(){
    set_bkg_data(0, PokeCenter_tile_count, PokeCenter_tile_data);
    set_bkg_tiles(0, 0, PokeCenter_tile_map_width, PokeCenter_tile_map_height, PokeCenter_map_data);
    scroll_bkg(15, 25);
}