#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
/* char* stringRev(char *str , char * strrev);*/
void isPalindrome( char * const str , char * const strrev );
 /* unsigned int ComString( char *str ,char *strrev );*/
int main()
{   char str[MAX];
    char strrev[MAX];
    printf("%s" ,"Enter a string :\n");
    fgets(str , MAX , stdin);
    isPalindrome( str , strrev);
    return 0;
}

void isPalindrome( char * const str , char * const strrev ){
 size_t i, j;
 unsigned int similar=0;
 for(i = ( strlen(str)-1 ), j=0 ; str[i] != '\n' ; i-- , j++)
  {
    strrev[j]=str[i];
  }
  for( i=0 ; i<strlen(str) ; i++){
       if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
       { if( str[i] !=  strrev[i]){
         similar = 0 ;
                                 }
        else{
         similar = 1 ;
            }
      }
      else{
       continue ;
         }

                               }
    if ( similar == 1 ){
    puts("string is palindrome \n");
                       }
    else {
    puts("string is not palindrome \n");
        }
}



/*
char* stringRev( char * const str , char * const  strrev){
int i, j;
for(i = (strlen(str)-1 ), j=0 ; i>=0 && j<strlen(str) ; i-- , j++)
{
    strrev[j]=str[i];
}
return strrev;
}
unsigned int ComString( char * const str ,  char * const strrev )
{    char *ptr = stringRev(str , strrev);
     unsigned int similar;
        for(size_t i=0 ; i<strlen(str) ; i++){
        if( str[i]!= ptr[i]){
         similar = 1 ;
                            }
        else{
         similar = 0 ;
            }
                                           }
     return similar;
}

void isPalindrome( char * const str , char * const strrev ){
    unsigned int res = ComString( str , strrev ) ;
    if ( res== 0 ){
    puts("string is palindrome \n");
                               }
    else {
    puts("string is not palindrome \n");
     }

}
*/
