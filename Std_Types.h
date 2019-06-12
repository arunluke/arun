/*
 * stdtypes.h
 *
 *  Created on: 10-Jun-2019
 *      Author: ARUN
 */
/* The Standard Type header files */
#ifndef STD_TYPES_H_
#define STD_TYPES_H_
/* INCLUDES */
#include "Platform_Types.h"
#include "Compiler.h"

#ifndef STATUSTYPEDEFINED                              /*standard API return type which is shared between the RTE and the BSW modules*/
#define STATUSTYPEDEFINED
#define E_OK 0x00u
#endif
#define E_NOT_OK 0x01u

typedef struct std{                                    /*  version of a BSW module */

	uint16 vendorID;
    uint16 moduleID;
	uint8 sw_major_version;
	uint8 sw_minor_version ;
	uint8 sw_patch_version;

}
Std_VersionInfoType ;



#define STD_HIGH 0x01u                                   /* Physical state 5V or 3.3V */
#define STD_LOW 0x00u                                    /* Physical state 0V */

#define STD_ACTIVE 0x01u                                 /* Logical state active */
#define STD_IDLE 0x00u                                   /* Logical state idle */

#define STD_ON 0x01u;
#define STD_OFF 0x00u;

#endif /* STD_TYPES_H_ */
