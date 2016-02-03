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
	GPIO_InitStructure.GPIO_Pin 	= SEGA | SEGB | SEGC | SEGD | SEGE | SEGF

}

SevenSegController::~SevenSegController() {
	// TODO Auto-generated destructor stub
}

