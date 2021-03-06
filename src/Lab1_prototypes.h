/*
 * Lab1_prototypes.h
 *
 *  Created on: Sep 24, 2018
 *      Author: Jonathan
 */

#ifndef LAB1_PROTOTYPES_H_
#define LAB1_PROTOTYPES_H_

void Initialize_REB_LED(void);
static void Adjust_REB_LED(unsigned short int whichLED, int LED_State);
void LAB1_Task_FLASH_REB_LED3(void);
void Display_Current_REB_LED_BITS(void);
void LAB1_Task_FLASH_REB_LED2(void);
void LAB1_Task_REB_SWITCH_PROBLEM(void);

#endif /* LAB1_PROTOTYPES_H_ */
