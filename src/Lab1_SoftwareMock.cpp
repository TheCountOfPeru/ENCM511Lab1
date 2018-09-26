/*****************************************************************************
 * Lab1_SoftwareMock.cpp
 *****************************************************************************/

#include <sys/platform.h>
#include <stdio.h>
#include "adi_initialize.h"
#include "Lab1_SoftwareMock.h"
#include "LineTVDisplay.h"
#include "ProjectUtilities.h"
#include "Lab1_prototypes.h"

/** 
 * If you want to use command program arguments, then place them in the following string. 
 */
char __argv_string[] = "";

#define DO_LAB0_TASK true;
#define DO_LAB1_Task_FLASH_REB_LED3 false;
#define DO_LAB1_Task_FLASH_REB_LED2 false;
#define DO_LAB1_Task_REB_SWITCH_PROBLEM false;

int main(int argc, char *argv[])
{
	/**
	 * Initialize managed drivers and/or services that have been added to 
	 * the project.
	 * @return zero on success 
	 */
	adi_initComponents();
	
	/* Begin adding your custom code here */
	Initialize_1LineTVDisplay();

		bool notQuit = true;

		//TVLINE_8BITVALUE nextLine = 0;
		unsigned long int softwareCounter = 0;
		bool softwareCounterError = false;
		while(softwareCounterError == false & notQuit){
			Lab0_Task1LineTV();

//			LAB1_Task_FLASH_REB_LED3();
//			LAB1_Task_FLASH_REB_LED2();
//			LAB1_Task_REB_SWITCH_PROBLEM();

			softwareCounter++;
			if(softwareCounter>5)
				softwareCounterError=true;
			WaitABit(30);
		}

		printf("Success! Exited main loop %d\n", softwareCounter);
		return 0;
}

