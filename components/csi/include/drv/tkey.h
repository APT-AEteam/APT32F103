/***********************************************************************//** 
 * \file  sio.c
 * \brief  csi sio driver
 * \copyright Copyright (C) 2015-2020 @ APTCHIP
 * <table>
 * <tr><th> Date  <th>Version  <th>Author  <th>Description
 * <tr><td> 2020-9-03 <td>V0.0  <td>XB   <td>initial
 * <tr><td> 2021-1-03 <td>V0.0  <td>ZJY   <td>modify
 * </table>
 * *********************************************************************
*/

#ifndef _DRV_TKEY_H_
#define _DRV_TKEY_H_

#include <stdint.h>
#include <stdbool.h>
#include <drv/common.h>
#include "csp.h"

#ifdef __cplusplus
extern "C" {
#endif


extern volatile uint8_t byoutflag;
extern volatile uint8_t byScanStep;
extern volatile uint8_t byBaseLineCnt;
extern volatile uint32_t dwKeyMap;
extern volatile uint16_t hwBaselineData[3][32];
extern volatile uint16_t hwSamplingData[3][32];
extern volatile uint8_t byBaseUpdateFlag;
extern volatile uint8_t byTkeyTrackCnt;
extern volatile uint32_t dwRKeyMapTemp;
extern volatile uint32_t dwKeyMapTemp[3];
extern volatile uint8_t byPressDebounce[3][32];
extern volatile uint8_t byReleaseDebounce[3][32];
extern volatile uint8_t byPostiveBuild[3][32];
extern volatile uint8_t byNegtiveBuild[3][32];
extern volatile uint8_t byTriggerLevel[32];
extern volatile uint32_t dwTimeCnt;
extern volatile uint32_t dwTkeyLongpressTime;	
extern volatile uint8_t byTkeyNum;
extern volatile uint8_t byMultiTimesFilter;
extern volatile uint8_t byPressDebounceCnt;		
extern volatile uint8_t byReleaseDebounceCnt;
extern volatile uint8_t byKeyMode;
extern volatile uint8_t byBaseSpeed;	
extern volatile uint8_t byValidKeyNum;
extern uint32_t wTkeyIoEnable;//使用TCH10 和TCH13的时候，因为默认是SWD口，库修改相应功能需要在初始化前给syscon里的修改SWD口的KEY的寄存器写入KEY；


extern void csi_tkey_sleep(void);
extern void csi_tkey_init(void);
extern void csi_key_process(void); 
extern void csi_tkey_parameter_init(uint16_t *hwTkeySenprd,uint8_t *byTkeyIcon);

#ifdef __cplusplus
}
#endif

#endif /* _DRV_tkey_H_ */