#include "UART.h"
#include "SPI.h"

int main(void)
{
	UART_Init();
	SPI_Init();
	Slave_EN;
	
	DDRC |= (1<<2);
	
	while (1)
	{
		SPI_TxRx(UART_Rx());
	}
}

