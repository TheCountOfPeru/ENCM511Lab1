/*
 * 1LineTVDisplay.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: Jonathan
 */
#include <stdio.h>
#include "ProjectUtilities.h"
#include "LineTVDisplay.h"


void Initialize_1LineTVDisplay(void){
	TimeStamp();
	printf("In the function: Initialize_1LineTVDisplay\n");
}

TVLINE_8BITVALUE GetNext1LineTV_Value(void) {
	TimeStamp();
	printf("In GetNext1LineTV_Value()\n");
	return GARBAGE_TV_Value;
}

void Display1LineTV_Value_Software(TVLINE_8BITVALUE nextline){
	TimeStamp();
	printf("%5d: In Display1LineTV_Value_Software()\n");
}
void Display1LineTV_Value_Hardware(TVLINE_8BITVALUE nextline){
	TimeStamp();
	printf("%5d: In Display1LineTV_Value_Hardware()\n");
}

void Lab0_Task1LineTV()
{
	TimeStamp();
	printf("%5d: In Lab0_Task1LineTV()\n");
}
