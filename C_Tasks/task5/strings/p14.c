#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
void Search( const char * str , const char search);
int main()
{  char str[MAX];
   char search;
   puts("Enter a string :");
   fgets( str , MAX , stdin);
   puts("Enter a character to search for :");
   search = getchar();
   Search(str , search);

    return 0;
}
 void Search( const char * str , const char search){
     size_t i;
           for(i=0 ; str[i]!= '\0' ; i++){
              if(str[i] == search)
            {
                printf("The character %c is found at index %zu" ,search ,i);
                return ;
            }
                                          }
                printf("The character is  not found ");
           return ; }
