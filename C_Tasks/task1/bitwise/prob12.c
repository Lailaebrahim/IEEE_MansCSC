#include <stdio.h>

void main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num & 1) /* no is odd only if LSB=1 so check LSB if LSB=0 then 0&1=0 and if LSB=1 then 1&1=1 */
        printf("Number  %d is ODD .", num);
    else
        printf("Number  %d is EVEN .", num);

}