/*
 * Button.h
 *
 *  Created on: Jun 11, 2026
 *      Author: conk3R
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

static uint16_t DEFAULT_DEBOUNCE = 3;

typedef struct {
	uint16_t buffer_length;
	uint16_t history;
	uint16_t mask;
	GPIO_PinState last_state;
} Button;

Button Button_Init(uint16_t buffer_length);
GPIO_PinState Update_Button(Button *button_p, GPIO_PinState button_state);

#endif /* INC_BUTTON_H_ */
