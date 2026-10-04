/*
 * @Author: Asephyr 1558825085@qq.com
 * @Date: 2026-10-03 20:26:55
 * @LastEditors: Asephyr 1558825085@qq.com
 * @LastEditTime: 2026-10-04 15:33:31
 * @FilePath: \task1_2026.10.3\Tasks\src\app_init.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "app_init.h"
#include "task_gpio.h"
#include "task_timer.h"

void App_Init(void){

    Task_GPIO_Init();
    Task_Timer_Init();
}