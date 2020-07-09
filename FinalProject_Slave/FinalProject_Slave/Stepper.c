#include "Stepper.h"

void Stepper_Init()
{
	DDRA = 0xFC;
	PORTA |= (1<<4) | (1<<7); //Ask mina
}

void StepperMotor (unsigned char mode)
{
	switch (mode){
		case 1:
		PORTA |= (1<<PC5) | (1<<PC6);
		PORTA &=~ (1<<PC2) | (1<<PC3);
		break;
		case 2:
		PORTA |= (1<<PC2) | (1<<PC6);
		PORTA &=~ (1<<PC3) | (1<<PC5);
		break;
		case 3:
		PORTA |= (1<<PC2) | (1<<PC3);
		PORTA &=~ (1<<PC5) | (1<<PC6);
		break;
		case 4:
		PORTA |= (1<<PC5) | (1<<PC3);
		PORTA &=~ (1<<PC2) | (1<<PC6);
		break;
	}
}
