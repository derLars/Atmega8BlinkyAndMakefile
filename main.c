#include "ledBlink.h"
#include <util/delay.h>

int main(void)
{
	initGPIO();

	while(1)
	{
		setPORT();
		_delay_ms(500);
		clearPORT();
		_delay_ms(500);
	}
	
	return 0;
}	