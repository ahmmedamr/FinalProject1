
#include "Slave.h"


void Slave_Init(){
	DDRB |= (1<<miso);
	DDRB &=~ (1<<mosi) | (1<<clk) | (1<<ss);
	SPCR |= (1<<SPE);
}

unsigned char Slave_TxRx(unsigned char data){
	SPDR = data;
	while(((SPSR>>SPIF) & 1 ) == 0 );
	return SPDR;
}