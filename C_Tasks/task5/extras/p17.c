#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
int main()
{   char str[MAX];
    int alphabetfreq[26] = {0} , max;
    puts("Enter a lower case string :");
    fgets( str , MAX , stdin);
    for( int i=0; i< strlen(str) ; i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {
            alphabetfreq[str[i] - 97]++;
        }

    }
    max = 0;
    for(int i=0; i<26; i++)
    {
        if(alphabetfreq[i] >alphabetfreq[max])
            max = i;
    }
   printf("Maximum occurring character is ' %c ' = %d times.", (max+97) ,alphabetfreq[max]);
    return 0;
}
