#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void RemoveFirstOccurance( char  * const str , const char RemoveChar);
int main()
{  char str[MAX];
   char RemoveChar;
   puts("Enter a string :");
   fgets( str , MAX , stdin);
   puts("Enter a character to remove it's first occurance  :");
   RemoveChar = getchar();
   RemoveFirstOccurance( str , RemoveChar );
   printf("The string after the removal: %s\n" ,str );
    return 0;
}
void RemoveFirstOccurance( char str[MAX] , const char RemoveChar){
     size_t i =0 , removal = -1 ;
            while( str[i] != '\n'){
                 if( str[i] == RemoveChar){
                  removal = i ;
                  break;
                                        }
                 else {
                  i++ ;
                      }
                                  }
            if(removal == -1 ){
                return ;
                              }
            else {
            for(int i = removal ; str[i] != '\n' ; i++){
            str[i] = str[i+1] ;
                                                    }
                 return ;
                 }
            }


 /*void RemoveFirstOccurance( char * const str , const char RemoveChar){
    char * temp = str ;
            while( *temp != '\n'){
                 if( *temp == RemoveChar){
                 break;
                                        }
                 else {
                  temp++ ;
                      }
                                }
          while( *temp != '\n'){
            *temp = *(temp+1) ;
                              }
          return  ;
}
*/
