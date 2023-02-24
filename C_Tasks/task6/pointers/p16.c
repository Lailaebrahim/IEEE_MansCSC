#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
void stringrev(char *str, char *strrev , size_t length );
int main()
{   char *str[MAX];
    char *strrev[MAX];
    puts("Enter a string ");
    fgets( str , MAX , stdin);
    size_t length = strlen(str);
    stringrev( &str[0] , &strrev[0], length);
    printf("%s%s","The string after revering ",strrev);
    return 0;
}
void stringrev(char *str, char *strrev , size_t length ){
   char *strend =  str ;
    for(size_t i = (length-1) , j=0 ; i>=0 , j<length ; i-- , j++){
        *( strrev+j ) = *( strend+i );
                                      }

    return ;
}
