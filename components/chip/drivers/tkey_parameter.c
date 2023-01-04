/***********************************************************************//** 
 * \file  tkey_parameter.c
 * \brief  csi tkey parameter
 * \copyright Copyright (C) 2015-2022 @ ASMCHIP
 * <table>
 * <tr><th> Date  <th>Version  <th>Author  <th>Description
 * <tr><td> 2020-11-24 <td>V0.0  <td>ASM AE Team   <td>initial
 * </table>
 * *********************************************************************
*/ 

#include "csp_tkey.h"
#include <drv/tkey.h>

void csi_tkey_parameter_init(uint16_t *hwTkeySenprd,uint8_t *byTkeyIcon)
{


	//wTkeyIoEnable=0X1ffffff;    
	//wTkeyIoEnable  =0X00001ff;    
	//wTkeyIoEnable=0x3;    //TCH3是FVR的引脚
	//wTkeyIoEnable=(0x7<<0)|(0X1F<<4); 
	//wTkeyIoEnable=(0xBE<<12); 
	//wTkeyIoEnable = 0X1FBEFF7;
	//wTkeyIoEnable=(0xF<<7)|(0XF<<12); 
	wTkeyIoEnable=(0x3<<6); 
	byPressDebounceCnt = 3;			//按下滤波次数
	byReleaseDebounceCnt = 3;		//释放滤波次数
	byValidKeyNum = 4;				//最大有效按键数
	byKeyMode = 1;					//按键模式 0单按键 1多按键
	dwTkeyLongpressTime = 5;		//长按时间
	byMultiTimesFilter = 1;			//倍数滤波
	byBaseSpeed  = 10;				//基线更新速度


	hwTkeySenprd[0]  = 0X200;
	hwTkeySenprd[1]  = 0X200;
	hwTkeySenprd[2]  = 0X200;
	hwTkeySenprd[3]  = 0X200;
	hwTkeySenprd[4]  = 0X200;
	hwTkeySenprd[5]  = 0X200;
	hwTkeySenprd[6]  = 50;
	hwTkeySenprd[7]  = 50;
	hwTkeySenprd[8]  = 0X200;
	hwTkeySenprd[9]  = 0X200;
	hwTkeySenprd[10] = 0X200;
	hwTkeySenprd[11] = 0X200;
	hwTkeySenprd[12] = 0X200;
	hwTkeySenprd[13] = 0X200;
	hwTkeySenprd[14] = 0X200;
	hwTkeySenprd[15] = 0X200;
	hwTkeySenprd[16] = 0X200;
	hwTkeySenprd[17] = 0X200;
	hwTkeySenprd[18] = 0X200;
	hwTkeySenprd[19] = 0X200;
	hwTkeySenprd[20] = 0X200;
	hwTkeySenprd[21] = 0X200;
	hwTkeySenprd[22] = 0X200;
	hwTkeySenprd[23] = 0X200;
	hwTkeySenprd[24] = 0x200;

	byTkeyIcon[0]  = 0X4;
	byTkeyIcon[1]  = 0X4;
	byTkeyIcon[2]  = 0X4;
	byTkeyIcon[3]  = 4;
	byTkeyIcon[4]  = 4;
	byTkeyIcon[5]  = 4;
	byTkeyIcon[6]  = 4;
	byTkeyIcon[7]  = 4;
	byTkeyIcon[8]  = 6;
	byTkeyIcon[9]  = 6;
	byTkeyIcon[10] = 6;
	byTkeyIcon[11] = 6;
	byTkeyIcon[12] = 6;
	byTkeyIcon[13] = 6;
	byTkeyIcon[14] = 6;
	byTkeyIcon[15] = 6;
	byTkeyIcon[16] = 6;
	byTkeyIcon[17] = 6;
	byTkeyIcon[18] = 4;
	byTkeyIcon[19] = 4;
	byTkeyIcon[20] = 4;
	byTkeyIcon[21] = 4;
	byTkeyIcon[22] = 4;
	byTkeyIcon[23] = 4;
	byTkeyIcon[24] = 4;
	
	byTriggerLevel[0]  = 40;
	byTriggerLevel[1]  = 40;
	byTriggerLevel[2]  = 40;
	byTriggerLevel[3]  = 40;
	byTriggerLevel[4]  = 40;
	byTriggerLevel[5]  = 40;
	byTriggerLevel[6]  = 40;
	byTriggerLevel[7]  = 40;
	byTriggerLevel[8]  = 40;
	byTriggerLevel[9]  = 40;
	byTriggerLevel[10] = 40;
	byTriggerLevel[11] = 40;
	byTriggerLevel[12] = 40;
	byTriggerLevel[13] = 40;
	byTriggerLevel[14] = 40;
	byTriggerLevel[15] = 40;
	byTriggerLevel[16] = 40;
	byTriggerLevel[17] = 40;
	byTriggerLevel[18] = 40;
	byTriggerLevel[19] = 40;
	byTriggerLevel[20] = 40;
	byTriggerLevel[21] = 40;
	byTriggerLevel[22] = 40;
	byTriggerLevel[23] = 40;
	byTriggerLevel[24] = 40;
}                        
