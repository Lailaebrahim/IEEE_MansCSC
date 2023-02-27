/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Laila Ebrahim
 * @brief          : a program to use operations that can be done on stack data structure implemented with array
 ******************************************************************************
 */


/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include  "stack_ds_array_implementation.h"
/* ********************** Includes Section End   ********************** */


/* ********************** Global definition Section Start ************** */
stack_ds_t my_stack1;
return_status_t ret = R_NOK;
uint32_t stack_poped_value  = ZERO_INIT ;
uint32_t stack_top_value    = ZERO_INIT ;
uint32_t stack_size_value   = ZERO_INIT ;
uint32_t stack_pushed_value = ZERO_INIT ;
/* ******************** Global definition Section End ****************** */


/* ********************    Main call Section Start    ****************** */

int main()
{  uint8_t choice = ZERO_INIT;

  ret =  stack_init(&my_stack1);
  if( R_NOK == ret){
        printf("stack_init failed\n");
                    }
  else{
  printf("choose operation to do :\n1-Push a value\n2-Pop\n3-Get top \n4-Get size of stack\n5-Display stack\n6-to exit\n");
  scanf("%i",&choice);
  while (6 != choice)
  {

    switch(choice)
    {
        case 1:
        printf("Enter value to push : ");
        scanf("%i",&stack_pushed_value);
        ret = stack_push(&my_stack1 , stack_pushed_value);
        if( R_NOK == ret){
            printf("stack_push failed\n");
        }
        else{
            printf("Value %i is pushed and current top value is %i \n", stack_pushed_value , my_stack1.stack_pt_top);
        }
        break;
        case 2:
        ret = stack_pop(&my_stack1 , &stack_poped_value);
        if( R_NOK == ret){
            printf("stack_pop failed\n");
        }
        else{
            printf("Value %i is popped and current top value is %i \n", stack_poped_value , my_stack1.stack_pt_top);
        }
        break;
        case 3:
        ret = stack_top(&my_stack1 , &stack_top_value);
        if( R_NOK == ret){
            printf("stack_top failed\n");
            }
        else{
             printf("Top value is %i \n", stack_top_value);
            }
        break;

        case 4:
        ret = stack_size(&my_stack1 , &stack_size_value);
        if( R_NOK == ret){
            printf("stack_size failed\n");
        }
        else{
            printf("Stack size is %i \n", stack_size_value);
        }
        break;

        case 5:
        ret = stack_display(&my_stack1);
        if( R_NOK == ret){
            printf("stack_display failed\n");
        }
        else{
            printf("********************\n");
        }
        break;
        default:
        printf("Invalid choice\n");
        break;
    }
    printf("choose operation to do :\n1-Push a value\n2-Pop\n3-Get top \n4-Get size of stack\n5-Display stack\n6-to exit\n");
    scanf("%i",&choice);

  }
  }
    return 0;
}

/* ********************    Main call Section End    ****************** */
