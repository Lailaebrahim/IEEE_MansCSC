#include <stdio.h>
#include <stdlib.h>

int main()
{ int n , i;
    printf("Print odd numbers till: ");
    scanf(" %d",&n);
     for( i=1; i<=n ; i=i+2)
    {
        printf(" %d\n", i);
    }
    return 0;
}
