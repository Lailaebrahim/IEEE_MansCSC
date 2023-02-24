#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ char str[MAX];
  printf("%s" ,"Enter a string :\n");
  fgets(str , MAX , stdin);
  conUpper(str);
    return 0;
}
void conUpper( char *str){
 int i=0;
 while(str[i] != '\0'){
    if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
            i++;
        }
        else{
            str[i]=str[i];
            i++;
           }

                    }
printf("string in Upper Case :%s", str);
return ;
}
