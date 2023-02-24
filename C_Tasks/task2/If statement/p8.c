#include <stdio.h>
#include <stdlib.h>

int main()
{char ch;
    printf("Enter character to check \n ");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf(" It is Vowel.");
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf(" It is Consonant.");
    }
    else
    {
        printf(" It is not an alphabet.");
    }
    return 0;
}
