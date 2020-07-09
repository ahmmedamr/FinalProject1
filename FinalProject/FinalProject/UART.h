


#ifndef UART_H_
#define UART_H_
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

void UART_Init();
unsigned char UART_Rx();
void UART_Tx(char data);



#endif /* UART_H_ */