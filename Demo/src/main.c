/***********************************************************************//** 
 * \file  main.c
 * \brief  MAIN description and static inline functions at register level 
 * \copyright Copyright (C) 2015-2020 @ APTCHIP
 * <table>
 * <tr><th> Date  		<th>Version <th>Author	<th>Description
 * <tr><td> 2021-02-21  <td>V0.0  	<td>ZJY   	<td>initial
 * </table>
 * *********************************************************************
*/
/* Includes ---------------------------------------------------------------*/
#include <string.h>
#include <csi_drv.h>
#include <iostring.h>

#include "demo.h"

/* Private macro-----------------------------------------------------------*/

/* externs function--------------------------------------------------------*/
extern void system_init(void);
extern void board_init(void);
extern void user_demo(void);

/* externs variablesr------------------------------------------------------*/

/* Private variablesr------------------------------------------------------*/

int main()
{
    system_init();							//系统配置，包括系统时钟，systick（使用BT3 中断实现）等
	board_init();							//打印口配置，包括串口、管脚和波特率等
	
	csi_pin_set_mux(PB06, PB06_OUTPUT);		//PB06 配置为输出
	csi_pin_set_high(PB06);					//PB06 输出高电平;
	
	my_printf("Hello World~~~~~~~\n");		//打印信息
	
	user_demo();							//demo				
	
	
	while(1)
	{
		mdelay(100);						//延时 100ms。使用该延时，请务必保证有调用初始化函数“csi_tick_init()”,本例程默认在system_init()中调用该初始化函数。
		csi_pin_toggle(PB06);				//PB06 翻转
	}
	
    return 0;
}
