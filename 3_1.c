#include<stdio.h>

int main(void){
    int n;
    scanf("%d" , &n);

    //find the remainder with 10 to get the digit
    //divide n each time with 10 

    while(n >= 1){
        printf("%d" , n%10);
        n /= 10;
    }
return 0;
}