
#ifndef LCD_H_
#define LCD_H_

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define DataDir DDRC
#define DataPort PORTC

#define CommandDir DDRD
#define CommandPort PORTD

#define RS 1
#define RW 0
#define EN 2

#define uint8 unsigned char

void LCD_Init(void);
void LCD_Command(uint8 cmd);
void LCD_Char(uint8 data);
void LCD_String(char *str);
void LCD_Reset();






#endif