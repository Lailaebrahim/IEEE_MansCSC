#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
int main()
{   char str[MAX];
    int alphabetfreq[26] = {0} ;
    puts("Enter a lower case string :");
    fgets( str , MAX , stdin);
    for( int i=0; i< strlen(str) ; i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {
            alphabetfreq[str[i] - 97]++;
        }

    }

    for(int i=0; i<26; i++)
    {
        if(alphabetfreq[i] > 0 )
          printf("Number of occurring of character ' %c ' = %d times.", (i+97) ,alphabetfreq[i]);
    }

    return 0;
}
