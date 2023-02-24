#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int main()
{  int mat[SIZE][SIZE] ;
   int row, col , i,j , det=0;
   puts("Enter size of matrix: ");
   scanf("%d %d", &row , &col );
    if(row != col ){
     puts("CAN'T CALCULATE MATRIX ");
      return 0;
    }
   puts("Enter elements of matrix: ");
    for(int i =0; i<row; i++)
    {
        for(int j=0; j<row; j++)
        {
            scanf("%d", &mat[i][j]);

        }

    }
    if(row==2 && col==2 ){
       det= (mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);
    }
   if(row==3 && col==3 ){

       det = mat[0][0] * ((mat[1][1]*mat[2][2]) - (mat[2][1]*mat[1][2])) -mat[0][1] *((mat[1][0]* mat[2][2]) - (mat[2][0] * mat[1][2])) + mat[0][2] * ((mat[1][0] * mat[2][1]) - (mat[2][0] *mat[1][1]));
   }
   printf(" the   determinant of the matrix = %d \n" , det);
    return 0;
}
