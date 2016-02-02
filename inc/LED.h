/*
 * LED.h
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_LED_H_
#define SRC_DRIVER_LED_H_

#include "Device.h"
#include "hal.h"

class LED: public Device {
public:
	LED(unsigned short port,
		unsigned short mask,
		unsigned short shift)
		: Device(port, mask, shift)
		{ this->state = false; };
	virtual ~LED();

	void Set();
	void Reset();
	bool Get();

private:
	bool state;
	const unsigned short on = 0x1;
	const unsigned short off = 0x0;
};

#endif /* SRC_DRIVER_LED_H_ */
