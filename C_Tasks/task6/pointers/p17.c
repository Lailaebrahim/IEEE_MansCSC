#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void sortarray(int *arr);
int main()
{ int arr[MAX] = {0};
puts("Enter elements of the array to sort");
for( size_t i = 0 ; i< MAX ; i++){
    scanf("%d", &arr[i]);
}
   sortarray(&arr[0]);
   puts("array after sorting");
  for( size_t i = 0 ; i< MAX ; i++){
    printf("%d\n", arr[i]);
                                   }
    return 0;
}
void sortarray(int *arr){
int temp;
   for( int *i=&arr[0] ; i<= &arr[MAX-1] ; i++) /* running a loop for iterations using a pointer to first element incrementing it till it reach
                                                  the last element which result to the same number of iterations by length */
     {

       for( int *ptr =&arr[0] ; ptr<&arr[MAX-1] ; ptr++) /* running a loop for compares using a pointer doing no of loops less than the iterations */
         {
            if(*(ptr+1) < *ptr){
              temp = *ptr ;
              *ptr = *(ptr+1) ;
              *(ptr+1) = temp ;
                                }

         }
     }

return ;

}
