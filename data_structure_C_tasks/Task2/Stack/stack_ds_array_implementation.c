/**
 ******************************************************************************
 * @file           : stack_ds_array_implementation.c
 * @author         : Laila Ebrahim
 * @brief          : implementing operations that can be done on stack DS implemented with array
                     operations are:
                     - Main operations:
                     stack_push
                     stack_pop
                     stack_top
                     - Helping operations:
                     stack_init
                     stack_status
                     -additional operations:
                     stack_size
                     stack_display

 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include  "stack_ds_array_implementation.h"
/* ********************** Includes Section End   ********************** */



/* ********************** Sub-Program Definitions Section Start ******* */
return_status_t stack_init(stack_ds_t *my_stack)
{

    return_status_t status = R_NOK;

    if (NULL == my_stack)
    {
        status = R_NOK;
    }
    else
    {
        status = R_OK;
        my_stack->stack_pt_top = TOP_INIT;
    }

    return status;
}

/**
 * @brief  this function checks if stack is full or empty or not full .
 * @param  my_stack pointer to stack .
 * @retval Status returned to determine status of stack.
 * @comment function is static to be only visible in this file and to be only called in other functions implemented in this file
 */
static stack_status_t stack_status(stack_ds_t *my_stack)
{
    stack_status_t status = STACK_EMPTY;
    if(my_stack->stack_pt_top == (STACK_MAX_SIZE - 1) )
    {
#ifdef STACK_DEBUG
        printf("stack is full\n");
#endif // STACK_DEBUG
        status = STACK_FULL;
        return status;
    }
    else if( my_stack->stack_pt_top == TOP_INIT )
    {
#ifdef STACK_DEBUG
        printf("stack is empty\n");
#endif // STACK_DEBUG

        status = STACK_EMPTY;
        return status;
    }
    else
    {
#ifdef STACK_DEBUG
        printf("stack is not full\n");
#endif // STACK_DEBUG
        status = STACK_NOT_FULL;
        return status;
    }
}

return_status_t stack_push(stack_ds_t *my_stack, uint32_t data)
{

    if ((STACK_FULL == stack_status(my_stack)) || (NULL == my_stack))
    {

#ifdef STACK_DEBUG
        printf("OVERFLOW!!!  stack is full\n");
#endif

        return R_NOK;
    }
    else
    {

        (my_stack->stack_pt_top)++;
        my_stack->data[my_stack->stack_pt_top] = data;

#ifdef STACK_DEBUG
        printf("Value %i is pushed and current top value is %i \n", data, my_stack->stack_pt_top);
#endif

        return R_OK;
    }
}

return_status_t stack_pop(stack_ds_t *my_stack, uint32_t *pop_data)
{

    if ((STACK_EMPTY == stack_status(my_stack)) || (NULL == my_stack) || (NULL == pop_data))
    {

        #ifdef STACK_DEBUG
                printf("UNDERFLOW!!!  stack is  empty\n");
        #endif

        return R_NOK;
    }
    else
    {
        *pop_data = my_stack->data[my_stack->stack_pt_top];
        my_stack->stack_pt_top--;

        #ifdef STACK_DEBUG
                printf("Value %i is poped and current top value is %i \n", *pop_data, my_stack->stack_pt_top);
        #endif

        return R_OK;
    }
}

return_status_t stack_top(stack_ds_t *my_stack, uint32_t *top_data)
{
   if((STACK_EMPTY == stack_status(my_stack)) || (NULL == my_stack) || (NULL == top_data))
    {
        #ifdef STACK_DEBUG
                printf("can not get top\n");
        #endif

        return R_NOK;
    }
    else
    {
        *top_data = my_stack->data[my_stack->stack_pt_top];

        #ifdef STACK_DEBUG
                printf("Value %i is at top and current top value is %i \n", *top_data, my_stack->stack_pt_top);
        #endif

        return R_OK;
    }

}


return_status_t stack_size(stack_ds_t *my_stack , uint32_t *stack_no_elements)
{

    if ( (NULL == my_stack) || (NULL == stack_no_elements ) )
    {
        #ifdef STACK_DEBUG
                printf("ERROR \n");
        #endif

        return R_NOK;
    }
    else
    {
        *stack_no_elements = ( (my_stack->stack_pt_top) + 1);

        #ifdef STACK_DEBUG
            printf("size is %i\n", *stack_no_elements);
        #endif

        return R_OK;
    }

}

return_status_t stack_display(stack_ds_t *my_stack ){

    sint32_t counter = ZERO_INIT ;
    if((STACK_EMPTY == stack_status(my_stack)) || (NULL == my_stack) )
    {
        #ifdef STACK_DEBUG
                printf("can not display stack \n");
        #endif

        return R_NOK;
    }
    else
    {

     printf("stack data : ");

     for( counter = my_stack->stack_pt_top ; counter >= ZERO_INIT ; counter--){

        printf("%i\t", my_stack->data[counter]);

     }
     printf("\n");

    return R_OK;

    }
}
/* ********************** Sub-Program Definitions Section End ******* */

