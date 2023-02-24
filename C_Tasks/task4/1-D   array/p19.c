#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ int arr[MAX];
  int n ;
  int i, max, j , key;
    puts("Enter the size:");
    scanf(" %d" ,&n);
    puts("Enter the values :");
    for( int i=0 ; i<n ; i++){
        scanf(" %d", &arr[i]);
        puts("");
                             }
    /* using insertion sort */
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
          while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
              }
        arr[j + 1] = key;
    }
 printf(" the array after the ascending sorting \n");
  for( int i=0 ; i<n ; i++){
        printf(" %d ,",arr[i]);
                             }

    return 0;
}
