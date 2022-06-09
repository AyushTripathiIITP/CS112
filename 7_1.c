#include<stdio.h>

int main(void){
    int arr1[2][2];
    int arr2[2][2];
    //input the values of matrix 1
    printf("Enter the elements of 1st matrix\n");
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            scanf("%d" , &arr1[i][j]);
        }
    }
    //input the values of matrix 2
    printf("Enter the elements of 2nd matrix\n");
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            scanf("%d" , &arr2[i][j]);
        }
    }
    //evaluating the answer by doing ans[i][j] = arr1[i][j] + arr2[i][j];
    int ans[2][2];
    for(int i=0 ; i < 2; i++){
        for(int j=0 ; j<2 ; j++){
            ans[i][j] = arr1[i][j] + arr2[i][j] ;
        }
    }
    //printing the answer
    printf("Matrix obtained on the addition of matrix 1 and matrix 2 is as follows\n");
    for(int i=0 ; i < 2; i++){
        for(int j=0 ; j<2 ; j++){
            printf("%d " , ans[i][j]);
        }
        printf("\n");
    }
return 0;
}