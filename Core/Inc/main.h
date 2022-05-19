/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define B1_EXTI_IRQn EXTI15_10_IRQn
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define RS_Pin GPIO_PIN_4
#define RS_GPIO_Port GPIOC
#define RNW_Pin GPIO_PIN_2
#define RNW_GPIO_Port GPIOB
#define E_Pin GPIO_PIN_11
#define E_GPIO_Port GPIOB
#define DB6_Pin GPIO_PIN_6
#define DB6_GPIO_Port GPIOC
#define D5_Pin GPIO_PIN_7
#define D5_GPIO_Port GPIOC
#define DB7_Pin GPIO_PIN_8
#define DB7_GPIO_Port GPIOC
#define D4_Pin GPIO_PIN_8
#define D4_GPIO_Port GPIOA
#define D3_Pin GPIO_PIN_9
#define D3_GPIO_Port GPIOA
#define D2_Pin GPIO_PIN_10
#define D2_GPIO_Port GPIOA
#define DB4_Pin GPIO_PIN_11
#define DB4_GPIO_Port GPIOA
#define DB5_Pin GPIO_PIN_12
#define DB5_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define buttonM_Pin GPIO_PIN_4
#define buttonM_GPIO_Port GPIOB
#define buttonM_EXTI_IRQn EXTI4_IRQn
#define buttonL_Pin GPIO_PIN_5
#define buttonL_GPIO_Port GPIOB
#define buttonL_EXTI_IRQn EXTI9_5_IRQn
#define buttonR_Pin GPIO_PIN_6
#define buttonR_GPIO_Port GPIOB
#define buttonR_EXTI_IRQn EXTI9_5_IRQn
#define buttonU_Pin GPIO_PIN_7
#define buttonU_GPIO_Port GPIOB
#define buttonU_EXTI_IRQn EXTI9_5_IRQn
#define buttonD_Pin GPIO_PIN_8
#define buttonD_GPIO_Port GPIOB
#define buttonD_EXTI_IRQn EXTI9_5_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
