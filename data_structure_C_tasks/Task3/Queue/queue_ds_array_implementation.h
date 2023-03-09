/**
 ******************************************************************************
 * @file           : queue_ds_array_implementation.h
 * @author         : Laila Ebrahim
 * @brief          : definition of data types used to implement queue and declaring functions defined in queue_ds_array_implementation.c

 ******************************************************************************
 */


#ifndef _QUEUE_DS_ARRAY_IMPLEMENTATION_H_
#define _QUEUE_DS_ARRAY_IMPLEMENTATION_H_


/* ********************** Includes Section Start ********************** */
#include "std_types.h"
/* ********************** Includes Section End   ********************** */


/* ********************** Macros Definition Section Start  ********************** */
#define ZERO_INIT 0
/* ********************** Macros Definition Section End   ********************** */


/* ********************** User defined types Definition Section Start  **********************/

typedef struct {
    void ** Queue_Array; /*pointer to pointer because i need a pointer which points to the first element of the array while
    the array is array of void pointers so each pointer can point to different data type */
    uint32_t Max_Array_Size;
    uint32_t Element_Count;
    sint32_t Front;
    sint32_t Rear;
}Queue_t;


typedef enum{
    Queue_NOK,
    Queue_OK,
    Queue_FULL,
    Queue_EMPTY,
    Queue_NULL_POINTER

}Queue_return_status_t;

/* ********************** User defined types Definition Section End  ********************** */

/* ********************** Functions Declarations Section Start       ********************** */


/**
  * @brief  this function Create queue by dynamic allocation of stack struct and array of void pointers.
  * @param  max_size variable store max size of elements  can be stored in queue chosen by user.
  * @param  status pointer to variable to store status to check if any errors happen in creating queue.
  * @retval created queue.
  */
Queue_t *Create_Queue(uint32_t  max_size , Queue_return_status_t *status );


/**
  * @brief  this function enqueue data into queue.
  * @param  my_queue pointer to the queue .
  * @param  element pointer to variable that store value to be enqueued.
  * @retval status to check if any errors happen in enqueue.
  */
Queue_return_status_t Enqueue_Element(Queue_t *my_queue , void *element);

/**
  * @brief  this function dequeue data from queue.
  * @param  my_queue pointer to the queue .
  * @param  status pointer to variable to store status to check if any errors happen in dequeue.
  * @retval void pointer to return dequeued element.
  */
void * Dequeue_Element(Queue_t *my_queue , Queue_return_status_t *status);

/**
  * @brief  this function get rear value.
  * @param  my_queue pointer to the queue .
  * @param  status pointer to variable to store status to check if any errors happen in getting rear.
  * @retval void pointer to return rear value.
  */
void * Queue_Rear(Queue_t *my_queue , Queue_return_status_t *status);

/**
  * @brief  this function get front value.
  * @param  my_queue pointer to the queue .
  * @param  status pointer to variable to store status to check if any errors happen in getting front.
  * @retval void pointer to return front value.
  */
void * Queue_Front(Queue_t *my_queue , Queue_return_status_t *status);

/**
  * @brief  this function destroy queue.
  * @param  my_queue pointer to the queue ..
  * @retval status to check if any errors happen in destroying queue.
  */
Queue_return_status_t  Destory_Queue(Queue_t *my_queue );

/* ********************** Functions Declarations Section Start       ********************** */




#endif
