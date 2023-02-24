#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
double dia(double);
double circ(double);
double area(double);
int main(){
double r;
    printf("ENTER THE REDUIS: \n");
    scanf(" %lf" ,&r);
    printf("The diameter=%.2lf units\n" , dia(r));
    printf("The circumference=%.2lf units\n ", circ(r));
    printf("The area=%.2lf square units\n", area(r));
    return 0;

}
double dia(double n){
return n*2;
}
double circ(double n){
return n*2*PI;}
double area(double n){
return n*n*PI;
}
