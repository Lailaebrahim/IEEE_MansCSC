#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int printSN(int , int );
int main()
{ int start, end;
    printf("Enter the lower limit to find strong number: ");
    scanf(" %d", &start);
    printf("Enter the upper limit to find strong number: ");
    scanf(" %d", &end);
    printf("All strong numbers between %d to %d are: \n", start, end);
    printSN(start , end);
    return 0;
}
int printSN(int start , int end){
int num , lastdigit ,fact;
long sum;
for (int i=start ; i<=end ; i++){
    num=i ;
    while(num!=0){
    lastdigit=num%10;
    fact = 1;
    for( int j=1; j<=lastdigit; j++)
    {
            fact = fact * j;
    }
    sum = sum + fact;
    num = num / 10;
                 }
    if(sum == i)
    {
        printf("%d is STRONG NUMBER", i);
    }
                                }

}

