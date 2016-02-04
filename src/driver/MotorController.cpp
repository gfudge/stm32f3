/*
 * MotorController.cpp
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#include "MotorController.h"

MotorController::MotorController() {
	GPIO_InitTypeDef GPIO_InitStructure;

	/* Enable motor port clock */
	RCC_AHBPeriphClockCmd(MOTOR_CLOCK, ENABLE);

	/* Configure GPIO as output */
	GPIO_InitStructure.GPIO_Mode 	= GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_PuPd 	= GPIO_PuPd_NOPULL;
	GPIO_InitStructure.GPIO_Pin 	= MOTOR_ENABLE | MOTOR_DIRECTION | MOTOR_ENCODER;
	GPIO_Init(MOTOR_GPIO, &GPIO_InitStructure);
}

MotorController::~MotorController() {
	// TODO Auto-generated destructor stub
}

void MotorController::Start() {
	/* Write 1 to enable pin */
	GPIO_WriteBit(this->gpio, MOTOR_ENABLE, Bit_SET );
	return;
}

void MotorController::Stop() {
	/* Write 0 to enable pin */
	GPIO_WriteBit(this->gpio, MOTOR_ENABLE, Bit_RESET );
	return;
}

void MotorController::Clockwise() {
	/* Write 1 to direction pin */
	GPIO_WriteBit(this->gpio, MOTOR_DIRECTION, Bit_SET );
	return;
}

void MotorController::Anticlockwise() {
	/* Write 0 to direction pin */
	GPIO_WriteBit(this->gpio, MOTOR_DIRECTION, Bit_RESET );
	return;
}

bool MotorController::ReadEncoder() {
	/* Read the encoder bit */
	uint8_t bit = GPIO_ReadInputDataBit(this->gpio, MOTOR_ENCODER);
	return static_cast<bool>(bit);
}
