/*
 * Lab1_Tasks.cpp
 *
 *  Created on: Sep 24, 2018
 *      Author: Jonathan
 */
#include "Lab1_prototypes.h"
#include <stdio.h>
#include "ProjectUtilities.h"

static void Adjust_REB_LED(unsigned int whichLED)
{
	printf("In Adjust_REB_LED %d\n", whichLED);
}

void LAB1_Task_FLASH_REB_LED3(void)
{
	TimeStamp();
	printf("In LAB1_Task_FLASH_REB_LED3\n");
	WaitABit(250);
}

void Display_Current_REB_LED_BITS(void)
{
	TimeStamp();
	printf("In Display_Current_REB_LED_BITS\n");
}

void LAB1_Task_FLASH_REB_LED2(void)
{
	TimeStamp();
	printf("In LAB1_Task_FLASH_REB_LED2\n");
	Adjust_REB_LED(2);
}

