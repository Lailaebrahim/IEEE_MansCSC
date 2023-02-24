#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ char strOrig[ MAX ];
  char strcopy[ MAX ];
    printf("%s" , "Enter a string: \n");
    fgets( strOrig , MAX , stdin );
    copy( strcopy, strOrig);
    printf(" The original string: %s \n" , strOrig );
    printf(" The copied string: %s \n" , strcopy );

    return 0;
}
void copy(char * const s1 , const char * const s2){ /* copying string using array subscripting while making
                                                     s1 contant at the first element of the array string1
                                                     and making the string constant and s2 constant
                                                     at first element of the string */
for (size_t i=0 ; (s1[i]=s2[i]) != '\0' ; i++);
}
