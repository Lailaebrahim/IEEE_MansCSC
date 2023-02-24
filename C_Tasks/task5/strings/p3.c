#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
char* strConc( char *const str1 , char *const str2 );
int main()
{ char str1[ MAX ];
  char str2[ MAX ];
    printf("%s" , "Enter a string: \n");
    fgets( str1 , MAX , stdin );
    printf("%s" , "Enter a string to concatenate with the previous string : \n");
    fgets( str2 , MAX , stdin );
    strConc(str1 , str2);
    printf("%s" , str1 );

    return 0;
}
char* strConc( char *const str1 , char *const str2 ){
  size_t i ,j ;
  if( MAX > (strlen(str1)+strlen(str1)))
  {for(i=(strlen(str1) - 1 ),j=0  ; str2[j]!='\n' ; i++,j++){
    str1[i]=str2[j];
                                                      }
  str1[i]='\n';
  return str1;
  }
else{
    printf("%s" ," no space ");
    return str1;
   }
}



