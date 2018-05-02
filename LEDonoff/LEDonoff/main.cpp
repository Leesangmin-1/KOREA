/*
 * LEDonoff.cpp
 *
 * Created: 2018-05-02 오후 3:39:40
 * Author : stc_178
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRD = 0xff;
	PORTD = 0xff;
	int i;
    while (1) 
    {
		for(int i=0;i<7;i++)
		{
			PORTD = ~(1<<i);
			_delay_ms(300);
		}
		for(int i=0;i<7;i++)
		{
			PORTD = ~(0x80>>i);
			_delay_ms(300);
		}
    }
}

