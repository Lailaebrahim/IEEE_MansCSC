#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void Count( char *str);
int main()
{ char str[MAX];
  printf("%s" ,"Enter a string :\n");
  fgets(str , MAX , stdin);
  Count(str);
    return 0;
}
void Count( char *str){
int alphabet=0 , digits=0 , chars=0;
 for(int i = 0 ; str[i] != '\0' ;i++){
    if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z' )
        {
            str[i] = str[i] + 32;
            alphabet++;

        }
    else if(str[i]>='0' && str[i]<='9'){
            str[i] = str[i] - 32;
            digit++;
                                      }
    else{
        chars++;
       }



                                      }
printf("alphabets:%d", alphabet);
printf("digits:%d", digits);
printf("chars:%d", chars);
return ;
}

