/*
 * Testbench.h
 *
 *  Created on: 1 Feb 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_TESTBENCH_H_
#define SRC_DRIVER_TESTBENCH_H_

#include "BuzzerController.h"
#include "ButtonController.h"
#include "LEDController.h"
#include "MotorController.h"
#include "common.h"

class Testbench {
public:
	Testbench();
	virtual ~Testbench();

	bool RunAllTests();
	bool RunIOTests();
	bool RunBuzzerTest();
	bool RunDisplayTest();
	bool RunLEDTest();
	bool RunButtonTest();
	bool RunMotorTest();

private:
	void delay(unsigned int ms);

	unsigned int testCount;
};

#endif /* SRC_DRIVER_TESTBENCH_H_ */
