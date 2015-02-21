#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
	DDRB = 0xff;
	PORTB = 0x00;

	int i;
	while(1)
	{		
		for(i=0; i<16;i++)
		{
			PORTB = i;
			_delay_ms(1000);
		}		
	}
	
	return 0;
}	