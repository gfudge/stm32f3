/*
 * BuzzerController.cpp
 *
 *  Created on: 31 Jan 2016
 *      Author: gfudge
 */

#include "BuzzerController.h"


BuzzerController::BuzzerController()
{
	Buzzer *BuzzerA(new Buzzer(DEV_BUZZER_ODR,
						DEV_BUZZER_MASK,
						DEV_BUZZER_SHIFT));

	/* At some point this will need to be deleted */
	this->devices.push_back(BuzzerA);
	this->state = false;
}


void BuzzerController::on()
{
	this->devices[0]->write(DEV_BUZZER_MASK);
	this->state = true;
}

void BuzzerController::off()
{
	this->devices[0]->write(DEV_BUZZER_MASK);
	this->state = false;
}
