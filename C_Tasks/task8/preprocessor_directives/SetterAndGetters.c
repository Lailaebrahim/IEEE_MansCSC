#include <stdio.h>
#include <stdlib.h>
#include "define.h"
int main()
{   int x = 2;
    SET_BIT( x , 3 );
    printf("%d\n" , x);
    int y = GET_BIT( x , 1); /* y = as get return bit needed it doesnot change var */
    printf("%d" , y);
    return 0;
}
