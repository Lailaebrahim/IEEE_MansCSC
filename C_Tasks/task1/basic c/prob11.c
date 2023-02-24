#include<stdio.h>
#include<math.h>
void main()
{ double base, exponent, power;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);
    power = pow(base, exponent);
    printf("%.2lf ^ %.2lf = %.2lf", base, exponent, power); 
    }
