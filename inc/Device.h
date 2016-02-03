/*
 * Device.h
 *
 *  Created on: 31 Jan 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_DEVICE_H_
#define SRC_DRIVER_DEVICE_H_

#include "stm32f3_discovery.h"
#include "stm32f30x_gpio.h"
#include "hal.h"

typedef struct {
	volatile uint32_t *mode;
	volatile uint32_t *speed;
	volatile uint32_t *pull;
	volatile uint16_t *input;
	volatile uint16_t *output;
} GPIOPort;

class Device
{
	public:
		Device(GPIO_TypeDef* gpio, unsigned short pin);
		virtual ~Device();
		void init();
		uint16_t read();
		void write(uint16_t data);


	private:
		GPIO_TypeDef* gpio;
		unsigned int pin;
};


#endif /* SRC_DRIVER_DEVICE_H_ */
