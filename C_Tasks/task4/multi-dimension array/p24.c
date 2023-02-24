#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int main()
{  int mat1[SIZE][SIZE];
    int mat2[SIZE][SIZE];
    int mat3[SIZE][SIZE];
    int row, col;
    puts("Enter elements in  first matrix of size 3x3: ");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d ", &mat1[row][col]);

        }

    }
    puts("Enter elements in second matrix  of size 3x3: ");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d ", &mat2[row][col]);
        }

    }

    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            mat3[row][col]=mat1[row][col]-mat2[row][col];
        }
    }
    puts(" result matrix: ");
     for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d",mat3[row][col]);
        }
        puts("");
    }
    return 0;
}
