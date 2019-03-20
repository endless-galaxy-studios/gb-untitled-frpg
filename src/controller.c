#include <gb/gb.h>

void moveGameObject(gameObject* object, UINT8 x, UINT8 y){
    move_sprite(object->spriteID[0], x, y);
    move_sprite(object->spriteID[1], x + 8, y);
    move_sprite(object->spriteID[2], x, y + 8);
    move_sprite(object->spriteID[3], x + 8, y + 8);
}