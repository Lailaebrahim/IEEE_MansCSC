#include<stdio.h>
void main()
{ float cm,km,m;
printf(" enter the value in cm to be converted\n");
scanf(" %f",&cm);
m=cm/100.00;
km=cm/100000.00;
printf(" Value in Meter = %f m \n", m);
printf(" Value in Meter = %f km \n", km); }
