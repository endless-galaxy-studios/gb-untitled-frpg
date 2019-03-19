#include <gb/gb.h>

void moveGameCharacter(gameObject* character, UINT8 x, UINT8 y){
    move_sprite(character->spriteID[0], x, y);
    move_sprite(character->spriteID[1], x + 8, y);
    move_sprite(character->spriteID[2], x, y + 8);
    move_sprite(character->spriteID[3], x + 8, y + 8);
}