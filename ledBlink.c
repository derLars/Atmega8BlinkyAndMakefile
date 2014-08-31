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
	DDRC = 0xff;
	PORTC = 0x00;
}

void setPORT(void)
{
	PORTC = 0xff;
}

void clearPORT(void)
{
	PORTC = 0x00;
}