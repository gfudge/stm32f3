/*
 * Button.cpp
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#include "Button.h"


Button::~Button() {
	// TODO Auto-generated destructor stub
}

bool Button::Get() {
	unsigned short res = this->read();
	return static_cast<bool>(res);
}
