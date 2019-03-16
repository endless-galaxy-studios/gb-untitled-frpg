#include <gb/gb.h>
#include <stdio.h>

void main(){
    initialization();

    while(1){
        
    }
}

void initialization(){
    DISPLAY_ON;		    // Turn on the display
	NR52_REG = 0x8F;	// Turn on the sound
	NR51_REG = 0x11;	// Enable the sound channels
	NR50_REG = 0x77;	// Increase the volume to its max
}