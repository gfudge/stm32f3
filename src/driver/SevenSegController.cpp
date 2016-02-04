/*
 * SevenSegController.cpp
 *
 *  Created on: 3 Feb 2016
 *      Author: gfudge
 */

#include "SevenSegController.h"

SevenSegController::SevenSegController() {
	GPIO_InitTypeDef GPIO_InitStructure;

	/* Enable 7Seg port clock */
	RCC_AHBPeriphClockCmd(SEVENSEG_CLOCK, ENABLE);

	/* Configure GPIO as output */
	GPIO_InitStructure.GPIO_Mode 	= GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_PuPd 	= GPIO_PuPd_NOPULL;
	GPIO_InitStructure.GPIO_Pin 	= SEGA | SEGB | SEGC | SEGD | SEGE | SEGF;
	GPIO_Init(SEVENSEG_GPIO, &GPIO_InitStructure);
}

SevenSegController::~SevenSegController() {
	// TODO Auto-generated destructor stub
}

void SevenSegController::WriteChar(char c) {
	switch(c) {
	case '1':
		GPIO_Write(this->gpio, SEG1);
		break;
	case '2':
		GPIO_Write(this->gpio, SEG2);
		break;
	case '3':
		GPIO_Write(this->gpio, SEG3);
		break;
	case '4':
		GPIO_Write(this->gpio, SEG4);
		break;
	case '5':
		GPIO_Write(this->gpio, SEG5);
		break;
	case '6':
		GPIO_Write(this->gpio, SEG6);
		break;
	case '7':
		GPIO_Write(this->gpio, SEG7);
		break;
	case '8':
		GPIO_Write(this->gpio, SEG8);
		break;
	case '9':
		GPIO_Write(this->gpio, SEG9);
		break;
	case 'a':
		GPIO_Write(this->gpio, SEGA);
		break;
	case 'b':
		GPIO_Write(this->gpio, SEGB);
		break;
	case 'c':
		GPIO_Write(this->gpio, SEGC);
		break;
	case 'd':
		GPIO_Write(this->gpio, SEGD);
		break;
	case 'e':
		GPIO_Write(this->gpio, SEGE);
		break;
	case 'f':
		GPIO_Write(this->gpio, SEGF);
		break;

	default:
		break;
	}
	return;
}

