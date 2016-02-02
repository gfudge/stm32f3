/*
 * hook.cpp
 *
 *  Created on: 1 Feb 2016
 *      Author: gfudge
 */

#include "hook.h"

/* Hook point */
void hook(void) {
	launchtb();
	return;
}

/* Launch testbenches */
void launchtb(void) {
	bool result;
	Testbench *tb = new Testbench();
	result = tb->RunAllTests();
	if(!result) {
		/* Do something */
		return;
	}
	return;
}
