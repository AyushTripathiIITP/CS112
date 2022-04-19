#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int space=0 ;

    //print half of space on each time
    //print n times * and decrease n by 2
    //increase n by 2 each time

    while(n > 0){
        for(int j =0 ; j < (space/2) ; j++){
            printf(" ");
        }
        for(int i =0 ; i<n ; i++){
            printf("*");
        }
        for(int j =0 ; j < (space/2) ; j++){
            printf(" ");
        }
        n= n- 2 ;
        space += 2;
        printf("\n");
    }
return 0;
}