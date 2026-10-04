/*
 * @Author: Asephyr 1558825085@qq.com
 * @Date: 2026-10-03 20:26:15
 * @LastEditors: Asephyr 1558825085@qq.com
 * @LastEditTime: 2026-10-04 15:05:40
 * @FilePath: \task1_2026.10.3\Tasks\inc\task_timer.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef TASK_TIMER_H
#define TASK_TIMER_H

#include "main.h"

extern volatile uint32_t tick;

void Task_Timer_Init(void);

#endif

