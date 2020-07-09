
#include <avr/io.h>
#include <stdlib.h>
#include "Slave.h"
#include "Bit_Math.h"
#include "LCD.h"
#include "Stepper.h"
char result[5]={0};


int main(void)
{
	long int data=0;
	DDRB |= (1<<PB1) | (1<<PB2) | (1<<PB3);
	Slave_Init();
	LCD_Init();
	Stepper_Init();
	DDRC |= (1<<2);
	PORTB |= (1<<PB1);
	PORTB &=~ (1<<PB2);
	TCCR0 |= (1<<WGM01) | (1<<WGM00) | (1<<COM01) | (1<<CS00);
	while (1)
	{
		if(Slave_TxRx(0x06) == '1'){
			LCD_Reset();
			LCD_String("Motor ON");
			PORTC |= (1<<2);
			OCR0 = 255;
			data=(OCR0/256.0)*100;
			itoa(data,result,10);
			LCD_Command(0xC0);
			LCD_String("Duty = ");
			LCD_Command(0xC7);
			LCD_String(result);
			LCD_Command(0xCA);
			LCD_Char('%');
		}
		if (Slave_TxRx(0x06) == '2'){
			LCD_Reset();
			LCD_String("Motor OFF");
			PORTC &=~ (1<<2);
			OCR0 = 0;
			data=(OCR0/256.0)*100;
			itoa(data,result,10);
			LCD_Command(0xC0);
			LCD_String("Duty = ");
			LCD_Command(0xC7);
			LCD_String(result);
			LCD_Command(0xCA);
			LCD_Char('%');
		}
		
	}
}



