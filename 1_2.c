#include<stdio.h>
#include<math.h>

int main(void){
    int feet,inch;
    float centimeter;

    printf("Enter the height(only feet)\n");
    scanf("%d", &feet);

    printf("Enter the height(only inch)\n");
    scanf("%d", &inch);

    //convert feet to inches by multiplying 12 
    //convert inches to cms by multiplying 2.54
    // add these two values to print the final output store it as height

    float height = ((12*feet) + inch)*2.54 ;
    printf("height in cms is :%f",height);
return 0;
}