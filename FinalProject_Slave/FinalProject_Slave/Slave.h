
#ifndef SLAVE_H_
#define SLAVE_H_

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define ss 4
#define mosi 5
#define miso 6
#define clk 7

unsigned char Slave_TxRx(unsigned char data);
void Slave_Init();




#endif 