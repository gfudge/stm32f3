/*
 * Testbench.cpp
 *
 *  Created on: 1 Feb 2016
 *      Author: gfudge
 */

#include "Testbench.h"

Testbench::Testbench() {
	// TODO Auto-generated constructor stub

}

Testbench::~Testbench() {
	// TODO Auto-generated destructor stub
}

void Testbench::delay(unsigned int ms) {
	_delay_ms((uint32_t)ms);
}

bool Testbench::RunAllTests() {
	this->RunBuzzerTest();
	this->RunButtonTest();
	this->RunLEDTest();
	return true;
}

bool Testbench::RunBuzzerTest() {
	/* Run testing of BuzzerController */
	BuzzerController *myBuzzer = new BuzzerController();

	/* Toggle the buzzer for 1 second*/
	myBuzzer->on();
	this->delay(1000);
	myBuzzer->off();
	this->delay(1000);

	delete myBuzzer;
	return true;
}

bool Testbench::RunButtonTest() {
	ButtonController *myButton = new ButtonController();

	/* Check the button */
	bool pressed = false;
	do {
		pressed = myButton->getButtonState();
	} while(!pressed);

	delete myButton;
	return true;
}

bool Testbench::RunLEDTest() {
	LEDController *myLED  = new LEDController();

	/* Set led for 1 second */
	myLED->on();
	this->delay(1000);
	myLED->off();

	delete myLED;
	return true;
}
