/*
 * Button.c
 *
 *  Created on: Jun 11, 2026
 *      Author: conk3R
 */
#include "Button.h"


volatile Button Button_Init(uint16_t buffer_length) {
	if (buffer_length >= 16) {
		buffer_length = DEFAULT_DEBOUNCE;  // preventing buffer overflow
	}

	return (Button){
		.buffer_length=buffer_length,
		.mask=(1 << buffer_length) - 1,
		.history=0,
		.last_state=GPIO_PIN_RESET
	};
}

GPIO_PinState Update_Button(Button *button_p, GPIO_PinState button_state) {
	button_p->history <<= 1;

	if (button_state == GPIO_PIN_SET)
		button_p->history |= 1;

	button_p->history &= button_p->mask;

	if (button_p->history == button_p->mask) {
		button_p->last_state = GPIO_PIN_SET;
	}
	else if (button_p->history == 0) {
		button_p->last_state = GPIO_PIN_RESET;
	}

	return button_p->last_state;
}
