#ifndef _BLE_APP_H_
#define _BLE_APP_H_

#include "ble_cfg.h"

//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK STM32������
//ATK-BLE01ģ�鹦������
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2020/7/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2020-2030
//All rights reserved
//********************************************************************************
//��
                  
//#define BLE_STA   PAin(4)    HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
//#define BLE_WKUP  PAout(11) 
#define BLE_STA   HAL_GPIO_ReadPin(GPIOC, STA_Pin)
void Ble_Test(void);
#define aaa  9
#endif

