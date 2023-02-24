#include <stdio.h>
#include <stdlib.h>

int main()
{ int ang1,ang2,ang3;
    printf(" enter the first angle :\n");
    scanf(" %d",&ang1);
    printf(" enter the second angle :\n");
     scanf(" %d",&ang2);
    printf(" enter the third angle :\n");
     scanf(" %d",&ang3);
     if( ang1+ang2+ang3==180 && ang1 > 0 && ang2 > 0 && ang3 > 0)
    {
        printf("Triangle is valid.");
    }
     else
    {
        printf("Triangle is not valid.");
    }
    return 0;
}
