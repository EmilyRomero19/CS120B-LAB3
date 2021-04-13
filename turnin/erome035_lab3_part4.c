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
    DDRA = 0x00; PORTA = 0xFF; //input
    DDRB = 0xFF; PORTB = 0x00; //output
    DDRC = 0xFF; PORTC = 0x00; //output
  
    unsigned char tmpA = 0x00; 
    unsigned char tmpB = 0x00;
    unsigned char tmpC = 0x00;

    while (1) {
	    tmpA = PINA; //READ INPUT
      
      //upper and lower nibble 
	    tmpB = (tempA >> 4) & 0x0F;
	    tmpC = (tempA << 4) & 0xF0;
	    
      //set upper and lower nibble of PINA to PORTB and PORTC
	    PORTB = tmpB;
    	PORTC = tmpC;
    }
    return 1;
}
