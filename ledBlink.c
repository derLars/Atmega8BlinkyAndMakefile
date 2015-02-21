//##################################################
//#Sunday, 31.August.2014 made by Lars C. Schwensen#
//##################################################

//#################################################################
//#This is a part of the example blinky project                   #
//#DEVICE: atmega8                                                #
//#DEVELOPMENT BOARD: OLIMEX P-28                                 #
//#PROGRAMMER: USBPROG (avrispmkII clone)                         #
//#################################################################

//ledBlink.c

#include "ledBlink.h"
#include <avr/io.h>

void initGPIO(void)
{
	DDRC |= (1<<PC5);
	DDRB |= (1<<PB0) | (1<<PB1);
	PORTC = 0x00;
}

void setControlLED(void)
{
	PORTC |= (1<<PC5);
}
void revokeControlLED(void)
{
	PORTC &= ~(1<<PC5);
}

void setPin(uint8_t pin)
{	
	PORTB = (1<<pin);
}


void wait_us(uint8_t us)
{
	uint8_t i;
	
	for(i=0;i<us;i++)
	{
		
	}	
}