#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ int arr[MAX];
  int n , value , pos;
    puts("Enter the size:");
    scanf(" %d" ,&n);
    puts("Enter the values :");
    for( int i=0 ; i<n ; i++){
        scanf(" %d", &arr[i]);
        puts("");
        }
     puts("Enter the value :");
     scanf(" %d" ,&value);
    if()
     puts("Enter the position :");
    scanf(" %d" ,&pos);
    for( int i=n-1 ; i=0 ; i--){
            arr[i]=arr[i+1]; }
    arr[pos-1]=value;
    puts("the array after the insertion :");
    for( int i=0 ; i<=n ; i++){
        printf(" %d" ,arr[i]);
            }

    return 0;
}
