#include <stdio.h>
#include<string.h>
#define MAX_LIMIT 100
size_t FindLength(char * str );
int main()
{ char str[MAX_LIMIT];
  printf(" %s" , " Enter a string to count it's length : \n");
  fgets( str , MAX_LIMIT , stdin);
  printf("String length = %d. \n",FindLength( str ));

    return 0;
}
 size_t FindLength(char * str ){
 size_t L=0;
 while(* str != '\n'){
    L++;
    str++;
 }
 return L ;
 }
