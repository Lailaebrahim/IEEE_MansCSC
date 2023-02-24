#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{ char str[MAX];
  printf("%s" ,"Enter a string :\n");
  fgets(str , MAX , stdin);
  conLower(str);
    return 0;
}
void conLower( char *str){
 int i=0;
 while(str[i] != '\0'){
    if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
            i++;
        }
        else{
            str[i]=str[i];
            i++;
           }

                    }
printf("string in lower Case :%s", str);
return ;
}
