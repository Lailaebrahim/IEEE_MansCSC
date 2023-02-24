#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ int arr1[MAX];
int arr2[MAX];
int arrmerge[MAX];
  int size1 ,size2 , j, search ;
  int countDuplicat=0;
    puts("Enter the size of first array:");
    scanf(" %d" ,&size1);
    puts("Enter the values :");
    for( int i=0 ; i<size1 ; i++){
        scanf(" %d", &arr1[i]);
        puts(""); }
    puts("Enter the size of second array:");
    scanf(" %d" ,&size2);
    puts("Enter the values :");
    for( int i=0 ; i<size2 ; i++){
        scanf(" %d", &arr2[i]);
        puts("");
    }
 int mergesize=size1+size2;
 int index1 = 0;
 int index2 = 0;
 int mergeindex;
  for( mergeindex=0 ; mergeindex<mergesize ; mergeindex++ ){
      if(index1 >= size1 || index2 >= size2)
        {
            break;
        }
    if(arr1[index1] < arr2[index2])
        {
            arrmerge[mergeindex] = arr1[index1];
            index1++;
        }
        else
        {
            arrmerge[mergeindex] = arr2[index2];
            index2++;
        }
  }
 while(index1 < size1)
    {
        arrmerge[mergeindex] = arr1[index1];
        mergeindex++;
        index1++;
    }
    while(index2 < size2)
    {
        arrmerge[mergeindex] = arr2[index2];
        mergeindex++;
        index2++;
    }
   printf("Array merged in ascending order : ");
    for( int i=0; i<mergesize; i++)
    {
        printf("%d \\ ", arrmerge[i]);
    }
    return 0;
  }
