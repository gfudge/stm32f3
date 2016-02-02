/*
 * ButtonController.cpp
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#include "ButtonController.h"

ButtonController::ButtonController() {
	Button *ButtonA(new Button(DEV_BUTTON_A_ODR, \
						DEV_BUTTON_A_MASK,	\
						DEV_BUTTON_A_SHIFT));
	this->devices.push_back(ButtonA);
}

ButtonController::~ButtonController() {
	// TODO Auto-generated destructor stub
}

bool ButtonController::getButtonState() {
	/* Read button, return value */
	this->devices[0]->read();
	return false;
}

