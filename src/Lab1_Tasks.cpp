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

static unsigned short int current_REB_LED = 0; //16 bit LED assumed

static void Adjust_REB_LED(unsigned int whichLED)
{
	current_REB_LED = whichLED;
	printf("In Adjust_REB_LED 0X%2x\n", whichLED);
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
	Adjust_REB_LED(3);
	//WaitABit(250);
}
void LAB1_Task_FLASH_REB_LED2(void)
{
	TimeStamp();
	printf("In LAB1_Task_FLASH_REB_LED2\n");
	Adjust_REB_LED(2);
	//WaitABit(500);
}
void LAB1_Task_REB_SWITCH_PROBLEM(void)
{
	TimeStamp();
		printf("In LAB1_Task_REB_SWITCH_PROBLEM\n");
}

