#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void RemoveAllOccurance( char  * const str , const char RemoveChar);
int main()
{  char str[MAX];
   char RemoveChar;
   puts("Enter a string :");
   fgets( str , MAX , stdin);
   puts("Enter a character to remove it's ALL occurrences   :");
   RemoveChar = getchar();
   RemoveAllOccurance( str , RemoveChar );
   printf("The string after the removal: %s\n" , str );
    return 0;
}
void RemoveAllOccurance( char str[MAX] , const char RemoveChar){
     size_t i  , removal = -1 ;
            for( i = 0 ; str[i] != '\0' ; i++ ){ /* running a loop to catch all the occurrences  */
                 if( str[i] == RemoveChar){
                    for( int j = i ; str[j] != '\n' ; j++){ /* for each occurrence run a loop to remove it then go back to outer loop to find the next occurrence*/
                      str[j] = str[j+1] ;
                      removal=1 ;                  }
                                          }
                                               }
            if(removal == -1 ){
                printf("The character not found");
                return ;
                              }

}
