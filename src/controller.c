#include <gb/gb.h>
#include <stdio.h>
#include "src/structures/gameObject.h"

UINT8 topLeftX, topLeftY, 
    topRightX, topRightY,
    bottomLeftX, bottomLeftY,
    bottomRightX, bottomRightY;

UINT16 topLeftXIndex, topLeftYIndex, 
    topRightXIndex, topRightYIndex,
    bottomLeftXIndex, bottomLeftYIndex,
    bottomRightXIndex, bottomRightYIndex,
    topLeftTileIndex, topRightTileIndex,
    bottomLeftTileIndex, bottomRightTileIndex;

    
int i;
unsigned char tileIndex;

BOOLEAN debug = 0;
    
const UINT8 X_OFFSET = 8;
const UINT8 Y_OFFSET = 16;
const UINT8 TILE_SIZE = 8;

void moveGameObject(struct gameObject* object, UINT8 x, UINT8 y){
    topLeftX = x;
    topLeftY = y;
    
    bottomLeftX = x + 8;
    bottomLeftY = y;

    topRightX = x;
    topRightY = y + 8;

    bottomRightX = x + 8;
    bottomRightY = y + 8;

    move_sprite(object->spriteID[0], topLeftX, topLeftY);
    move_sprite(object->spriteID[1], bottomLeftX, bottomLeftY);
    move_sprite(object->spriteID[2], topRightX, topRightY);
    move_sprite(object->spriteID[3], bottomRightX, bottomRightY);
}

//@TODO
/*UINT16 findTileIndex(UINT8 spriteIndex){
    switch(spriteIndex){
        case '0':
            
    }
}*/

BOOLEAN canPlayerMove(UINT8 playerX, UINT8 playerY){
    topLeftXIndex = (topLeftX - X_OFFSET) / TILE_SIZE;
    topLeftYIndex = (topLeftY - Y_OFFSET) / TILE_SIZE;
    topLeftTileIndex = 20 * topLeftYIndex + topLeftXIndex;

    tileIndex = PokeMart_map_data[topLeftTileIndex];
    //test = PokeMart_map_data[topLeftTileIndex] == 0x2D;

    if(debug){
        printf("%u %u 0x%x\n",(UINT16)(topLeftX),(UINT16)(topLeftY), tileIndex);
        printf("%u %u %u\n",(UINT16)topLeftXIndex,(UINT16)topLeftYIndex,(UINT16)topLeftTileIndex); 
    }

    return 0;
}