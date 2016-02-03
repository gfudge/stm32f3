/*
 * hal.h
 *
 *  Created on: 31 Jan 2016
 *      Author: gfudge
 */

#ifndef SRC_DRIVER_HAL_H_
#define SRC_DRIVER_HAL_H_

/**
  ******************************************************************************
  * @file    hal.h
  * @author  Matt Parker, (Add everyone else)
  * @version 0.1
  * @date    -- -- --
  * @brief   Hardware map for the washing machine
  ******************************************************************************
  */

// port base addresses
#define GPIO_C_BASE_ADDR  0x40000000 + 0x08000000 + 0x00000800
#define GPIO_D_BASE_ADDR  0x40000000 + 0x08000000 + 0x00000C00
#define GPIO_E_BASE_ADDR  0x40000000 + 0x08000000 + 0x00001000

// port register addresses
#define GPIO_C_MODE  (GPIO_C_BASE_ADDR)
#define GPIO_C_SPEED (GPIO_C_BASE_ADDR + 0x08)
#define GPIO_C_PULL  (GPIO_C_BASE_ADDR + 0x0C)
#define GPIO_C_IDR   (GPIO_C_BASE_ADDR + 0x10)
#define GPIO_C_ODR   (GPIO_C_BASE_ADDR + 0x14)

#define GPIO_D_MODE  (GPIO_D_BASE_ADDR)
#define GPIO_D_SPEED (GPIO_D_BASE_ADDR + 0x08)
#define GPIO_D_PULL  (GPIO_D_BASE_ADDR + 0x0C)
#define GPIO_D_IDR   (GPIO_D_BASE_ADDR + 0x10)
#define GPIO_D_ODR   (GPIO_D_BASE_ADDR + 0x14)

#define GPIO_E_MODE  (GPIO_E_BASE_ADDR)
#define GPIO_E_SPEED (GPIO_E_BASE_ADDR + 0x08)
#define GPIO_E_PULL  (GPIO_E_BASE_ADDR + 0x0C)
#define GPIO_E_IDR   (GPIO_E_BASE_ADDR + 0x10)
#define GPIO_E_ODR   (GPIO_E_BASE_ADDR + 0x14)

/* Port Definitions */
#define MODE_INPUT		0x0
#define MODE_OUTPUT		0x55555555
#define SPEED			0xffffffff
#define PULLDOWN		0xaaaaaaaa

// Device addresses
#define DEV_MOTOR_CTRL_IDR		GPIO_D_IDR
#define DEV_MOTOR_DIR_IDR		GPIO_D_IDR

#define DEV_BUZZER_ODR			GPIO_C_ODR
//#define DEV_BUZZER_BITMASK	0x0040
#define DEV_BUZZER_MASK			0x1
#define DEV_BUZZER_SHIFT 		0x6

#define DEV_BUTTON_A_ODR		0x0
#define DEV_BUTTON_A_MASK		0x0
#define DEV_BUTTON_A_SHIFT		0x0

#define DEV_LED_A_ODR			0x0
#define DEV_LED_A_MASK			0x0
#define DEV_LED_A_SHIFT			0x0

#endif /* SRC_DRIVER_HAL_H_ */
