/*
 * akz111.c
 *
 * Created: 19-04-2026 23:17:21
 * Author : ADMIN
 */ 
# define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


 
   


int main(void)

{   DDRB |= (1<<PB1);
	PORTB |=(1<<PB1);
	TCCR1A |=  (1<<WGM00);//CONFIG MODE PHASE CORRECT
	TCCR1A &=~ (1<<WGM01);
	TCCR1B &=~ (1<<WGM02);
	
	TCCR1A |= (1<<COM0A1);
	
	TCCR1B &=~(1<<CS02);
	TCCR1B &=~ (1<<CS01);
	TCCR1B |=(1<<CS00);
	
	OCR1A = 26;
	
    /* Replace with your application code */
    while (1) 
    {
		
    }
}

