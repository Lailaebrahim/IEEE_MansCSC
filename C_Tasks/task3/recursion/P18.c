#include <stdio.h>
#include <stdlib.h>
 unsigned long long int Fact( int n);
int main()
{ int n ;
     puts(" Enter any number ");
    scanf(" %d", &n);
    printf(" the factorial of digit %d!= %llu" , n , Fact(n) );
    return 0;
}
unsigned long long int Fact( int n){
 if(n==1)
 {

     return 1;
 }
 else return (n * Fact(n-1) );


}
