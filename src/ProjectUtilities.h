/*
 * ProjectUtilities.h
 *
 *  Created on: Sep 23, 2018
 *      Author: Jonathan
 */

#ifndef PROJECTUTILITIES_H_
#define PROJECTUTILITIES_H_

void WaitABit(unsigned long int milliSecs);
void WaitUntilTimeEquals(unsigned long int milliSecs);
unsigned long int TimeNow(void);
unsigned long int TimeStamp(void);
unsigned long int TimeStampBlank(void);
unsigned long int TaskExecutionTimePasses(unsigned short int taskTime);
void Reset_Master_Clock(void);
#endif /* PROJECTUTILITIES_H_ */
