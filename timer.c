/*********************************************************************
*
*   This confidential and proprietary software may be used only as
*   authorised by a licensing agreement from CORERIVER Semiconductor Co., Ltd.
*
*   (c) Copyright 2008 CORERIVER Semiconductor Co., Ltd.
*     All Rights Reserved
*
*   The entire notice above must be reproduced on all authorised
*   copies and copies may only be made to the extent permitted
*   by a licensing agreement from CORERIVER Semiconductor Co., Ltd.
*
* -------------------------------------------------------------------
*
*	FILE			: timer.c
*	AUTHOR			: CORERIVER
*	DESCRIPTION		: Test Code : Test Code for TouchCore 3xxM
*	VERSION			: V0.01
*	COMMENT 
*                 
**********************************************************************/

#define __TIMER0_MODULE__

#include "system.h"

#ifdef TIMER_0_ENABLE

//void timer0_int(void) interrupt TF0_VECTOR
//{
//    TF0 = 0;
//    TH0 = TIMER_500us_H;	/* 500us Timer0 */
//    TL0 = TIMER_500us_L; 

//    timerCnt++;


//    if((timerCnt % 200) == 0) // 500us*200 = 100ms
//    {
//        timerCnt = 0;
//    }
//}


void init_Timer_0(void)
{
    TMOD |= 0x01;	// Timer0 : mode1, 16-bit T/C
    TF0 = 0;
    ET0 = 1;
    
    //PT0=1; 

    timerCnt = 0;
    
    TH0 = TIMER_500us_H;
    TL0 = TIMER_500us_L;
    TR0 = 1;
    EA  = 1;
}
#endif


