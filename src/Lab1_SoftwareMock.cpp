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

//#define DO_Lab0_Task_1LineTV false
//#define DO_LAB1_Task_FLASH_REB_LED3 true
//#define DO_LAB1_Task_FLASH_REB_LED2 true
//#define DO_LAB1_Task_REB_SWITCH_PROBLEM false

#define MASTER_CLOCK_TICK_100 100

#define PERIOD_Lab0_Task_1LineTV 50
#define PERIOD_LAB1_Task_FLASH_REB_LED3 250
#define PERIOD_LAB1_Task_FLASH_REB_LED2 500
#define PERIOD_LAB1_Task_FLASH_REB_SWITCH_PROBLEM 100

//When should the task run the first time
#define DELAY_Lab0_Task_1LineTV 0
#define DELAY_LAB1_Task_FLASH_REB_LED3 0
#define DELAY_LAB1_Task_FLASH_REB_LED2 0
#define DELAY_LAB1_Task_FLASH_REB_SWITCH_PROBLEM 0

//Functions responsible for timing
bool DO_Lab0_Task_1LineTV(void) {return false;}
bool DO_LAB1_Task_FLASH_REB_LED3(void) {
	static unsigned int nextTimeToRun = DELAY_LAB1_Task_FLASH_REB_LED3;
	if(TimeStampBlank() < nextTimeToRun){
		//printf("NO DO_LAB1_Task_FLASH_REB_LED3\n");
		return false;
	}else{
		//printf("RUN DO_LAB1_Task_FLASH_REB_LED3\n");
		nextTimeToRun = nextTimeToRun + PERIOD_LAB1_Task_FLASH_REB_LED3;
		return true;
	}
}
bool DO_LAB1_Task_FLASH_REB_LED2(void) {
	/*
	static unsigned int nextTimeToRun = DELAY_LAB1_Task_FLASH_REB_LED2;
if(TimeStampBlank() < nextTimeToRun){
	//printf("NO DO_LAB1_Task_FLASH_REB_LED2\n");
	return false;
}else{
	//printf("RUN DO_LAB1_Task_FLASH_REB_LED2\n");
	nextTimeToRun = nextTimeToRun + PERIOD_LAB1_Task_FLASH_REB_LED2;
	return true;
}*/
	return true;
}
bool DO_LAB1_Task_REB_SWITCH_PROBLEM(void) {return false;}

int main(int argc, char *argv[])
{
	/**
	 * Initialize managed drivers and/or services that have been added to 
	 * the project.
	 * @return zero on success 
	 */
	adi_initComponents();
	Initialize_1LineTVDisplay();
	Initialize_REB_LED();
		bool notQuit = true;
		//TVLINE_8BITVALUE nextLine = 0;
		unsigned long int softwareCounter = 0;
		bool softwareCounterError = false;
		while(softwareCounterError == (false & notQuit)){
			//printf("\n"); WaitABit(MASTER_CLOCK_TICK_100);//Master Clock TIC = 50 milliSecs
			printf("\n"); unsigned long int timeStartLoop = TimeNow();
				if(DO_Lab0_Task_1LineTV())
					Lab0_Task1LineTV();

//Plan to test one lab task at a time ATM
				if(DO_LAB1_Task_FLASH_REB_LED3())
					LAB1_Task_FLASH_REB_LED3();

				if(DO_LAB1_Task_FLASH_REB_LED2())
					LAB1_Task_FLASH_REB_LED2();

				if(DO_LAB1_Task_REB_SWITCH_PROBLEM())
					LAB1_Task_REB_SWITCH_PROBLEM();

				//Lab2_Tasks();

				Display_Current_REB_LED_BITS();
			softwareCounter++;
			if(softwareCounter>5)
			{
				softwareCounterError=true;
			}
			WaitUntilTimeEquals(timeStartLoop + MASTER_CLOCK_TICK_100);
			//WaitABit(30);
		}

		printf("Success! Exited main loop %d\n", softwareCounter);
		return 0;
}

