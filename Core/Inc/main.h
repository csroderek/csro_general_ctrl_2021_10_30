/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f4xx_hal.h"

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
#define RLY_05_Pin GPIO_PIN_2
#define RLY_05_GPIO_Port GPIOE
#define RLY_06_Pin GPIO_PIN_3
#define RLY_06_GPIO_Port GPIOE
#define ID_HC165_DATA_Pin GPIO_PIN_4
#define ID_HC165_DATA_GPIO_Port GPIOE
#define ID_HC165_LD_Pin GPIO_PIN_5
#define ID_HC165_LD_GPIO_Port GPIOE
#define ID_HC165_CLK_Pin GPIO_PIN_6
#define ID_HC165_CLK_GPIO_Port GPIOE
#define NTC_01_Pin GPIO_PIN_0
#define NTC_01_GPIO_Port GPIOC
#define NTC_02_Pin GPIO_PIN_2
#define NTC_02_GPIO_Port GPIOC
#define NTC_03_Pin GPIO_PIN_3
#define NTC_03_GPIO_Port GPIOC
#define NTC_04_Pin GPIO_PIN_0
#define NTC_04_GPIO_Port GPIOA
#define NTC_05_Pin GPIO_PIN_3
#define NTC_05_GPIO_Port GPIOA
#define NTC_06_Pin GPIO_PIN_4
#define NTC_06_GPIO_Port GPIOA
#define DP_01_Pin GPIO_PIN_5
#define DP_01_GPIO_Port GPIOA
#define DP_02_Pin GPIO_PIN_6
#define DP_02_GPIO_Port GPIOA
#define DP_03_Pin GPIO_PIN_0
#define DP_03_GPIO_Port GPIOB
#define VAL_FB_Pin GPIO_PIN_1
#define VAL_FB_GPIO_Port GPIOB
#define ETH_NRST_Pin GPIO_PIN_10
#define ETH_NRST_GPIO_Port GPIOB
#define LED_01_Pin GPIO_PIN_8
#define LED_01_GPIO_Port GPIOC
#define EN1_Pin GPIO_PIN_11
#define EN1_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define DI_04_Pin GPIO_PIN_0
#define DI_04_GPIO_Port GPIOD
#define DI_03_Pin GPIO_PIN_1
#define DI_03_GPIO_Port GPIOD
#define DI_02_Pin GPIO_PIN_2
#define DI_02_GPIO_Port GPIOD
#define DI_01_Pin GPIO_PIN_3
#define DI_01_GPIO_Port GPIOD
#define RLY_01_Pin GPIO_PIN_8
#define RLY_01_GPIO_Port GPIOB
#define RLY_02_Pin GPIO_PIN_9
#define RLY_02_GPIO_Port GPIOB
#define RLY_03_Pin GPIO_PIN_0
#define RLY_03_GPIO_Port GPIOE
#define RLY_04_Pin GPIO_PIN_1
#define RLY_04_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
