#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ int arr[MAX];
  int n;
    puts("Enter the size:");
    scanf(" %d" ,&n);
    puts("Enter the values :");
    for( int i=0 ; i<n ; i++){
        scanf(" %d", &arr[i]);
        puts("");
                             }
    puts(" The Output :");
     for( int i=0 ; i<n ; i++)
     { printf(" %d \\ " , arr[i]);
                             }
    return 0;
}
