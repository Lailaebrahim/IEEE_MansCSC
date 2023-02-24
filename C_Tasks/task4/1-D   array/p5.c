#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ int arr[MAX];
  int n;
  int maxindex1;
  int maxindex2;
    puts("Enter the size:");
    scanf(" %d" ,&n);
    puts("Enter the values :");
    for( int i=0 ; i<n ; i++){
        scanf(" %d", &arr[i]);
        puts("");
                             }
    int max1=arr[0];
    for( int i=0 ; i<n ; i++){
    if(arr[i]>max1){
        max1=arr[i];
        maxindex1=i;
         }
    }
    int max2=arr[0];
    for( int i=0 ; i<n ; i++){
            if(i==maxindex1){
             continue;
            }
    if(arr[i]>max2){
        max2=arr[i];
        maxindex2=i;
         }
    }
    printf(" the largest number=%d at position=%d \n", max1 , maxindex1+1);
     printf(" the second largest number=%d at position=%d \n", max2 , maxindex2+1);
    return 0;
}
