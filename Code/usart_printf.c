//
// Created by AdministratorWang on 2023/7/5.
//
#include "usart.h"
/**
  * @brief  printf重定向(gcc)
  * @param  None
  * @note   None
  * @retval None
  */
int __io_putchar(int ch)
{
    HAL_UART_Transmit(&huart1, (uint8_t*)&ch, 1, HAL_MAX_DELAY);
    return ch;
}
