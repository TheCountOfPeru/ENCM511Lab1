/*
 * 1LineTVDisplay.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: Jonathan
 */
#include <stdio.h>
#include "ProjectUtilities.h"
#include "LineTVDisplay.h"

#define Y_IN_HEX 0x00,0xF0,0x1F,0x1F,0xF0,0x00
#define E_IN_HEX 0x00,0x91,0x91,0x91,0xFF,0x00

#define NUMBEROFLINES_TVDISPLAY 18

void Initialize_1LineTVDisplay(void){
	TimeStamp();
	printf("In the function: Initialize_1LineTVDisplay\n");
}

void DisplayBinary2(TVLINE_8BITVALUE nextline)
{
	TVLINE_8BITVALUE value = nextline;
	unsigned short int bitMask = 0x80;
		for(int count = 0; count < 8; count++){
			if((value & bitMask) == 0)
				printf(" ");
			else
				printf("1");
			bitMask = bitMask >> 1;
		}
	printf(" %%0x %x\n",nextline);
}

TVLINE_8BITVALUE GetNext1LineTV_Value(void) {
	TimeStamp();
	printf("In GetNext1LineTV_Value()\n");
	TVLINE_8BITVALUE fullDisplay[NUMBEROFLINES_TVDISPLAY] = {Y_IN_HEX, E_IN_HEX, E_IN_HEX};//{0x00,0xFF,0x10,0x10,0xFF,0x00};
		//use this to control which value returned
		static unsigned int index = 0;
		if(index == NUMBEROFLINES_TVDISPLAY){//restart index after a certain value
			index = 0;
			printf("\n");
		}
		TVLINE_8BITVALUE nextValue = fullDisplay[index];
		//for initial test - show the value being returned using hex
		//printf("returning fullDisplay[%d] %%0x%x \n", fullDisplay[index],index);
		index++;
		return nextValue;
}

void Display1LineTV_Value_Software(TVLINE_8BITVALUE nextline){
	TimeStamp();
	printf("In Display1LineTV_Value_Software()\n");
	DisplayBinary2(nextline);
}
void Display1LineTV_Value_Hardware(TVLINE_8BITVALUE nextline){
	TimeStamp();
	printf("In Display1LineTV_Value_Hardware()\n");
}

void Lab0_Task1LineTV()
{
	TimeStamp();
	//printf("%5d: In Lab0_Task1LineTV()\n");
	printf("In Lab0_Task1LineTV()\n");
	static TVLINE_8BITVALUE nextLine = 0;
	nextLine = GetNext1LineTV_Value();
	Display1LineTV_Value_Software(nextLine);
	//Display1LineTV_Value_Hardware(nextLine);
}
