#include<stdio.h>

int main(void){

    //input values from user

    float principal,rate;
    printf("Enter the principal: \n");
    scanf("%f", &principal);

    printf("Enter the interest rate: \n");
    scanf("%f", &rate);

    // calculate maturity value by the formulae P(1+ r/100)^3
    
    float b = 1+ (rate/100) ;
    float maturityValue = principal*b*b*b;

    printf("maturity value at the end of three year is:%f", maturityValue);

return 0;
}