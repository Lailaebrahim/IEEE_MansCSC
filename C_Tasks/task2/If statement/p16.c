#include <stdio.h>
#include <stdlib.h>

int main()
{int s1,s2,s3;
    printf(" enter the first side :\n");
    scanf(" %d",&s1);
    printf(" enter the second side :\n");
     scanf(" %d",&s2);
    printf(" enter the third side :\n");
     scanf(" %d",&s3);
     if(s1==s2 && s2==s3)
     {
       printf(" the triengle is EQUILATERAL :\n");
     }
     else if (s1==s2 || s2==s3 || s1==s3 )
     {
         printf(" the triengle is Isosceles :\n");
     }
     else {
        printf(" the triengle is saclene:\n");
     }
     return 0;
}
