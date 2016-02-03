/*
 * vectors.c
 *
 *  Created on: 2 Feb 2016
 *      Author: gfudge
 */

/* Custom interrupt vectors */

#include "vectors.h"

static void Default_Handler(unsigned long *fault_args) {
	HardFault_Handler(fault_args);
}

static void HardFault_Handler(unsigned long *hardfault_args) {
	/* Get R0-R3 from stack */
	volatile unsigned long s_r0, s_r1, s_r2, s_r3;
	volatile unsigned long s_r12, s_lr, s_pc, s_psr;

	s_r0 	= (unsigned long)hardfault_args[0];
	s_r1 	= (unsigned long)hardfault_args[1];
	s_r2 	= (unsigned long)hardfault_args[2];
	s_r3 	= (unsigned long)hardfault_args[3];
	s_r12 	= (unsigned long)hardfault_args[4];
	s_lr	= (unsigned long)hardfault_args[5];
	s_pc	= (unsigned long)hardfault_args[6];
	s_psr	= (unsigned long)hardfault_args[7];

	volatile unsigned long _CFSR, _HFSR, _DFSR, _AFSR;

	// Configurable Fault Status Register
	// Consists of MMSR, BFSR and UFSR
	_CFSR = (*((volatile unsigned long *)(0xE000ED28))) ;

	// Hard Fault Status Register
	_HFSR = (*((volatile unsigned long *)(0xE000ED2C))) ;

	// Debug Fault Status Register
	_DFSR = (*((volatile unsigned long *)(0xE000ED30))) ;

	// Auxiliary Fault Status Register
	_AFSR = (*((volatile unsigned long *)(0xE000ED3C))) ;

	__asm("BKPT #0\n") ; // Break into the debugger
}
