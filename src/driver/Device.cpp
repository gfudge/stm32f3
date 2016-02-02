/*
 * Device.cpp
 *
 *  Created on: 31 Jan 2016
 *      Author: gfudge
 */

#include "Device.h"

Device::Device(unsigned short port, unsigned short mask, unsigned short shift) {
	*this->port 	= static_cast<uint16_t>(port);
	this->bitmask 	= static_cast<uint16_t>(mask);
	this->bitshift 	= static_cast<uint16_t>(shift);
}

Device::~Device() {
/* Should be nothing on heap to dealloc */
/* Should we write zero to the output? */
}

void Device::write(uint16_t data) {
	/* Blank out bits */
	*(this->port) &= ~(this->bitmask << this->bitshift);
	/* Write data bits */
	*(this->port) |= ((data & this->bitmask) << this->bitshift);
	return;
}

uint16_t Device::read() {
	uint16_t data;
	data = *(this->port) & this->bitmask;
	return data;
}
