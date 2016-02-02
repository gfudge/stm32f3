/*
 * LEDController.cpp
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#include "LEDController.h"

LEDController::LEDController() {
	LED *LED_A(new LED(DEV_LED_A_ODR,
						DEV_LED_A_MASK,
						DEV_LED_A_SHIFT));
	this->devices.push_back(LED_A);
}

LEDController::~LEDController() {
	// TODO Auto-generated destructor stub
}

void LEDController::on() {
	this->devices.front()->Set();
	return;
}

void LEDController::off() {
	this->devices.front()->Reset();
	return;
}
