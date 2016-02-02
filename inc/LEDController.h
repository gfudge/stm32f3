/*
 * LEDController.h
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_LEDCONTROLLER_H_
#define SRC_DRIVER_LEDCONTROLLER_H_

#include "DeviceController.h"
#include "LED.h"
#include "hal.h"
#include <vector>

class LEDController: public DeviceController {
public:
	LEDController();
	virtual ~LEDController();

	void on();
	void off();
private:
	/* Overloaded Device Vector */
	std::vector<LED*> devices;
};

#endif /* SRC_DRIVER_LEDCONTROLLER_H_ */
