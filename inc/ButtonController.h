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
#include "Button.h"

class ButtonController: public DeviceController {
public:
	ButtonController();
	virtual ~ButtonController();

	bool getButtonState();

private:
	//std::vector<Button*> devices;
};

#endif /* SRC_DRIVER_BUTTONCONTROLLER_H_ */
