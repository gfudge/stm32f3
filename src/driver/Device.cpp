/*
 * Device.cpp
 *
 *  Created on: 31 Jan 2016
 *      Author: gfudge
 */

#include "Device.h"

Device::Device(GPIO_TypeDef* gpio, unsigned short pin, ) {
	this->gpio 	= gpio;
	this->pin 	= pin;
}

Device::~Device() {
/* Should be nothing on heap to dealloc */
/* Should we write zero to the output? */
}

/* Device Initialisation */
void Device::init() {
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_AHBPeriphClockCmd(GPIO_CLK[this->pin], ENABLE);
	GPIO_InitStructure.GPIO_Pin this->pin;

	GPIO_ResetBits(this->gpio, this->pin);
}

void Device::write(uint16_t data) {
	GPIO_Write(this->gpio, data);
}

uint16_t Device::read() {
	return GPIO_ReadOutputDataBit(this->gpio, this->pin);

}
