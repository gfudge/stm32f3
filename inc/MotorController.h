/*
 * MotorController.h
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_MOTORCONTROLLER_H_
#define SRC_DRIVER_MOTORCONTROLLER_H_

#include "DeviceController.h"
#include "Motor.h"

class MotorController: public DeviceController {
public:
	MotorController();
	virtual ~MotorController();
};

#endif /* SRC_DRIVER_MOTORCONTROLLER_H_ */
