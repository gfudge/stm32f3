/*
 * Button.h
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_BUTTON_H_
#define SRC_DRIVER_BUTTON_H_

#include "Device.h"
#include "hal.h"

class Button: public Device {
public:
	Button(unsigned short port,
			unsigned short mask,
			unsigned short shift)
		: Device(port, mask,shift) {};
	virtual ~Button();

	bool Get();
};

#endif /* SRC_DRIVER_BUTTON_H_ */
