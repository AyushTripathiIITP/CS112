#include<stdio.h>

int main(void){
int a[]={1,5,9,4};
printf("%d %d %d\n", sizeof(a), sizeof(*a), sizeof(a[0]));

return 0;
}