/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Laila Ebrahim
 * @brief          : a program to use operations that can be done on queue data structure implemented with dynamically allocated array
 ******************************************************************************
 */

 /* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include "queue_ds_array_implementation.h"
/* ********************** Includes Section End   ********************** */


/* ********************** Global definition Section Start ************** */
uint32_t QueueSize = 0;
Queue_t *my_queue1 = NULL;
uint32_t enqueue_value   = ZERO_INIT ;
void *dequeue_value_ptr  = NULL ;
void *enqueue_value_ptr  = &enqueue_value;
void *queue_front_value  = NULL ;
void *queue_rear_value   = ZERO_INIT ;
/* ******************** Global definition Section End ****************** */


/* ********************    Main call Section Start    ****************** */
int main(){
    uint8_t choice = ZERO_INIT;

    Queue_return_status_t ret_status = Queue_NOK ;
    printf("Enter Queue Max. size:\n");
    scanf("%d",&QueueSize);
    my_queue1 = Create_Queue(QueueSize , &ret_status );
    if( Queue_NOK == ret_status ){
    printf("Queue creation FAILD \n");
    }
    else{
    printf("choose operation to do :\n1-Enqueue a value\n2-Dequeue\n3-Get Front \n4-Get Rear\n5-Destroy Queue\n6-to exit\n");
    scanf("%i", &choice);
    while (6 != choice)
    {

        switch (choice)
        {
            case 1:
            printf("Enter value to Enqueue: ");
            scanf("%i", &enqueue_value);
            ret_status = Enqueue_Element( my_queue1 , enqueue_value_ptr);
            if (Queue_NULL_POINTER == ret_status)
            {
                printf("Queue enqueue failed\n");
            }
            else if(Queue_FULL == ret_status ){
                printf("Queue overflow!!!\n");
            }
            else
            {
                printf("Value %i is enqueued and current rear value is %i \n", enqueue_value , (*my_queue1).Rear);
            }
            break;
            case 2:
            dequeue_value_ptr = Dequeue_Element(my_queue1 ,&ret_status);
            if(Queue_NULL_POINTER == ret_status)
            {
                printf("Dequeue failed\n");
            }
            else if(Queue_EMPTY == ret_status ){
                printf("Queue underflow!!!\n");
            }
            else
            {
               if(NULL == dequeue_value_ptr){
                printf("Dequeue failed \n");
               }
               else{
                 printf("Value %i is dequeued and current front value is %i \n", *((uint32_t*)dequeue_value_ptr) , (*my_queue1).Front);
               }
            }
            break;
            case 3:
            queue_front_value = Queue_Front(my_queue1 , &ret_status);
            if(Queue_NULL_POINTER == ret_status)
            {
                printf("failed to get front!\n");
            }
            else if(Queue_EMPTY == ret_status ){
                printf("Queue EMPTY!\n");
            }
            else
            {
                if(NULL ==  queue_front_value){
                printf("failed to get front!\n");
               }
               else{
                 printf("Value %i is at front and it's index is %i \n", *((uint32_t*)queue_front_value) , (*my_queue1).Front);
               }
            }
            break;
            case 4:
            queue_rear_value = Queue_Rear(my_queue1 , &ret_status);
            if(Queue_NULL_POINTER == ret_status)
            {
                printf("failed to get rear!\n");
            }
            else if(Queue_EMPTY == ret_status ){
                printf("Queue EMPTY!\n");
            }
            else
            {
                if(NULL == queue_rear_value){
                printf("failed to get rear!\n");
               }
               else{
                 printf("Value %i is at rear and it's index is %i \n", *((uint32_t*)queue_rear_value) , (*my_queue1).Rear);
               }
            }
            break;
            case 5:
            if(Queue_NULL_POINTER == ret_status)
            {
                printf("failed to get rear!\n");
            }
            else{
                printf("Queue is destroyed successfully!\n");
            }
            break;
            default:
            printf("INVALID CHOICE\n");
            break;
        }
    printf("choose operation to do :\n1-Enqueue a value\n2-Dequeue\n3-Get Front \n4-Get Rear\n5-Destroy Queue\n6-to exit\n");
    scanf("%i", &choice);


  }


    }

    return 0;
}
/* ********************    Main call Section End    ****************** */
