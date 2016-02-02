/*
 * Buzzer.h
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_BUZZER_H_
#define SRC_DRIVER_BUZZER_H_

#include "Device.h"
#include "hal.h"

class Buzzer: public Device {
public:
	Buzzer(unsigned short port,
			unsigned short mask,
			unsigned short shift)
			: Device(port, mask, shift)
			{ this->state = false; };
	virtual ~Buzzer();

	void Set();
	void Reset();
	bool Get();

private:
	bool state;
	const unsigned short on = 0x1;
	const unsigned short off = 0x0;
};

#endif /* SRC_DRIVER_BUZZER_H_ */
