#include <stdio.h>
#include <stdlib.h>
#define MAX 100
size_t lengthofstr(char *string);
int main()
{   char *string[MAX];
    puts("enter a string");
    gets( string); /* fgets saves newline at the end so when using it the length of the string will be 1 more than the letters*/
    size_t length = lengthofstr(string);
    printf("%s %d","the length of the string",length );

    return 0;
}
size_t lengthofstr(char *string){
 char *ptr = string;
 size_t length=0 ;
 while(*ptr != '\0'){
  ptr++ ;
  length++;
                 }
  return length;
                                            }
