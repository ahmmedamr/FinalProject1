#include "LCD.h"

void LCD_Command(uint8 cmd)
{
	CommandPort &=~ (1<<RS);
	CommandPort &=~ (1<<RW);
	DataPort = (DataPort & 0X0F) | (cmd & 0xF0);
	_delay_ms(20);
	CommandPort |= (1<<EN);
	_delay_ms(20);
	CommandPort &=~ (1<<EN);
	_delay_ms(20);
	DataPort = (DataPort & 0X0F) | (cmd<<4);
	CommandPort |= (1<<EN);
	_delay_ms(20);
	CommandPort &=~ (1<<EN);
	_delay_ms(20);
	
}
void LCD_Char(uint8 data)
{
	
	CommandPort |= (1<<RS);
	CommandPort &=~ (1<<RW);
	DataPort = (DataPort & 0X0F) | (data & 0xF0);
	_delay_ms(20);
	CommandPort |= (1<<EN);
	_delay_ms(20);
	CommandPort &=~ (1<<EN);
	_delay_ms(20);
	DataPort = (DataPort & 0X0F) | (data<<4);
	CommandPort |= (1<<EN);
	_delay_ms(20);
	CommandPort &=~ (1<<EN);
	_delay_ms(20);
	
	
	
}
void LCD_Init(void)
{
	DataDir |= (0xF0);
	CommandDir |= (1<<1) | (1<<2) | (1<<0);
	CommandPort &=~ (1<<RW);
	_delay_us(20);
	LCD_Command(0x33);
	LCD_Command(0x32);
	LCD_Command(0x06);
	LCD_Command(0x0c);
	LCD_Command(0x28);
	LCD_Command(0x01);
	
	
	
}

void LCD_String(char *str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		LCD_Char(str[i]);
	}
}
void LCD_Reset(){
	LCD_Command(0x01);
	_delay_ms(1);
}
