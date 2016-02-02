/*
 * BuzzerController.h
 *
 *  Created on: 31 Jan 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_BUZZERCONTROLLER_H_
#define SRC_DRIVER_BUZZERCONTROLLER_H_

#include "DeviceController.h"
#include "hal.h"
#include "Buzzer.h"

class BuzzerController :
		public DeviceController
	{
	public:
		BuzzerController();

		void on();
		void off();

		bool getState() { return this->state; };

	private:
		bool state;
		std::vector<Buzzer*> devices;
	};

#endif /* SRC_DRIVER_BUZZERCONTROLLER_H_ */
