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
	/* Dirty Delay
	 * FCLK = 72MHz
	 * 1ms = 72,000 cycles */
	unsigned long delay = ms * 72 * 1000;
	do {
		--delay;
	} while(delay > 0);
}

bool Testbench::RunAllTests() {
	this->RunBuzzerTest();
	this->RunButtonTest();
	this->RunLEDTest();
	this->RunSevenSegTest();
	this->RunMotorTest();
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
		pressed = myButton->getButtonAccept();
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

bool Testbench::RunSevenSegTest() {
	SevenSegController *mySevenSeg = new SevenSegController();

	/* Write some chars */
	mySevenSeg->WriteChar('d');
	this->delay(1000);
	mySevenSeg->WriteChar('e');
	this->delay(1000);
	mySevenSeg->WriteChar('a');
	this->delay(1000);
	mySevenSeg->WriteChar('d');
	this->delay(1000);
	mySevenSeg->WriteChar('b');
	this->delay(1000);
	mySevenSeg->WriteChar('e');
	this->delay(1000);
	mySevenSeg->WriteChar('e');
	this->delay(1000);
	mySevenSeg->WriteChar('f');
	this->delay(1000);

	delete mySevenSeg;
	return true;
}

bool Testbench::RunMotorTest() {
	MotorController *myMotor = new MotorController();

	myMotor->Clockwise();
	myMotor->Start();
	this->delay(1000);
	myMotor->Stop();

	myMotor->Anticlockwise();
	myMotor->Start();
	this->delay(1000);
	myMotor->Stop();

	delete myMotor;
	return true;
}
