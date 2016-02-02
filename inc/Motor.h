/*
 * Motor.h
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_MOTOR_H_
#define SRC_DRIVER_MOTOR_H_

#include "hal.h"
#include "Device.h"

class Motor: public Device {
public:
	Motor(unsigned short port,
			unsigned short mask,
			unsigned short shift)
			: Device(port, mask, shift)
			{ this->state = false; };
	virtual ~Motor();

	void Start();
	void Stop();
	void SetDirection(bool);
	bool GetDirection();

private:
	bool direction = true;
	bool state = false;
};

#endif /* SRC_DRIVER_MOTOR_H_ */
