#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void getminmax(int * minmax, int * min, int * max);
int main()
{    int arr[MAX] = {0}, min , max;
     puts("Enter elements of the array to find min & max");
     for( size_t i = 0 ; i< MAX ; i++){
    scanf("%d", &arr[i]);
                                      }
    getminmax(arr, &min, &max); /* min & max are auto variables local to main they are passed by reference so changes done by func
                                getminmax also changes the values in main */
    printf("Minimum element in array: %d\n", min);
    printf("Maximum element in array: %d\n", max);
    return 0;
}
void getminmax(int *arr, int * min, int * max)
{
    *min = *arr ;
    *max = *arr ;
    for (int *i = &arr[0] ; i <= &arr[MAX -1]; i++) /* using pointer i to traverse array searching for min & max
                                                     pointer initially contain address of first element of array arr which is passed
                                                     to function as an argument and the pointer will be incremented till it reach it reach address of last element*/
    {
        if( *i < *(min))
            *min = * i;

        if(* i > *(max))
            *max = * i;
    }
}
