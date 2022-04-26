#include<stdio.h>
#include<math.h>
#define max 2147483647
#define min -2147483648

int main(void){
    float a,b,c;
    //input a,b,c from the user
    printf("enter the value of a , b , c\n");
    scanf("%f%f%f", &a,&b,&c);
    //define discriment
    int d = b*b - 4*a*c ;
    //define roots beforehand
    float root1 = (-b + sqrt(d))/2*a ;
    float root2 = (-b - sqrt(d))/2*a ; 

    //since int data type can store a maximum value of 2147483647
    // since int data type can store a min value of -214748368
    switch (d)
    {
    case 1 ... max :
        printf("%0.3f and %0.3f are the real roots of the above equation\n",root1,root2);
        break;
    case min ... -1 :
        printf("above equation has complex roots \n");
        break;
    case 0 :
        printf("%0.3f is the real and equal roots of the above equation\n",root1);
        break;
    default:
        printf("invalid input");
        break;
    }
return 0;
}