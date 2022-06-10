#include<stdio.h>

int main(void){
    int a[3]={1 , 2 ,3};
    int* ptr = a ;
    printf("%d\n" , *ptr);
    //ptr++ ;
    printf("%d", *ptr++);
return 0;
}