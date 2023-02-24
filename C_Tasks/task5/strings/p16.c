#include<stdio.h>
#include<string.h>
#define MAX 100
void SearchAllIndex( const char * str , const char search);
int main()
{  char str[MAX];
   char search;
   puts("Enter a string :");
   fgets( str , MAX , stdin);
   puts("Enter a character to search for :");
   search = getchar();
   SearchAllIndex(str , search);
    return 0;
}
void SearchAllIndex( const char * str , const char search){
     size_t i , NotFound = -1 ;
           for(i=0 ; str[i]!= '\0' ; i++){
              if(str[i] == search)
            {
             printf("character %c is  found at index %d.\n", search , i );
              NotFound = i ;
            }
                                        }
           if(  NotFound == -1)
           printf("character %c is not found at any index ." , search);
             return  ;
}
