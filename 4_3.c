#include<stdio.h>

int main(void){
    int n;
    printf("Enter your number\n");
    scanf("%d", &n);
    int sum=0;

    while(n >= 1){
        sum += n % 10 ;
        printf("%d", n % 10);
        n /= 10 ;
    }
    printf("\nsum of digits of above number is %d", sum);
return 0;
}