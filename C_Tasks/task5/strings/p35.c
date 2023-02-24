#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
void RemoveLeadingWhiteSpace(char * const str);
int main()
{   char str[MAX];
    puts("Enter a string :");
    fgets( str , MAX , stdin);
    RemoveLeadingWhiteSpace(str);
    printf("The string after removing the leading white space \n%s" , str);
    return 0;
}
void RemoveLeadingWhiteSpace(char * const str){
     size_t i , j ,index=0 ;

          for(int i=0 ; str[i] != '\0' ; i++){ /* running a loop to traverse the array to count the leading white spaces */
          if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
           { index++; }
          else{ break ;} /* when the first char after white spaces if found exit so it don't count last character as white space
                          and make a logic error */
                                             }

          for( j = index ; j > 0 ; j--){ /* run a loop with no. of white spaces as the inner loop shift all the array by one place */
             for(int i=0 ; i< strlen(str) ; i++){
                 str[i]=str[i+1];               }
                                       }

        return ;
}
