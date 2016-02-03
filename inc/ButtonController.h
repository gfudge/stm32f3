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

#define BUTTON_RED		0x0
#define BUTTON_YELLOW	0x1
#define BUTTON_GREEN	0x2
#define BUTTON_ACCEPT	0x3
#define BUTTON_CANCEL	0x4

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
