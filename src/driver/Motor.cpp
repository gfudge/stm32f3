/*
 * Motor.cpp
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#include "Motor.h"

Motor::~Motor() {
	// TODO Auto-generated destructor stub
}

void Motor::Start() {

}

void Motor::Stop() {

}

void Motor::SetDirection(bool direction) {
	this->direction = direction;
	return;
}

bool Motor::GetDirection() {
	return static_cast<bool>(this->direction);
}
