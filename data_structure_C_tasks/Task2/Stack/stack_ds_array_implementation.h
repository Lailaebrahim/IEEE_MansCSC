/**
 ******************************************************************************
 * @file           : stack_ds_array_implementation.h
 * @author         : Laila Ebrahim
 * @brief          : definition of data types used to implement stack and declaring functions defined in stack_ds_array_implementation.c

 ******************************************************************************
 */

#ifndef _STACK_DS_ARRAY_IMPLEMENTATION_H
#define _STACK_DS_ARRAY_IMPLEMENTATION_H


/* ********************** Includes Section Start ********************** */
#include "std_types.h"
/* ********************** Includes Section End   ********************** */



/* ********************** Macros Definition Section Start  ********************** */
#define  TOP_INIT -1
#define  STACK_MAX_SIZE 5
//#define  STACK_DEBUG
/* ********************** Macros Definition Section End   ********************** */



/* ********************** User defined types Definition Section Start  ********************** */
typedef struct stack_ds
{
    sint32_t stack_pt_top;
    uint32_t data[STACK_MAX_SIZE];

}stack_ds_t;

typedef enum stack_status{
    STACK_EMPTY, // zero
    STACK_FULL,  // one
    STACK_NOT_FULL, //two
}stack_status_t;
/* ********************** User defined types Definition Section End  ********************** */

/* ********************** Functions Declarations Section Start ******* */

/**
  * @brief  this function initialize stack.
  * @param  my_stack pointer to stack
  * @retval Status returned to check if any errors happen initialization
  */
return_status_t  stack_init( stack_ds_t * my_stack );

/**
  * @brief  this function pushes data into stack.
  * @param  my_stack pointer to stack
  * @param  data to be pushed to stack
  * @retval Status returned to check if any errors happen in push
  */
return_status_t  stack_push( stack_ds_t * my_stack, uint32_t data );

/**
  * @brief  this function popes data out of stack.
  * @param  my_stack pointer to stack
  * @param  pop_data pointer to the location of variable where poped data is stored
  * @retval Status returned to check if any errors happen in pop
  */
return_status_t  stack_pop( stack_ds_t * my_stack, uint32_t * pop_data );

/**
  * @brief  this function returns value of top of stack.
  * @param  my_stack pointer to stack
  * @param  pop_data pointer to the location of variable where top value is stored
  * @retval Status returned to check if any errors happen in returning top
  */
return_status_t  stack_top( stack_ds_t * my_stack, uint32_t * pop_data );


/**
  * @brief  this function prints data of stack.
  * @param  my_stack pointer to stack
  * @retval Status returned to check if any errors happen in displaying stack
  */
return_status_t stack_display(stack_ds_t *my_stack );


/**
  * @brief  this function gets the size of stack "number of elements in stack"
  * @param  my_stack pointer to stack
  * @param  stack_no_elements pointer to the location of variable where size value is stored
  * @retval Status returned to check if any errors happen in getting size
  */
return_status_t stack_size(stack_ds_t *my_stack , uint32_t *stack_no_elements);


/* ********************** Functions Declarations Section Start ******* */
#endif
