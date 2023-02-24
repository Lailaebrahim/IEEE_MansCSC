#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]);
int main()
{   int mat1[ROW][COL], mat2[ROW][COL] , res[ROW][COL] , row , col;
    puts("Enter elements in  first matrix of size 3x3: ");
    for(row=0; row<ROW; row++)
    {
        for(col=0; col<COL; col++)
        {
            scanf("%d", &mat1[row][col]);

        }

    }
    puts("Enter elements in second matrix  of size 3x3: ");
    for(row=0; row<ROW; row++)
    {
        for(col=0; col<COL; col++)
        {
            scanf("%d", &mat2[row][col]);

        }
    }
   matrixMultiply( mat1, mat2, res);
   puts("elements of result matrix : ");
    for(row=0; row<ROW; row++)
    {
        for(col=0; col<COL; col++)
        {
            printf("%d\t",res[row][col]);

        }
    }
    return 0;

}
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL])
{
    int row, col, i;
    int sum;


    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            sum = 0;

            for (i = 0; i < COL; i++)
            {
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
            }

            *(*(res + row) + col) = sum;
        }
    }
}
