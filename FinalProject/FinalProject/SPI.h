
#ifndef SPI_H_
#define SPI_H_

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define ss 4
#define mosi 5
#define miso 6
#define clk 7

#define Slave_EN (PORTB &=~ (1<<ss))
#define Slave_Dis (PORTB |= (1<<ss))

unsigned char SPI_TxRx(unsigned char data);
void SPI_Init();


#endif /* SPI_H_ */