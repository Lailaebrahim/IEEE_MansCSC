#include <stdio.h>
#include <stdlib.h>
int cube(int n);
int main()
{ int x;
    puts(" ENTER A NUMBER :");
    scanf(" %d",&x);
    printf("The cube of the number=%d \n" , cube(x));
    return 0;
}
int cube( int n){
 return n*n*n ;
}
