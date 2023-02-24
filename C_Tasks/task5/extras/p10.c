#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void CountWords(char *str);
int main()
{ char str[MAX];
  printf("%s" ,"Enter a string :\n");
  fgets(str , MAX , stdin);
  CountWords(str);
    return 0;
}
void CountWords(char *str){
unsigned int words=0 , i=0 ;
char prevchar;
  while(1)
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t' || str[i]=='\0')
        {

            if(prevchar != ' ' && prevchar != '\n' && prevchar != '\t' && prevchar != '\0')
            {
                words++;
            }
        }

        prevchar = str[i];

        if(str[i] == '\0')
             break;
        else
             i++;

    }
    printf("The number of words= %d", words);
    return ;
}
