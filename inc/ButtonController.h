/*
 * ButtonController.h
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_BUTTONCONTROLLER_H_
#define SRC_DRIVER_BUTTONCONTROLLER_H_

#include "DeviceController.h"
#include "hal.h"
#include "stm32f30x_gpio.h"
#include "stm32f30x_rcc.h"

enum {
	BUTTON_RED,
	BUTTON_YELLOW,
	BUTTON_GREEN,
	BUTTON_ACCEPT,
	BUTTON_CANCEL
};

#define BUTTON_CLOCK	RCC_AHBPeriph_GPIOE
#define BUTTON_GPIO		GPIOE

class ButtonController: public DeviceController {
public:
	ButtonController();
	virtual ~ButtonController();

	bool getButtonRed();
	bool getButtonYellow();
	bool getButtonGreen();
	bool getButtonAccept();
	bool getButtonCancel();

private:
	GPIO_TypeDef* gpio;
	unsigned short pin;
};

#endif /* SRC_DRIVER_BUTTONCONTROLLER_H_ */
