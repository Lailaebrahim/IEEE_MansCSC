#include <stdio.h>
#include <stdlib.h>

int main()
{int n , i;
    printf("enter number to print multiplication table: ");
    scanf(" %d",&n);
     for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", n, i, (n*i)) ;
    }
    return 0;
}
