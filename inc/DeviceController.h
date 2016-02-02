/*
 * DeviceController.h
 *
 *  Created on: 31 Jan 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_DEVICECONTROLLER_H_
#define SRC_DRIVER_DEVICECONTROLLER_H_


/* Standard Libraries */
#include <vector>

/* Driver Libraries */
#include "Device.h"

class DeviceController
{
public:
	DeviceController();
	virtual ~DeviceController();
	int getDeviceCount();

	/* Interrupt Routines */
//	int interrupt(IOInterrupt & interrupt);
protected:
	//std::vector<Device*> devices;
	std::vector<Device*> devices;
};

#endif /* SRC_DRIVER_DEVICECONTROLLER_H_ */
