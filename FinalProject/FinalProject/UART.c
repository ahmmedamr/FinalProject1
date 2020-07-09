#include "UART.h"

void UART_Init()
{
	UCSRB |= (1<<RXCIE)| (1<<RXEN);
	UCSRC |= (1<<URSEL) | (1<<UCSZ1) | (1<<UCSZ0);
	UBRRL = 103; // Baud rate 9600
}

unsigned char UART_Rx(){
	while(((UCSRA>>RXC)&1)==0);
	return UDR;
}
void UART_Tx(char data){
	while(((UCSRA>>UDRE)&1)==0);
	UDR = data;
}