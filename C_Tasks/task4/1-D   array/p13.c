#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ int arr[MAX];
  int n ,i , j, search ;
  int countDuplicat=0;
    puts("Enter the size:");
    scanf(" %d" ,&n);
    puts("Enter the values :");
    for( int i=0 ; i<n ; i++){
        scanf(" %d", &arr[i]);
        puts("");
                             }
    for( j=0 ; j<n ; j++)
    {
          for( i=j+1 ; i<n ; i++){
           if(arr[j]==arr[i])
           {
               countDuplicat++;
               break;
           }
                                }
    }
    printf("The number of  duplicates=%d " , countDuplicat );
    return 0;
}
