#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int IsArmstrong( int n);
int IsPrime( int n );
int IsPerfect( int n );

int main()
{ int n;
    puts("ENTER A NUMBER TO CHECK :");
    scanf(" %d" ,&n);
    if(IsArmstrong(n)){
    puts("The number you entered is armstrong");
    }
    else{
    puts("The number you entered is not armstrong");
    }
    if(IsPrime(n)){
    puts("The number you entered is prime");
    }
    else{
    puts("The number you entered is not prime");
    }
    if(IsPerfect(n)){
    puts("The number you entered is perfect");
    }
    else{
    puts("The number you entered is not perfect");
    }



    return 0;
}
 int IsArmstrong( int n){
 int num,originalN,lastdigit,sum=0;
 num=originalN=n;
 int digitcount=0;
 while(n!=0)
   {
       n=n/10;
      digitcount++;
   }
   while(num > 0)
    {
        lastdigit = num % 10;
        sum = sum + round(pow(lastdigit, digitcount));
        num = num / 10;
    }
 if(originalN==sum){
    return 1;
 }
 else{
    return 0;
 }

 }
 int IsPrime( int n ){
    int i;
    for(i=2; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int IsPerfect( int n ){
    int sum=0;
 for( int i = 1; i <= n/ 2; i++)
    {
        if(n%i == 0)
        {
            sum += i;
        }
    }
    if(sum == n && n > 0)
    {
      return 1;
    }
    else
    {
       return 0;
    }

}


