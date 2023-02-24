#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{   int array1[MAX]={0};
    int array2[MAX]={0};
    int *ptrarray1= array1;
    int *ptrarray2= array2;
    int *ptrendarray;
    int temp;
     puts("Enter array 1 elements:");
    for(size_t i=0 ; i<MAX ; i++) {
        scanf("%d", &array1[i]);
    }
     puts("Enter array 2 elements:");
    for(size_t i=0 ; i<MAX ; i++) {
        scanf("%d", &array2[i]);
    }
    ptrendarray = &array1[MAX-1];
    while(ptrarray1 <= ptrendarray ){
    temp = *ptrarray1;
    *ptrarray1 = *ptrarray2;
    *ptrarray2 = temp;
    ptrarray1++ ;
    ptrarray2++ ;
    }
    puts("array 1 elements after swaping:");
     for(size_t i=0 ; i<MAX ; i++) {
       printf("%d\t" , array1[i]);
    }
    puts("\narray 2 elements after swaping:");
     for(size_t i=0 ; i<MAX ; i++) {
       printf("%d\t" , array2[i]);
    }
    return 0;
}
