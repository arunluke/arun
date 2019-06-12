/*
 * platform.h
 *
 *  Created on: 10-Jun-2019
 *      Author: ARUN
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

typedef unsigned char       boolean;

typedef unsigned char       uint8;                     /* This standard AUTOSAR type shall be of 8 bit unsigned */
typedef unsigned short      uint16;                    /* This standard AUTOSAR type shall be of 16 bit unsigned */
typedef unsigned long       uint32;                    /* This standard AUTOSAR type shall be of 32 bit unsigned */
typedef unsigned long long  uint64;                    /* This standard AUTOSAR type shall be of 64 bit unsigned */
typedef signed   char       sint8;                     /* This standard AUTOSAR type shall be of 8 bit signed */
typedef signed   short      sint16;                    /* This standard AUTOSAR type shall be of 16 bit signed */
typedef signed   long       sint32;                    /* This standard AUTOSAR type shall be of 32 bit signed */
typedef signed   long long  sint64;                    /* This standard AUTOSAR type shall be of 64 bit signed */

typedef unsigned char       uint8_least ;
typedef unsigned short      uint16_least;
typedef unsigned long       uint32_least;
typedef signed char         sint8_least;
typedef signed short        sint16_least;
typedef signed long         sint32_least;
typedef float               float32;
typedef double              float64;

#define CPU_TYPE_64                                      /* CPU TYPE*/
#define MSB_FIRST  1                                    /* BIT ORDERING ((Register)*/
#define LSB_FIRST  1
#define HIGH_BYTE_FIRST 0                               /* Byte Ordering (Memory) */
#define LOW_BYTE_FIRST 1
#ifndef TRUE                                            /* Boolean */
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif




#endif/* PLATFORM_TYPES_H_ */
