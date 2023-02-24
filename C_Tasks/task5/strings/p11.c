#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
void stringRev(char *str , char * strrev);
int main()
{   char str[MAX];
    char strrev[MAX]={0};
    printf("%s" ,"Enter a string :\n");
    fgets(str , MAX , stdin);
    stringRev(str , strrev);
    return 0;
}

void stringRev( char * str , char *strrev){
int i, j;
for(i = ( strlen(str) - 1 ), j=0 ; i>=0 && j<strlen(strrev) ; i-- , j++)
{
    strrev[j]=str[i];
}
printf("the string after revering : %s" , strrev);
return;
}
