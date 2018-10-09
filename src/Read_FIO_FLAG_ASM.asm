/*
 * Read_FIO_FLAG_ASM.asm
 *
 *  Created on: Oct 8, 2018
 *      Author: Jonathan
 */
#include <blackfin.h>
#define BIT6_PATTERN 0x40

.section program;

.global _Read_FIO_FLAG_ASM; //   extern “C”  unsigned short int Read_FIO_FLAG_ASM(void) {

_Read_FIO_FLAG_ASM:

#define portPattern_R0 R0              //    unsigned short int portPattern = *pFIO_FLAG;
#define portPointer_P0 P0

P0.H = hi(FIO_FLAG);      
P0.L = lo(FIO_FLAG);    // Set pointer to FIO_FLAG memory location

portPattern_R0 = W[portPointer_P0] (Z);         // Read 16 bit value from 16 bit port
												//    and extend with zeros to become 32 bits
												// Return value already in R0                             
											    //     return portPattern ;
#define temp_R1 R1

temp_R1 = BIT6_PATTERN;
portPattern_R0 = temp_R1 & portPattern_R0;		//only need bit 6									    										    
_Read_FIO_FLAG_ASM.END:                                   
	RTS;

