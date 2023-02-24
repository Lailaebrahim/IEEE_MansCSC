#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
void ReverseWords(char *str , char *strrev)
{ size_t i ;
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

        if(str[i] == '\0'){
         strrev[i]=='\n'
          break;
        }

        else
             i++;

    }
