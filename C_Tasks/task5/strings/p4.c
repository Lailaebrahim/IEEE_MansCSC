#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
void ComString( char *str1 ,char *str2 , size_t size1 , size_t size2);
int main()
{ char str1[ MAX ];
  char str2[ MAX ];
  size_t size1 , size2 ;
    printf("%s" , "Enter first string: \n");
    fgets( str1 , MAX , stdin );
    printf("%s" , "Enter second string: \n");
    fgets( str2 , MAX , stdin );
    size1= strlen(str1);
    size2= strlen(str2);
    ComString( str1 , str2 , size1 , size2);
    return 0;
}
void ComString( char *str1 ,char *str2 , size_t size1 , size_t size2){

 if( size1< size2){
    printf("%s" , " first string is smaller than the second string \n");
    return ;
                  }
 else if(size1 > size2){
    printf("%s" , " second string is smaller than the first string \n");
    return ;
                       }
  else{ unsigned int comp=0;
        for(size_t i=0 ; i< size1 ; i++){
        if( str1[i]!= str2[i]){
             comp=1;
             break;
                           }
        else{
          comp=0;
            }
                                         }
    if(comp==1){
         printf("%s" , "they are not similar \n" );
            return ;
              }
    else {
            printf("%s" , "they are similar \n" );
            return ;
        }
   }
}
