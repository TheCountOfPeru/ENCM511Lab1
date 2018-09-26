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
	printf("Waited timeNowMillisecs %d\n", timeNowMillisecs);
}

unsigned long int TimeStamp(void)
{
	printf("TS%4d:",timeNowMillisecs);
	return timeNowMillisecs;
}
