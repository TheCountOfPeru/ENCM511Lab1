/*
 * Lab1_Tasks.cpp
 *
 *  Created on: Sep 24, 2018
 *      Author: Jonathan
 */
#include "Lab1_prototypes.h"
#include <stdio.h>
#include "ProjectUtilities.h"

#define TIME_Adjust_REB_LED 1
//#define PERIOD_LAB1_Task_FLASH_REB_LED3 250
//#define PERIOD_LAB1_Task_FLASH_REB_LED2 500
//#define PERIOD_LAB1_Task_FLASH_REB_SWITCH_PROBLEM 100
#define LED0_BITPATTERN 0x0001//unused
#define LED1_BITPATTERN 0x0002//unused
#define LED2_BITPATTERN 0x0004
#define LED3_BITPATTERN 0x0008

typedef unsigned short int LED_BITS;//0x0000
static LED_BITS current_REB_LED = 0; //16 bit LED assumed

void Initialize_REB_LED(void)
{
	LED_BITS bitmask = 0x01;
	for(int count =0;count<16;count++)
	{
		Adjust_REB_LED(bitmask, 0);
		bitmask = bitmask << 1;
	}
	Reset_Master_Clock();
}
static void Adjust_REB_LED(LED_BITS whichLED, int LED_State)
{
	if(LED_State == 1)//Turn on
		current_REB_LED = current_REB_LED | whichLED;
	else if(LED_State == 0)//Turn off
		current_REB_LED = current_REB_LED & ~whichLED;
	//current_REB_LED = current_REB_LED | whichLED; slide 25
	//current_REB_LED = whichLED;
	printf("In Adjust_REB_LED 0x%2x\n", whichLED);
	//printf("In Adjust_REB_LED 0x%2x\n", current_REB_LED);
	TaskExecutionTimePasses(TIME_Adjust_REB_LED);
}

void ShowValueAsBinary(unsigned short int value)
{
	unsigned short int bitMask = 0x8000;
	for(int count = 0; count < 16; count++){
		if((value & bitMask) == 0)
			printf(".");
		else
			printf("1");
		bitMask = bitMask >> 1;
	}
}

void Display_Current_REB_LED_BITS(void)
{
	TimeStamp();
	//printf("In Display_Current_REB_LED_BITS\n");
	printf(" Current REB LED ");
	ShowValueAsBinary(current_REB_LED); printf("\n");
}
void LAB1_Task_FLASH_REB_LED3(void)
{
	TimeStamp();
	printf("In LAB1_Task_FLASH_REB_LED3\n");
	//Adjust_REB_LED(3);
	static unsigned short int LED3_State = 0;
	static unsigned short int next_LED3State = 0;
	switch(LED3_State){
		case 0://if OFF turn ON
			Adjust_REB_LED(LED3_BITPATTERN, 1);
			next_LED3State = 1;
			break;
		case 1://if ON turn OFF
			Adjust_REB_LED(LED3_BITPATTERN, 0);
			next_LED3State = 0;
			break;
		default: printf("WRONG STATE\n");
	}
	LED3_State = next_LED3State;
	//WaitABit(250);
}
void LAB1_Task_FLASH_REB_LED2(void)
{
	TimeStamp();
	printf("In LAB1_Task_FLASH_REB_LED2\n");

	static unsigned short int LED2_State = 0;
	static unsigned short int next_LED2State = 0;
	//Adjust_REB_LED(LED2_BITPATTERN, 1);
	switch(LED2_State){
			case 0://if OFF turn ON
				Adjust_REB_LED(LED2_BITPATTERN, 1);
				next_LED2State = 1;
				break;
			case 1://if ON turn OFF
				Adjust_REB_LED(LED2_BITPATTERN, 0);
				next_LED2State = 0;
				break;
			default: printf("WRONG STATE\n");
		}
		LED2_State = next_LED2State;
	//WaitABit(500);
}
void LAB1_Task_REB_SWITCH_PROBLEM(void)
{
	TimeStamp();
		printf("In LAB1_Task_REB_SWITCH_PROBLEM\n");
}

