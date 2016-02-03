/*
 * ButtonController.cpp
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#include "ButtonController.h"

/* Port D, Port E */

ButtonController::ButtonController() {
	GPIO_InitTypeDef GPIO_InitStructure;

	/* Enable Button Clock */
	RCC_AHBPeriphClockCmd(BUTTON_CLOCK, ENABLE);

	/* Configure GPIO As Input */
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_InitStructure.GPIO_Pin  = BUTTON_RED | BUTTON_YELLOW | BUTTON_GREEN | BUTTON_ACCEPT | BUTTON_CANCEL;
	GPIO_Init(BUTTON_GPIO, &GPIO_InitStructure);
}

ButtonController::~ButtonController() {
	// TODO Auto-generated destructor stub
}

bool ButtonController::getButtonRed() {
	return static_cast<bool>(GPIO_ReadInputDataBit(this->gpio, BUTTON_RED));
}

bool ButtonController::getButtonYellow() {
	return static_cast<bool>(GPIO_ReadInputDataBit(this->gpio, BUTTON_YELLOW));
}

bool ButtonController::getButtonGreen() {
	return static_cast<bool>(GPIO_ReadInputDataBit(this->gpio, BUTTON_GREEN));
}

bool ButtonController::getButtonAccept() {
	return static_cast<bool>(GPIO_ReadInputDataBit(this->gpio, BUTTON_ACCEPT));
}

bool ButtonController::getButtonCancel() {
	return static_cast<bool>(GPIO_ReadInputDataBit(this->gpio, BUTTON_CANCEL));
}
