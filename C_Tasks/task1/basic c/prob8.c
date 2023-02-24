#include <stdio.h>

void main()
{  float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
	printf("%f Celsius = %f Fahrenheit", celsius, fahrenheit);
    
}