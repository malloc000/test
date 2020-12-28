#ifndef _BLE_APP_H_
#define _BLE_APP_H_

#include "ble_cfg.h"

//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32开发板
//ATK-BLE01模块功能驱动
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2020/7/2
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2020-2030
//All rights reserved
//********************************************************************************
//无
                  
//#define BLE_STA   PAin(4)    HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
//#define BLE_WKUP  PAout(11) 
#define BLE_STA   HAL_GPIO_ReadPin(GPIOC, STA_Pin)
void Ble_Test(void);

#endif

