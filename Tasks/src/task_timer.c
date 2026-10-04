/*
 * @Author: Asephyr 1558825085@qq.com
 * @Date: 2026-10-03 20:26:44
 * @LastEditors: Asephyr 1558825085@qq.com
 * @LastEditTime: 2026-10-04 21:04:45
 * @FilePath: \task1_2026.10.3\Tasks\src\task_timer.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "task_timer.h"

volatile uint32_t tick = 0;

extern TIM_HandleTypeDef htim2;
extern IWDG_HandleTypeDef hiwdg;

#define FEED_WATCHDOG  0

void Task_Timer_Init(void){
    HAL_TIM_Base_Start_IT(&htim2);

}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htmi){

    if(htmi->Instance == TIM2){
        tick++;
    #if FEED_WATCHDOG
        HAL_IWDG_Refresh(&hiwdg);
    #endif

    }
}