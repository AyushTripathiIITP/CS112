#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int m,n;
    printf("Enter the value of m and n \n");
    scanf("%d%d",&m,&n);
    //m is nos. of rows intaken by i
    //n is nos. od coloumn intaken by j
    int matrix[m][n];
    printf("Enter the values of matrix \n");
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int min= 999999999;
    int max= -99999999;
    int ans[m];
    int col = 0 ;
    //now we need to find the smallest element in each row
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(matrix[i][j] < min){
                min = matrix[i][j];
                col = j ;
            }
        }
        //iterating throught the coloumn is over
        for(int k=0 ; k<m ; k++){
            if(matrix[k][col] > max){
                max = matrix[k][col];
                ans[i] = max ;
            }
        }
        min = 999999999;
        max = -999999999;
        //iterating throught the coloumn and row is over;
    }

    printf("the smallest element of each ith row and largest corresponding to that jth coloumn for each row are\n");
    //print the required answer
    for(int x = 0 ; x < m ; x++){
        printf("%d ", ans[x]);
    }
return 0;
}