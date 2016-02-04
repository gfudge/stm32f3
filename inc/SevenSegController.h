/*
 * SevenSegController.h
 *
 *  Created on: 3 Feb 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_SEVENSEGCONTROLLER_H_
#define SRC_DRIVER_SEVENSEGCONTROLLER_H_

#include "DeviceController.h"
#include "hal.h"
#include "stm32f30x_gpio.h"
#include "stm32f30x_rcc.h"

#define SEVENSEG_CLOCK		RCC_AHBPeriph_GPIOD
#define SEVENSEG_GPIO		GPIOD

#define SEGA = 0x0;
#define SEGB = 0x0;
#define SEGC = 0x0;
#define SEGD = 0x0;
#define SEGE = 0x0;
#define SEGF = 0x0;

class SevenSegController: public DeviceController {
public:
	SevenSegController();
	virtual ~SevenSegController();
};

#endif /* SRC_DRIVER_SEVENSEGCONTROLLER_H_ */
