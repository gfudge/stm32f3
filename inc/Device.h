/*
 * Device.h
 *
 *  Created on: 31 Jan 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_DEVICE_H_
#define SRC_DRIVER_DEVICE_H_

#include "stm32f3_discovery.h"

class Device
{
	public:
		Device(unsigned short port, unsigned short mask, unsigned short shift);
		virtual ~Device();
		uint16_t read();
		void write(uint16_t data);


	private:
		uint16_t *port;
		uint16_t bitmask;
		uint16_t bitshift;
};


#endif /* SRC_DRIVER_DEVICE_H_ */
