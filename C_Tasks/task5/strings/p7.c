#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void toggle( char *str);
int main()
{ char str[MAX];
  printf("%s" ,"Enter a string :\n");
  fgets(str , MAX , stdin);
  toggle(str);
    return 0;
}
void toggle( char *str){
 for(int i = 0 ; str[i] != '\0' ;i++){
    if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;

        }
    else if( str[i]>='a' && str[i]<='z' ){
            str[i] = str[i] - 32;

                                      }

                                      }
printf(" string after toggling :%s", str);
return ;
}

