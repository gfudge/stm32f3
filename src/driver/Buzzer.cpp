/*
 * Buzzer.cpp
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#include "Buzzer.h"


Buzzer::~Buzzer() {
	// TODO Auto-generated destructor stub
}

void Buzzer::Set() {
	this->write(this->on);
	return;
}

void Buzzer::Reset() {
	this->write(this->off);
	return;
}

bool Buzzer::Get() {
	unsigned short ret = this->read();
	return static_cast<bool>(ret);
}
