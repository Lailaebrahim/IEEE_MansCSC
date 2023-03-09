/**
 ******************************************************************************
 * @file           : queue_ds_array_implementation.c
 * @author         : Laila Ebrahim
 * @brief          : implementing operations that can be done on queue DS implemented with dynamically allocated array
                     operations are:
                     - Main operations:
                     Enqueue_Element
                     Dequeue_Element
                     Queue_Rear
                     Queue_Front
                     - Helping operations:
                     Create_Queue
                     Destory_Queue
 ******************************************************************************
 */

 /* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include<stdlib.h>
#include "queue_ds_array_implementation.h"
/* ********************** Includes Section End   ********************** */


/* ********************** Functions Definitions Section Start ******* */

Queue_t *Create_Queue(uint32_t  max_size , Queue_return_status_t *status ){
    Queue_t *queue = (Queue_t *)malloc(sizeof(Queue_t));
    if( NULL == queue){
        *status = Queue_NULL_POINTER;
        queue = NULL;
    }
    else{
     queue->Queue_Array = (void **) calloc( max_size , sizeof(void*));
    if( NULL == (queue->Queue_Array)){
        *status = Queue_NULL_POINTER;
        queue = NULL;
    }
    else{
     queue->Max_Array_Size = max_size;
     queue->Element_Count = 0;
     queue->Front = -1;
     queue->Rear = -1;

    *status = Queue_OK;
    }

    }
    return queue;
}

Queue_return_status_t Enqueue_Element(Queue_t *my_queue , void * element){
    if(NULL == my_queue ||NULL == element ){
        return Queue_NULL_POINTER;
    }
    else{
        if(my_queue->Element_Count == my_queue->Max_Array_Size){
            return  Queue_FULL;
        }
        else{
            if(my_queue->Front == -1){
                my_queue->Front = 0;
            }
            /*or if after inc rear it become equal to max_size and condition of (no. of elementa in queue is less than  max_size ) is checked above
            then force rear to be zero
            (my_queue->Rear)++;
            if(my_queue->Rear == my_queue->Max_Array_Size){
                my_queue->Rear = 0;
            }*/
            my_queue->Rear = (my_queue->Rear +1 ) % (my_queue->Max_Array_Size); // circular queue
            my_queue->Queue_Array[my_queue->Rear] = element;
            (my_queue->Element_Count)++;
            return Queue_OK;
        }


    }
}

void *Dequeue_Element(Queue_t *my_queue , Queue_return_status_t *status){
  void *Dequeued_element = NULL;
  if(NULL == my_queue ||NULL == status ){
        *status = Queue_NULL_POINTER;
    }
    else{

       if(!(my_queue->Element_Count) ){
         *status = Queue_EMPTY;
         Dequeued_element = NULL;
       }
       else{

        Dequeued_element = my_queue->Queue_Array[my_queue->Front] ;

        if( my_queue->Front == my_queue->Rear ){

            my_queue->Front = -1;
            my_queue->Rear = -1;

        }
        else{
        my_queue->Front = (my_queue->Front +1 ) % (my_queue->Max_Array_Size);
        }

        (my_queue->Element_Count)--;

        *status = Queue_OK;
       }}
  return Dequeued_element;
}
void * Queue_Rear(Queue_t *my_queue , Queue_return_status_t *status){
    void *rear_element = NULL;

    if(NULL == my_queue ||NULL == status ){
            *status = Queue_NULL_POINTER;
        }
     else{
          if(!my_queue->Element_Count){
         *status = Queue_EMPTY;
          rear_element = NULL;
       }
       else{
        rear_element = my_queue->Queue_Array[my_queue->Rear] ;
        *status = Queue_OK;
       }
    }
    return rear_element;
}
void * Queue_Front(Queue_t *my_queue , Queue_return_status_t *status){
   void *front_element = NULL;

    if(NULL == my_queue ||NULL == status ){
            *status = Queue_NULL_POINTER;
        }
     else{
          if(!my_queue->Element_Count){
         *status = Queue_EMPTY;
          front_element = NULL;
       }
       else{
        front_element = my_queue->Queue_Array[my_queue->Front] ;
        *status = Queue_OK;
       }

    }
    return front_element;
}
Queue_return_status_t  Destory_Queue(Queue_t * my_queue ){

    if(NULL == my_queue){
            return Queue_NULL_POINTER;
        }
     else{
         free( my_queue->Queue_Array);
         free(my_queue);

       return Queue_OK;
    }
}

/* ********************** Functions Definitions Section Start ******* */
