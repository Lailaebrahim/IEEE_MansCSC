#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void RemoveLastOccurance( char  * const str , const char RemoveChar);
int main()
{  char str[MAX];
   char RemoveChar;
   puts("Enter a string :");
   fgets( str , MAX , stdin);
   puts("Enter a character to remove it's Last occurance  :");
   RemoveChar = getchar();
   RemoveLastOccurance( str , RemoveChar );
   printf("The string after the removal: %s\n" , str );
    return 0;
}
void RemoveLastOccurance( char str[MAX] , const char RemoveChar){
     size_t i  , removal = -1 ;
            for( i = 0 ; str[i] != '\0' ; i++ ){
                 if( str[i] == RemoveChar){
                  removal = i ;           }
                                          }
            if(removal == -1 ){
                printf("The character not found");
                return ;
                              }
            else {
            for(i = removal ; str[i] != '\n' ; i++){
            str[i] = str[i+1] ;
                                                      }
                 return ;
                 }
}
