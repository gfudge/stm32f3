/*
 * ButtonController.cpp
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#include "ButtonController.h"

ButtonController::ButtonController() {
	GPIO_Init()
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
