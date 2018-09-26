/*
 * LineTVDisplay.h
 *
 *  Created on: Sep 9, 2018
 *      Author: Jonathan
 */

#ifndef LINETVDISPLAY_H_
#define LINETVDISPLAY_H_
	typedef unsigned char TVLINE_8BITVALUE;
	#define GARBAGE_TV_Value 0xFF
	void Initialize_1LineTVDisplay(void);
	TVLINE_8BITVALUE GetNext1LineTV_Value();
	void Display1LineTV_Value_Software(TVLINE_8BITVALUE nextline);
	void Display1LineTV_Value_Hardware(TVLINE_8BITVALUE nextline);
	void Lab0_Task1LineTV();
#endif /* LINETVDISPLAY_H_ */
