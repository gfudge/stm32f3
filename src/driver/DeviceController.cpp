/*
 * DeviceController.cpp
 *
 *  Created on: 31 Jan 2016
 *      Author: gfudge
 */

#include "../../inc/DeviceController.h"

DeviceController::DeviceController() {
	// TODO Auto-generated constructor stub
	//this->devices = std::vector<Device*>();
}

DeviceController::~DeviceController() {
	/* Must delete each Device */
	for(auto& ptr : this->devices) {
		delete ptr;
	}
}

