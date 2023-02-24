#include<stdio.h>
void main()
{ int days,years,weeks;
printf("Enter number of days: ");
scanf("%d", &days);
years=days/365;
weeks=(days%365)/7;
days=days- ((years * 365) + (weeks * 7)); /*reminder days=total days - days taken by years - days taken by weeks */
printf("years: %d\n", years);
printf("weeks: %d\n", weeks);
printf("days: %d", days); 
}
