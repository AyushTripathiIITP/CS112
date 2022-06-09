#include<stdio.h>

int main(void){
    int ord;
    printf("Enter the order of the matrix\n");
    scanf("%d" , &ord);
    int arr[ord][ord];  //took the order and elements of matrix from the user 
    printf("Enter the elements of the matrix\n");
    for(int i =0 ; i < ord ; i++){
        for(int j=0 ; j < ord ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    //find the value of sum of each row
    int row[ord], col[ord];
    for(int i =0 ; i< ord ; i++){
        row[i] = 0 ;
        for(int j=0 ; j < ord ; j++){
            row[i] += arr[i][j];
        }
    }
    //find the vlaue of sum of each coloum 
    for(int i=0 ; i<ord ; i++){
        col[i] = 0;
        for(int j=0 ; j<ord ; j++){
            col[i] += arr[j][i];
        }
    }
    for(int i = 0 ; i< ord ; i++){
        if(col[i] != row[i]){
            printf("The given matrix is not magical\n");
            return 0;
        }
    }
    printf("The given matrix is magical\n");
return 0;
}