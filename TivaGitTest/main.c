/*
 * main.c
 */
#include <stdint.h>

void init();

// Test Git Comment
int main(void) {
	uint16_t test;
	init();
	while(1){
		test++;
	}
}

void init(){
	// this function initializes things
	uint8_t butts,temp;
	for(butts=0;butts<255;butts++){
		temp = butts & 0x0f;
	}
}
