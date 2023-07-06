/*
 * Ssd.c
 *
 * Created: 02/07/2023 04:36:13 م
 *  Author: ascom
 */ 
#include "Ssd.h"

void H_Ssd_Init(void)
{
	M_Dio_PinMode(SSD_PIN1,OUTPUT);
	M_Dio_PinMode(SSD_PIN2,OUTPUT);
	M_Dio_PinMode(SSD_PIN3,OUTPUT);
	M_Dio_PinMode(SSD_PIN4,OUTPUT);
	M_Dio_PinMode(SSD_PIN5,OUTPUT);
	M_Dio_PinMode(SSD_PIN6,OUTPUT);
	M_Dio_PinMode(SSD_PIN7,OUTPUT);
	M_Dio_PinMode(EN_1,OUTPUT);
	M_Dio_PinMode(EN_2,OUTPUT);
	M_Dio_PinMode(EN_3,OUTPUT);
	M_Dio_PinMode(EN_4,OUTPUT);
	M_Dio_PinMode(EN_5,OUTPUT);
	M_Dio_PinMode(EN_6,OUTPUT);
}
void H_Ssd_DisplayNumber(u8 Local_u8_Number,u8 Local_u8_Digit)
{
	if(Local_u8_Digit == FIRST_DIGIT)
	{
		M_Dio_PinWrite(EN_1,HIGH);
		M_Dio_PinWrite(EN_2,LOW);
		M_Dio_PinWrite(EN_3,LOW);
		M_Dio_PinWrite(EN_4,LOW);
		M_Dio_PinWrite(EN_5,LOW);
		M_Dio_PinWrite(EN_6,LOW);
		switch(Local_u8_Number)
		{
			case 0: PORTC = ((PORTC & 0b10000000) | 0b11000000);break;
			case 1: PORTC = ((PORTC & 0b10000000) | 0b11111001);break;
			case 2: PORTC = ((PORTC & 0b10000000) | 0b10100100);break;
			case 3: PORTC = ((PORTC & 0b10000000) | 0b10110000);break;
			case 4: PORTC = ((PORTC & 0b10000000) | 0b10011001);break;
			case 5: PORTC = ((PORTC & 0b10000000) | 0b10010010);break;
			case 6: PORTC = ((PORTC & 0b10000000) | 0b10000010);break;
			case 7: PORTC = ((PORTC & 0b10000000) | 0b11011000);break;
			case 8: PORTC = ((PORTC & 0b10000000) | 0b10000000);break;
			case 9: PORTC = ((PORTC & 0b10000000) | 0b10010000);break;
			default:                                            break;
		}
	}
	if(Local_u8_Digit == SECOND_DIGIT)
	{
		M_Dio_PinWrite(EN_1,LOW);
		M_Dio_PinWrite(EN_2,HIGH);
		M_Dio_PinWrite(EN_3,LOW);
		M_Dio_PinWrite(EN_4,LOW);
		M_Dio_PinWrite(EN_5,LOW);
		M_Dio_PinWrite(EN_6,LOW);
		switch(Local_u8_Number)
		{
			case 0: PORTC = ((PORTC & 0b10000000) | 0b11000000);break;
			case 1: PORTC = ((PORTC & 0b10000000) | 0b11111001);break;
			case 2: PORTC = ((PORTC & 0b10000000) | 0b10100100);break;
			case 3: PORTC = ((PORTC & 0b10000000) | 0b10110000);break;
			case 4: PORTC = ((PORTC & 0b10000000) | 0b10011001);break;
			case 5: PORTC = ((PORTC & 0b10000000) | 0b10010010);break;
			case 6: PORTC = ((PORTC & 0b10000000) | 0b10000010);break;
			case 7: PORTC = ((PORTC & 0b10000000) | 0b11011000);break;
			case 8: PORTC = ((PORTC & 0b10000000) | 0b10000000);break;
			case 9: PORTC = ((PORTC & 0b10000000) | 0b10010000);break;
			default:                                            break;
		}
	}
	if(Local_u8_Digit == THIRD_DIGIT)
	{
		M_Dio_PinWrite(EN_1,LOW);
		M_Dio_PinWrite(EN_2,LOW);
		M_Dio_PinWrite(EN_3,HIGH);
		M_Dio_PinWrite(EN_4,LOW);
		M_Dio_PinWrite(EN_5,LOW);
		M_Dio_PinWrite(EN_6,LOW);
		switch(Local_u8_Number)
		{
			case 0: PORTC = ((PORTC & 0b10000000) | 0b11000000);break;
			case 1: PORTC = ((PORTC & 0b10000000) | 0b11111001);break;
			case 2: PORTC = ((PORTC & 0b10000000) | 0b10100100);break;
			case 3: PORTC = ((PORTC & 0b10000000) | 0b10110000);break;
			case 4: PORTC = ((PORTC & 0b10000000) | 0b10011001);break;
			case 5: PORTC = ((PORTC & 0b10000000) | 0b10010010);break;
			case 6: PORTC = ((PORTC & 0b10000000) | 0b10000010);break;
			case 7: PORTC = ((PORTC & 0b10000000) | 0b11011000);break;
			case 8: PORTC = ((PORTC & 0b10000000) | 0b10000000);break;
			case 9: PORTC = ((PORTC & 0b10000000) | 0b10010000);break;
			default:                                            break;
		}
	}
	if(Local_u8_Digit == FOURTH_DIGIT)
	{
		M_Dio_PinWrite(EN_1,LOW);
		M_Dio_PinWrite(EN_2,LOW);
		M_Dio_PinWrite(EN_3,LOW);
		M_Dio_PinWrite(EN_4,HIGH);
		M_Dio_PinWrite(EN_5,LOW);
		M_Dio_PinWrite(EN_6,LOW);
		switch(Local_u8_Number)
		{
			case 0: PORTC = ((PORTC & 0b10000000) | 0b11000000);break;
			case 1: PORTC = ((PORTC & 0b10000000) | 0b11111001);break;
			case 2: PORTC = ((PORTC & 0b10000000) | 0b10100100);break;
			case 3: PORTC = ((PORTC & 0b10000000) | 0b10110000);break;
			case 4: PORTC = ((PORTC & 0b10000000) | 0b10011001);break;
			case 5: PORTC = ((PORTC & 0b10000000) | 0b10010010);break;
			case 6: PORTC = ((PORTC & 0b10000000) | 0b10000010);break;
			case 7: PORTC = ((PORTC & 0b10000000) | 0b11011000);break;
			case 8: PORTC = ((PORTC & 0b10000000) | 0b10000000);break;
			case 9: PORTC = ((PORTC & 0b10000000) | 0b10010000);break;
			default:                                            break;
		}
	}
	if(Local_u8_Digit == FIFTH_DIGIT)
	{
		M_Dio_PinWrite(EN_1,LOW);
		M_Dio_PinWrite(EN_2,LOW);
		M_Dio_PinWrite(EN_3,LOW);
		M_Dio_PinWrite(EN_4,LOW);
		M_Dio_PinWrite(EN_5,HIGH);
		M_Dio_PinWrite(EN_6,LOW);
		switch(Local_u8_Number)
		{
			case 0: PORTC = ((PORTC & 0b10000000) | 0b11000000);break;
			case 1: PORTC = ((PORTC & 0b10000000) | 0b11111001);break;
			case 2: PORTC = ((PORTC & 0b10000000) | 0b10100100);break;
			case 3: PORTC = ((PORTC & 0b10000000) | 0b10110000);break;
			case 4: PORTC = ((PORTC & 0b10000000) | 0b10011001);break;
			case 5: PORTC = ((PORTC & 0b10000000) | 0b10010010);break;
			case 6: PORTC = ((PORTC & 0b10000000) | 0b10000010);break;
			case 7: PORTC = ((PORTC & 0b10000000) | 0b11011000);break;
			case 8: PORTC = ((PORTC & 0b10000000) | 0b10000000);break;
			case 9: PORTC = ((PORTC & 0b10000000) | 0b10010000);break;
			default:                                            break;
		}
	}
	if(Local_u8_Digit == SIXTH_DIGIT)
	{
		M_Dio_PinWrite(EN_1,LOW);
		M_Dio_PinWrite(EN_2,LOW);
		M_Dio_PinWrite(EN_3,LOW);
		M_Dio_PinWrite(EN_4,LOW);
		M_Dio_PinWrite(EN_5,LOW);
		M_Dio_PinWrite(EN_6,HIGH);
		switch(Local_u8_Number)
		{
			case 0: PORTC = ((PORTC & 0b10000000) | 0b11000000);break;
			case 1: PORTC = ((PORTC & 0b10000000) | 0b11111001);break;
			case 2: PORTC = ((PORTC & 0b10000000) | 0b10100100);break;
			case 3: PORTC = ((PORTC & 0b10000000) | 0b10110000);break;
			case 4: PORTC = ((PORTC & 0b10000000) | 0b10011001);break;
			case 5: PORTC = ((PORTC & 0b10000000) | 0b10010010);break;
			case 6: PORTC = ((PORTC & 0b10000000) | 0b10000010);break;
			case 7: PORTC = ((PORTC & 0b10000000) | 0b11011000);break;
			case 8: PORTC = ((PORTC & 0b10000000) | 0b10000000);break;
			case 9: PORTC = ((PORTC & 0b10000000) | 0b10010000);break;
			default:                                            break;
		}
	}
}
void H_Ssd_Disable(void)
{
	M_Dio_PinWrite(EN_1,LOW);
	M_Dio_PinWrite(EN_2,LOW);
	M_Dio_PinWrite(EN_3,LOW);
	M_Dio_PinWrite(EN_4,LOW);
	M_Dio_PinWrite(EN_5,LOW);
	M_Dio_PinWrite(EN_6,LOW);
}