#include<stdio.h>
#include<string.h>
#define MAX 100
size_t SearchLast( const char * str , const char search);
int main()
{  char str[MAX];
   char search;
   puts("Enter a string :");
   fgets( str , MAX , stdin);
   puts("Enter a character to search for :");
   search = getchar();
   size_t index =SearchLast(str , search);
   if(index  == -1){
    printf(" character not found.");
   }
   else{
     printf("Last occurrence of character %c is at index %d.", search , index );
   }
    return 0;
}
size_t SearchLast( const char * str , const char search){
     size_t i , index= -1 ;
           for(i=0 ; str[i]!= '\0' ; i++){
              if(str[i] == search)
            {
               index = i;
            }
                                          }
             return index ;
}
