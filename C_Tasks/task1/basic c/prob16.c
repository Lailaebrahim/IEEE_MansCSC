#include <stdi.h>
void main()
{
    float s1, s2, s3, s4, s5; 
    float total, average, percentage;
    printf("Enter marks of five subjects: \n");
    scanf(" %f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);
}