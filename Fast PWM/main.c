/*
 * akz111.c
 *
 * Created: 19-04-2026 23:17:21
 * Author : Akshay
 */ 
# define F_CPU 16000000UL
#include <avr/io.h>

   int main(void)

{   // Set PD6(OC0A) as OUTPUT
	DDRD |= (1<<PD6); 
	//Fast PWM mode (Timer0)
	TCCR0A |=  (1<<WGM00) | (1<<WGM01);
	TCCR0B &=~ (1<<WGM02);
	// Non inverting mode
	TCCR0A |= (1<<COM0A1);
	
	// Prescaler = 64
	TCCR0B |= (1<<CS01) | (1<<CS00);
	// Duty cycle
	OCR0A = 128; // 50% Brightness
	
    while (1) 
    {
		
    }
}

