/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Laila Ebrahim
 * @brief          : Implementation of singly linked list
 * @description    : implementing characteristics of singly linked list where the node re of type struct
 and dynamically allocated in non-contiguous memory locations and accessing nodes by pointer to the head node where time complexity of this process O(n)
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include "SinglyLinkedList.h"
/* ********************** Includes Section End   ********************** */

int main()
{
   unsigned int  choice;
    int value;
    int res;
    unsigned int check ;
    Node * firstnode = NULL ;
    Node ** fnode = &firstnode ;
    printf("%s","choose an option :\n1-to insert a new int.\n2-to delete a int.\n3-to print list.\n4- to exit program\n");
    scanf("%u", &choice);
    while(choice != 4)
    {
        switch(choice)
        {
        case 1:
            printf("%s","enter a value to insert :\n");
            scanf("%d", &value);
            check = insert(fnode, value);
            if(check== 1)
            {
                puts("int is inserted successfully.\n");
            }
            else
            {
                puts("int is not inserted.\n");
            }
            break;
        case 2:
            printf("%s","Enter an int to be deleted :\n");
            scanf("%d", &value);
            res = deletenode(fnode, value );
            if( res  != 0 )
            {
                printf("%s","int deleted successfully.\n");
                break ;
            }
            else if( res = 8888 )
            {
                printf("%s","int not found.\n");
                break;
            }
        case 3:
            printlist( firstnode);
            break;
        default:
            printf("%s","INVALID INPUT ");
            break;

        }
        putc('?',stdout);
        scanf("%d",&choice);

    }
    return 0;
}
