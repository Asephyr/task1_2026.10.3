
#include "task_gpio.h"

void Task_GPIO_Init(void){
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
    
}