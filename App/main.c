/*
 * StopWatch.c
 *
 * Created: 02/07/2023 04:32:38 م
 * Author : ascom
 */ 

//#include <avr/io.h>
#include "StdTypes.h"
#include "BitMath.h"
#include "Reg.h"
#include "Dio.h"
#include "ExInt.h"
#include "Timer0.h"
#include "Ssd.h"
#define F_CPU 16000000UL
#include <util/delay.h>
void A_ExtInt0_Execution(void);
void A_ExtInt1_Execution(void);
void A_ExtInt2_Execution(void);
void A_Timer0_Execution(void);
volatile u8 StopWatch_u8_Sec = 0;
volatile u8 StopWatch_u8_Min = 0;
volatile u8 StopWatch_u8_Hr = 0;
volatile u8 StopWatch_u8_Sec_Counter = 0;
volatile u8 StopWatch_u8_Min_Counter = 0;
volatile u8 StopWatch_u8_Hr_Counter= 0;

int main(void)
{
	M_Dio_PinMode(PD2,INPUT);
	M_Dio_PinMode(PD3,INPUT);
	M_ExtInt_Int0Init();
	M_ExtInt_Int1Init();
	M_ExtInt_Int2Init();
	M_Timer0_Init();
	H_Ssd_Init();
    M_ExtInt0_SetCallBack(A_ExtInt0_Execution);
    M_ExtInt1_SetCallBack(A_ExtInt1_Execution);
	M_Timer0_SetCallBack(A_Timer0_Execution);
    while (1) 
    {

		H_Ssd_DisplayNumber((StopWatch_u8_Sec%10),SIXTH_DIGIT);
		_delay_us(200);
		H_Ssd_Disable();
		H_Ssd_DisplayNumber((StopWatch_u8_Sec/10),FIFTH_DIGIT);
		_delay_us(200);
		H_Ssd_Disable();
		H_Ssd_DisplayNumber((StopWatch_u8_Min%10),FOURTH_DIGIT);
		_delay_us(200);
		H_Ssd_Disable();
		H_Ssd_DisplayNumber((StopWatch_u8_Min/10),THIRD_DIGIT);
		_delay_us(200);
		H_Ssd_Disable();
		H_Ssd_DisplayNumber((StopWatch_u8_Hr%10),SECOND_DIGIT);
		_delay_us(200);
		H_Ssd_Disable();
		H_Ssd_DisplayNumber((StopWatch_u8_Hr/10),FIRST_DIGIT);
		_delay_us(200);
		H_Ssd_Disable();
		_delay_us(200);
    }
}

void A_ExtInt0_Execution(void)
{
	
	M_Timer0_SetTime(1000);
	M_Timer0_Start();	
	
}
void A_ExtInt1_Execution(void)
{
	M_Timer0_Stop();
}

void A_Timer0_Execution(void)
{
	StopWatch_u8_Sec_Counter++;
	if(StopWatch_u8_Sec_Counter < 60)
	{
		StopWatch_u8_Sec++;
	}
	if(StopWatch_u8_Sec_Counter == 60)
	{
		StopWatch_u8_Min_Counter++;
		StopWatch_u8_Sec = 0;
		StopWatch_u8_Sec_Counter = 0;
		if(StopWatch_u8_Min_Counter < 60)
		{
			StopWatch_u8_Min++;
		}
		if(StopWatch_u8_Min_Counter == 60)
		{
			StopWatch_u8_Hr_Counter++;
			StopWatch_u8_Min = 0;
			StopWatch_u8_Min_Counter = 0;
			if(StopWatch_u8_Hr_Counter < 24)
			{
				StopWatch_u8_Hr++;
			}
			if(StopWatch_u8_Hr_Counter == 24)
			{
				StopWatch_u8_Hr = 0;
				StopWatch_u8_Hr_Counter = 0;
			}
		}
	}
}
