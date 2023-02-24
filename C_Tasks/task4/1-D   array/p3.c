#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ int arr[MAX];
  int n;
  int sum=0;
    puts("Enter the size:");
    scanf(" %d" ,&n);
    puts("Enter the values :");
    for( int i=0 ; i<n ; i++){
        scanf(" %d", &arr[i]);
        sum+=arr[i];
        puts("");
                             }
    printf(" the Sum=%d" , sum);
    return 0;
}
