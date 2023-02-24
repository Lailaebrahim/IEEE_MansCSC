#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{   int array[MAX]={0} ,search ,*ptrarray=array , found=-1 , i=0 ;
    puts("Enter array elements:");
    for(size_t i=0 ; i<MAX ; i++) {
        scanf("%d", &array[i]);
    }
    puts("Enter element to search in array:");
    scanf("%d", &search);
    int *ptrsearch = &search ;
    int *ptrendarray = &array[MAX-1] ;
    while(ptrarray<=ptrendarray){
            if(*ptrarray == * ptrsearch)
            { found=1;
             break;
            }
             else{
                found = -1 ;
                ptrarray++ ;
             }

                              }
      if(found==-1){
        printf("%s","element is not found ");
      }
      else{
        printf("%s","element is found ");
      }
    return 0;
}
