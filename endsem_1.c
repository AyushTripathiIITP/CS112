#include<stdio.h>

int stack[5];
int count = 0;

void push(int data){
    stack[count] = data;
    count++ ;
}

int main(void){
    int n;
    printf("Enter a Number less than 32\n");
    scanf("%d", &n);
    int num = n ;
    if(n < 0 || n >= 32){
        printf("Entered number is out of range\n");
        return 0;
    }
    for(int i = 0 ; n != 1 ; i++){
        int a = n % 2;
        push(a);
        n /= 2;
    }
    push(1);
    printf("Binary equivalent of %d is :", num);
    for(int i =4 ; i >= 0 ; i--){
        printf("%d", stack[i]);
    }
    printf("\n");

return 0;
}