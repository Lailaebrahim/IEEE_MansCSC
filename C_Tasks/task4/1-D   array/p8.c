#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ int arr1[MAX];
  int arr2[MAX];
  int n;
    puts("Enter the size:");
    scanf(" %d" ,&n);
    puts("Enter the values of first array :");
    for( int i=0 ; i<n ; i++){
        scanf(" %d", &arr1[i]);
        puts("");
            arr2[i]=arr1[i];
             }
    puts("the values of second array :");
    for( int i=0 ; i<n ; i++){
       printf("%d \n" ,arr2[i]);
    }

    return 0;
}
