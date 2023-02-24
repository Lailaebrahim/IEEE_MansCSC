#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{   int array[MAX]={0};
     int arraycopy[MAX]={0};
     int *ptrarray=array;
     int *ptrarraycopy=arraycopy;
    puts("Enter array elements:");
    for(size_t i=0 ; i<MAX ; i++) {
        scanf("%d", &array[i]);
    }
     for(size_t i=0 ; i<MAX ; i++){
    *ptrarraycopy=*ptrarray;
    ptrarray++;
    ptrarraycopy++;
    }
    puts("array copied:");
     for(size_t i=0 ; i<MAX ; i++) {
        printf("%d\n", arraycopy[i]);
    }
    return 0;
}
