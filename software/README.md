# Software

This project was created using CubeMX and CubeIDE. Project structure is built around CubeMX code generation - code should still work properly after new generations.

STM32 NUCLEO-F303RE board can be used for testing and its ST-Link can be used as a programmer (crystal oscillator configuration will need to be changed to Bypass HSE Clock).

## Overview

This firmware works on SOF callbacks. Every millisecond (variable [CUSTOM_HID_FS_BINTERVAL](USB_DEVICE/Target/usbd_conf.h) is configuring polling rate) Start of Frame callback is generated from USB host. Main logic is located in its handler [Process_SOF_Callback](Core/Src/main.c).

### Button debounce

Buttons update their state on each SOF callback. To debounce a button, its state is recorded in `history` variable. Button will change its state only when `buffer_length` amount of identical values is present (by default this value is 3, equaling 3ms debounce).

### Encoders

Encoders are handled with MCU timers in encoder mode. Every SOF timer counter is read and processed to provide 1 out of 48 values on an axis. 48 is chosen due to Bourns encoders having 24 PPR and timers multiplying it by 2 in encoder mode.

There is no software debouncing for encoders since hardware debouncing is present. It is possible to add filters in CubeMX, but in my testing results were quite poor.

## USB

HID descriptor is located in [CUSTOM_HID_ReportDesc_FS](USB_DEVICE/App/usbd_custom_hid_if.c) variable.
Descriptor size is specified in [USBD_CUSTOM_HID_REPORT_DESC_SIZE](USB_DEVICE/Target/usbd_conf.h) along with maximum power configuration in USBD_MAX_POWER (this is set up to draw up to 500mA - maximum possible USB 2.0 current after enumeration).

Every SOF callback all buttons and encoders data is gathered and sent in a form of `hid_report`. LEDs are turned on or off (depending on a state of a corresponding button) in that moment as well.