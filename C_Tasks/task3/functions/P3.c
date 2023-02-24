#include <stdio.h>
#include <stdlib.h>
int Max(int,int);
int Min(int,int);
int main()
{ int x,y;
    puts(" ENTER TWO NUMBERS :");
    scanf(" %d %d",&x,&y);
    printf("The maximum is=%d \n", Max(x,y));
    printf("The minimum is=%d \n", Min(x,y));
    return 0;
}
int Max(int n1, int n2){
    return (n1>n2? n1 : n2);
        }
int Min(int n1, int n2){
    return (n1<n2? n1 : n2);
        }
