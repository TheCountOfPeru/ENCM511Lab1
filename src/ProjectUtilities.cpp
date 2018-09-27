/*
 * ProjectUtilities.cpp
 *
 *  Created on: Sep 23, 2018
 *      Author: Jonathan
 */
#include "ProjectUtilities.h"
#include <stdio.h>
static unsigned long int timeNowMillisecs = 0;

void WaitABit(unsigned long int milliSecs)
{
	timeNowMillisecs = timeNowMillisecs + milliSecs;
	printf("***WAITED timeNowMillisecs %d\n", timeNowMillisecs);
}

void WaitUntilTimeEquals(unsigned long int milliSecs)
{
	printf("***WAITED %d",milliSecs);
	timeNowMillisecs = milliSecs;//not sure about this  part its not correct
	printf(" - timeNowMillisecs %d\n", milliSecs, timeNowMillisecs);

}

unsigned long int TimeNow()
{
	return timeNowMillisecs;
}

unsigned long int TimeStamp(void)
{
	printf("TS%4d:", timeNowMillisecs);
	return timeNowMillisecs;
}

unsigned long int TimeStampBlank(void)
{
	//printf("TS%4d:", timeNowMillisecs);
	return timeNowMillisecs;
}
unsigned long int TaskExecutionTimePasses(unsigned short int taskTime)
{
	timeNowMillisecs = timeNowMillisecs + taskTime;
	return timeNowMillisecs;
}
void Reset_Master_Clock(void)
{
	timeNowMillisecs = 0;
}
