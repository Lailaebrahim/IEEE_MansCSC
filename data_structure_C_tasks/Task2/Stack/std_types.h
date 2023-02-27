/**
 ******************************************************************************
 * @file           : std_types.h
 * @author         : Laila Ebrahim
 * @brief          : definition of data types
 ******************************************************************************
 */


#ifndef _STD_TYPES_H
#define  _STD_TYPES_H

/* ********************** Macros Definition Section Start  ********************** */
#define ZERO_INIT 0
#define ZERO 0
/* ********************** Macros Definition Section End   ********************** */


/* ********************** User defined types Definition Section Start  ********************** */
typedef unsigned char  uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int   uint32_t;
typedef unsigned long  long uint64_t;

typedef signed char      sint8_t;
typedef signed short     sint16_t;
typedef signed int       sint32_t;
typedef signed long long sint64_t;

typedef enum return_status{
    R_NOK,
    R_OK,
}return_status_t;
/* ********************** User defined types Definition Section End  ********************** */

#endif
