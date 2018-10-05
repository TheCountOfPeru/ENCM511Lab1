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
	printf("***WAITED %d", milliSecs);
	timeNowMillisecs = timeNowMillisecs + milliSecs;
	printf(" - timeNowMillisecs %d\n", timeNowMillisecs);
}

void WaitUntilTimeEquals(unsigned long int milliSecs)
{
	//milliSecs - timeNowMillisecs need to know how much time to wait after doing tasks
	WaitABit(milliSecs - timeNowMillisecs);
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
