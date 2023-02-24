#include <stdio.h>

void main()
{
    int num,nbit,newnum;
	printf("Enter any number: ");
    scanf("%d", &num);
	printf("Enter the number of bit to set to (0): ");
    scanf("%d", &nbit);
	newnum=num&(~(1<<(nbit-1)));
	printf("Number after clearing %dnth bit: %d (in decimal)\n", nbit, newnum); 
}
	