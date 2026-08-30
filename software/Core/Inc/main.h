/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define VOL_L_CH1_Pin GPIO_PIN_0
#define VOL_L_CH1_GPIO_Port GPIOA
#define VOL_L_CH2_Pin GPIO_PIN_1
#define VOL_L_CH2_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define VOL_R_CH1_Pin GPIO_PIN_6
#define VOL_R_CH1_GPIO_Port GPIOA
#define VOL_R_CH2_Pin GPIO_PIN_7
#define VOL_R_CH2_GPIO_Port GPIOA
#define A_BT_Pin GPIO_PIN_4
#define A_BT_GPIO_Port GPIOC
#define B_BT_Pin GPIO_PIN_5
#define B_BT_GPIO_Port GPIOC
#define C_BT_Pin GPIO_PIN_0
#define C_BT_GPIO_Port GPIOB
#define D_BT_Pin GPIO_PIN_1
#define D_BT_GPIO_Port GPIOB
#define FX_L_BT_Pin GPIO_PIN_2
#define FX_L_BT_GPIO_Port GPIOB
#define FX_R_BT_Pin GPIO_PIN_10
#define FX_R_BT_GPIO_Port GPIOB
#define START_BT_Pin GPIO_PIN_11
#define START_BT_GPIO_Port GPIOB
#define START_BT_LED_Pin GPIO_PIN_12
#define START_BT_LED_GPIO_Port GPIOB
#define FX_R_BT_LED_Pin GPIO_PIN_13
#define FX_R_BT_LED_GPIO_Port GPIOB
#define FX_L_BT_LED_Pin GPIO_PIN_14
#define FX_L_BT_LED_GPIO_Port GPIOB
#define D_BT_LED_Pin GPIO_PIN_15
#define D_BT_LED_GPIO_Port GPIOB
#define C_BT_LED_Pin GPIO_PIN_6
#define C_BT_LED_GPIO_Port GPIOC
#define B_BT_LED_Pin GPIO_PIN_7
#define B_BT_LED_GPIO_Port GPIOC
#define A_BT_LED_Pin GPIO_PIN_8
#define A_BT_LED_GPIO_Port GPIOC
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
