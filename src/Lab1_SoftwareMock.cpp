/*****************************************************************************
 * Lab1_SoftwareMock.cpp
 *****************************************************************************/

#include <sys/platform.h>
#include <stdio.h>
#include "adi_initialize.h"
#include "Lab1_SoftwareMock.h"
#include "LineTVDisplay.h"
#include "ProjectUtilities.h"

/** 
 * If you want to use command program arguments, then place them in the following string. 
 */
char __argv_string[] = "";

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

		TVLINE_8BITVALUE nextLine = 0;
		unsigned long int softwareCounter = 0;
		bool softwareCounterError = false;
		while(softwareCounterError == false & notQuit){
			nextLine = GetNext1LineTV_Value();
			Display1LineTV_Value_Software(nextLine);
			Display1LineTV_Value_Hardware(nextLine);
			softwareCounter++;
			if(softwareCounter>=6)
				softwareCounterError=true;
			WaitABit(30);
		}

		printf("Success! Exited main loop %d\n", softwareCounter);
		return 0;
}

