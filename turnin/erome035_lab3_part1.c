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

    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;

    unsigned char tmpA = 0x00;
    unsigned char tmpB = 0x00;
    unsigned char tmpC = 0x00; //unable to read output pins

    /* Insert your solution below */
    while (1) {

	//read inputs
	tmpA = PINA;
        tmpB = PINB;
       
	//tempC is our count holder
        
        //create a bunch of if statements and increment the output
        
	if ((tmpA & 0x01) == 0x01) { // 0000 000A1
		tmpC = tmpC + 1;
	}
	if ((tmpA & 0x02) == 0x02) { // 0000 00A20
		tmpC = tmpC + 1;
	}
	if ((tmpA & 0x04) == 0x04) { // 0000 0A300
                tmpC = tmpC + 1;
        }
        if ((tmpA & 0x08) == 0x08) {
                tmpC = tmpC + 1;
        }
	if ((tmpA & 0x10) == 0x10) {
                tmpC = tmpC + 1;
        }
        if ((tmpA & 0x20) == 0x20) {
                tmpC = tmpC + 1;
        }
	if ((tmpA & 0x40) == 0x40) {
                tmpC = tmpC + 1;
        }
        if ((tmpA & 0x80) == 0x80) {
                tmpC = tmpC + 1;
        }
	if ((tmpB & 0x01) == 0x01) {
                tmpC = tmpC + 1;
        }
        if ((tmpB & 0x02) == 0x02) {
                tmpC = tmpC + 1;
        }
        if ((tmpB & 0x04) == 0x04) {
                tmpC = tmpC + 1;
        }
        if ((tmpB & 0x08) == 0x08) {
                tmpC = tmpC + 1;
        }
        if ((tmpB & 0x10) == 0x10) {
                tmpC = tmpC + 1;
        }
        if ((tmpB & 0x20) == 0x20) {
                tmpC = tmpC + 1;
        }
        if ((tmpB & 0x40) == 0x40) {
                tmpC = tmpC + 1;
        }
        if ((tmpB & 0x80) == 0x80) {
                tmpC = tmpC + 1;
        }	

	PORTC = tmpC;
    }
    return 1;
}
