#include<stdio.h>
#include<stdlib.h>

int main(void){
    int col1, row1 , col2 , row2 ; //matrix are of type row1 * col1
    //for matrix 1
    printf("\nEnter the row and coloumn in matrix1\n");
    scanf("%d %d", &row1, &col1);
    printf("\nEnter the row and coloumn in matrix2\n");
    scanf("%d %d", &row2, &col2);
    if(col1 != row2){
        printf("\nMultiplication of matrix is not possible\n");
        return 0;
    }
    int matrix1[row1][col1];
    for(int i=0 ; i<row1 ; i++){
        for(int j=0 ; j<col1 ; j++){
            matrix1[i][j] = rand();
        }
    }
    int matrix2[row2][col2];
    for(int i=0 ; i<row2 ; i++){
        for(int j=0 ; j<col2 ; j++){
            matrix2[i][j] =rand();
        }
    }
    printf("\nMatrix1 is as follows\n");
    for(int i=0 ; i<row1 ; i++){
        for(int j=0 ; j<col1 ; j++){
            printf("%d " , matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix2 is as follows\n");
    for(int i=0 ; i<row2 ; i++){
        for(int j=0 ; j<col2 ; j++){
            printf("%d " , matrix2[i][j]);
        }
        printf("\n");
    }
    int ans[row1][col2];
    for(int i =0 ; i<row1 ; i++){
        for(int j =0 ; j < col2 ; j++){
            ans[i][j] = 0;
            for(int k=0 ; k<col2 ; k++){
                ans[i][j] += matrix1[i][k] * matrix2[k][i] ;
            }
        }
    }
    printf("\nMatrix obtained after matrix multiplication is as follows\n\n");
    for(int i= 0 ; i<row1 ; i++){
        for(int j =0 ; j< col2 ; j++){
            printf("%d " , ans[i][j]);
        }
        printf("\n");
    }
return 0;
}