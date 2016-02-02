/*
 * LED.cpp
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#include "LED.h"


LED::~LED() {
	// TODO Auto-generated destructor stub
}

void LED::Set() {
	this->write(this->on);
	return;
}

void LED::Reset() {
	this->write(this->off);
	return;
}

bool LED::Get() {
	unsigned short ret = this->read();
	return static_cast<bool>(ret);
}
