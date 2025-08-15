/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#define LCD_D7_Pin GPIO_PIN_13
#define LCD_D7_GPIO_Port GPIOC
#define LCD_D6_Pin GPIO_PIN_14
#define LCD_D6_GPIO_Port GPIOC
#define LCD_D5_Pin GPIO_PIN_15
#define LCD_D5_GPIO_Port GPIOC
#define LCD_D4_Pin GPIO_PIN_0
#define LCD_D4_GPIO_Port GPIOC
#define LCD_EN_Pin GPIO_PIN_1
#define LCD_EN_GPIO_Port GPIOC
#define LCD_RST_Pin GPIO_PIN_2
#define LCD_RST_GPIO_Port GPIOC
#define ENC1_A_Pin GPIO_PIN_0
#define ENC1_A_GPIO_Port GPIOA
#define ENC1_A_EXTI_IRQn EXTI0_IRQn
#define ENC1_B_Pin GPIO_PIN_1
#define ENC1_B_GPIO_Port GPIOA
#define ENC2_A_Pin GPIO_PIN_2
#define ENC2_A_GPIO_Port GPIOA
#define ENC2_A_EXTI_IRQn EXTI2_IRQn
#define ENC2_B_Pin GPIO_PIN_3
#define ENC2_B_GPIO_Port GPIOA
#define VCC_SENSE_Pin GPIO_PIN_5
#define VCC_SENSE_GPIO_Port GPIOA
#define MOTOR_FAULTN_Pin GPIO_PIN_4
#define MOTOR_FAULTN_GPIO_Port GPIOC
#define MOTOR_SLEEPN_Pin GPIO_PIN_5
#define MOTOR_SLEEPN_GPIO_Port GPIOC
#define MOTOR1_PWM2_Pin GPIO_PIN_0
#define MOTOR1_PWM2_GPIO_Port GPIOB
#define MOTOR2_PWM2_Pin GPIO_PIN_1
#define MOTOR2_PWM2_GPIO_Port GPIOB
#define LCD_BACKLIGHT_Pin GPIO_PIN_2
#define LCD_BACKLIGHT_GPIO_Port GPIOB
#define USB_PWR_DET_Pin GPIO_PIN_12
#define USB_PWR_DET_GPIO_Port GPIOB
#define MOTOR1_PWM1_Pin GPIO_PIN_13
#define MOTOR1_PWM1_GPIO_Port GPIOB
#define MOTOR2_PWM1_Pin GPIO_PIN_14
#define MOTOR2_PWM1_GPIO_Port GPIOB
#define USART3_TX_Pin GPIO_PIN_6
#define USART3_TX_GPIO_Port GPIOC
#define USART3_RX_Pin GPIO_PIN_7
#define USART3_RX_GPIO_Port GPIOC
#define IMU_INT_Pin GPIO_PIN_8
#define IMU_INT_GPIO_Port GPIOC
#define IMU_SDA_Pin GPIO_PIN_9
#define IMU_SDA_GPIO_Port GPIOC
#define IMU_SCL_Pin GPIO_PIN_8
#define IMU_SCL_GPIO_Port GPIOA
#define BUTTON_Pin GPIO_PIN_15
#define BUTTON_GPIO_Port GPIOA
#define COLOR_S0_Pin GPIO_PIN_12
#define COLOR_S0_GPIO_Port GPIOC
#define COLOR_S1_Pin GPIO_PIN_2
#define COLOR_S1_GPIO_Port GPIOD
#define COLOR_S3_Pin GPIO_PIN_4
#define COLOR_S3_GPIO_Port GPIOB
#define COLOR_S2_Pin GPIO_PIN_5
#define COLOR_S2_GPIO_Port GPIOB
#define TIM4_CH1_US_ECHO_Pin GPIO_PIN_6
#define TIM4_CH1_US_ECHO_GPIO_Port GPIOB
#define US_TRIG_Pin GPIO_PIN_7
#define US_TRIG_GPIO_Port GPIOB
#define TIM4_CH3_COLOR_Pin GPIO_PIN_8
#define TIM4_CH3_COLOR_GPIO_Port GPIOB
#define SERVO_Pin GPIO_PIN_9
#define SERVO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
