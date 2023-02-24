#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{   int array[MAX]={0} ,*ptrarray=array ,*ptrendarray ,temp;
    puts("Enter array elements:");
    for(size_t i=0 ; i<MAX ; i++) {
        scanf("%d", &array[i]);
    }
    ptrendarray = &array[MAX-1];
    for(size_t i=0 ; i<(MAX/2) ; i++) {
      temp = *ptrarray;
      *ptrarray = *ptrendarray;
      *ptrendarray = temp;
      ptrendarray--;
      ptrarray++;
    }
 puts("array elements after reversing:");
    for(size_t i=0 ; i<MAX ; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}
