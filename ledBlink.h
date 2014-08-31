//##################################################
//#Sunday, 31.August.2014 made by Lars C. Schwensen#
//##################################################

//#################################################################
//#This is a part of the example blinky project                   #
//#DEVICE: atmega8                                                #
//#DEVELOPMENT BOARD: OLIMEX P-28                                 #
//#PROGRAMMER: USBPROG (avrispmkII clone)                         #
//#################################################################

//ledBlink.h

#ifndef F_CPU
#define F_CPU 1000000UL
#endif

/******
public functions
******/
void initGPIO(void);
void setPORT(void);
void clearPORT(void);