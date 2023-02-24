#include <stdio.h>
#include <math.h>
void main()
{
    double x, root;
    printf("Enter any number to find square root: ");
    scanf("%lf", &x);
    root = sqrt(x);
    printf("Square root of %lf = %.2lf", x, root);

}