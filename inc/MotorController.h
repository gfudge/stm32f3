/*
 * MotorController.h
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_MOTORCONTROLLER_H_
#define SRC_DRIVER_MOTORCONTROLLER_H_

#include "DeviceController.h"
#include "hal.h"
#include "stm32f30x_gpio.h"
#include "stm32f30x_rcc.h"

#define MOTOR_CLOCK		(RCC_AHBPeriph_GPIOD)
#define MOTOR_GPIO		(GPIOD)
#define MOTOR_ENABLE	(GPIO_Pin_0)
#define MOTOR_DIRECTION	(GPIO_Pin_1)
#define MOTOR_ENCODER	(GPIO_Pin_2)

class MotorController: public DeviceController {
public:
	MotorController();
	virtual ~MotorController();

	void Start();
	void Stop();

	void Clockwise();
	void Anticlockwise();

	bool ReadEncoder();

private:
	GPIO_TypeDef* gpio;
};

#endif /* SRC_DRIVER_MOTORCONTROLLER_H_ */
