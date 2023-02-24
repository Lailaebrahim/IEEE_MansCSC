#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int main()
{  int mat1[SIZE][SIZE];
   int row, col , sum =0;
   puts("Enter elements in  first matrix of size 3x3: ");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &mat1[row][col]);

        }

    }
    for(row=0; row<SIZE; row++)
    {
        sum = 0;
        for(col=0; col<SIZE; col++)
        {
            sum += mat1[row][col];
        }

        printf("Sum of elements of Row %d = %d\n", row+1, sum);
    }
    for(col=0; col<SIZE; col++)
    {
        sum = 0;
        for(row=0; row<SIZE; row++)
        {
            sum += mat1[row][col];
        }

        printf("Sum of elements of column %d = %d\n", col+1, sum);
    }
    return 0;
}
