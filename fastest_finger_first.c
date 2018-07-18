/*
 * fastfinger.c
 *
 * Created: 2/12/2018 4:24:24 PM
 * Author : Anirudh
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include <stdio.h>
#include <util/delay.h>
#include <avr/interrupt.h>
int main(void)
{ 
	int  a=0x00;
	DDRA=0xff;
	DDRB=0x00;
	while(1)
	{
		if(PINB!=0x00)
			{	
				switch(PINB)
				{
					case 0x01:a=0x01;
					break;
					case 0x02:a=0x02;
					break;
					case 0x04:a=0x04;
					break;
					case 0x08:a=0x08;
					break;
				}
				PORTA=a;
				break;
		}
		
	}
	
}
	
