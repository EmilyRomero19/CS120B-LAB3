/*	Author: erome035
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    
    /* Insert DDR and PORT initializations */
    DDRB = 0x01; PORTB = 0x00; //input
    DDRD = 0x00; PORTD = 0xFF; //input 
    
    unsigned char tmpB = 0x00;
    unsigned char tmpD = 0x00;
    unsigned char result = 0x00;
    unsigned char weight = 0x00; // weight value

    while (1) {
    
    //READ INPUTS
	tmpD = PIND; 
	tmpB = PINB;  
	result = 0x00;//unable to read 
        
	weight = ((weight + tmpD) << 1) + (PORTB & 0x01);
        
	if (weight >= 70) { // if greater and or equal 70 lbs
		
        	result = 0x02; 
        
	}
	else if (weight > 0x05 && weight < 0x46) { //if greater than 5 but less than 70
        
		result = 0x04;
        
	}
	else { // if neither 
        
		result = 0x00; 
        
	}
		PORTB = result;
	
    }
    return 1;
}
