#include <stdio.h>
#include <stdlib.h>
int sumOFdigits(int n) ;
int main()
{ int n;
    puts(" Enter any number ");
    scanf(" %d", &n);
    printf(" the sum of digit= %d" , sumOFdigits(n) );
    return 0;
}
int sumOFdigits(int n){
    if(n==0)
    return 0;
    else {
        return ((n%10) + sumOFdigits(n/10));
    }
}
