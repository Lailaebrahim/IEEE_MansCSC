#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 int Ispalindrome(int n);
 int reverse(int n);
int main()
{ int n;
   puts(" Enter any number :");
   scanf(" %d", &n);
   if (Ispalindrome(n)==1)
    {
    puts(" IS A PALINDROME ");
    }
   else
   {
     puts(" IS NOT A PALINDROME ");
   }
    return 0;
}
int Ispalindrome(int n){
   if(n== reverse(n))
    {
    return 1;
    }
    return 0 ;

}

int reverse(int n)
{
    int count = (int)log10(n);
        if(n==0)
        {  return 0; }

   return ((n%10 * pow(10, count)) + reverse(n/10)) ;

}
