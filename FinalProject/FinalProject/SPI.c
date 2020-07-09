#include "SPI.h"

void SPI_Init(){
	DDRB |= (1<<mosi) | (1<<clk) | (1<<ss);
	DDRB &=~ (1<<miso);
	SPCR |= (1<<SPE) | (1<<MSTR);
}

unsigned char SPI_TxRx(unsigned char data){
	SPDR = data;
	while(((SPSR>>SPIF) & 1 ) == 0 );
	return SPDR;
}