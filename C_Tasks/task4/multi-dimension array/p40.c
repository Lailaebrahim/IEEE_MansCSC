#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int main()
{  int mat[SIZE][SIZE] ;
   int matT[SIZE][SIZE] ;
   int row, col ,i ,j;
   puts("Enter size of matrix: ");
   scanf("%d %d", &row , &col );
    if(row != col ){
     puts("NOT SQUARE MATRIX ");
      return 0;
    }
    puts("Enter elements of matrix: ");
    for( i =0; i<row; i++)
    {
        for( j=0; j<col; j++)
        {
            scanf("%d", &mat[i][j]);

        }

    }
    for(  i=0 ; i<row ; i++){
        for( j =0 ; j < col ; j++){
          matT[j][i]=mat[i][j] ;
        }

                 }
                 int    sym =0 ;
     for(  i=0 ; i<row ; i++){
        for( j =0 ; j < col ; j++){
     if( matT[j][i]==mat[i][j]){
         sym = 1;}
        }}

     if( sym == 1){
     puts(" Is Symmetric ");
    }
    else{
     puts(" Is Not Symmetric ");
    }
    return 0;
}
