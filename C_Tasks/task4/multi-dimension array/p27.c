#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int main()
{  int mat1[SIZE][SIZE];
    int mat2[SIZE][SIZE];
    int row, col , flag;
    puts("Enter elements in  first matrix of size 3x3: ");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &mat1[row][col]);

        }

    }
    puts("Enter elements in second matrix  of size 3x3: ");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &mat2[row][col]);
        }

    }
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
           if(mat1[row][col]!=mat2[row][col]){
            flag=0;
            break;
           }
           else{
            flag=1;
           }
        }

    }
    if(flag==0)
    {
        puts(" The two matrices are not equal");
    }
    else {
        puts(" The two matrices are equal");
    }
    return 0;
}
