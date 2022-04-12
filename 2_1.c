#include<stdio.h>

int main(void){
    long int income, area; //considering that income is int
    float cost = 0; 
    printf("input your income\n");
    scanf("%ld", &income );
    printf("input your land area\n");
    scanf("%ld", & area );

    //for BPL 
    if(income < 100000){
        if(area < 30){
            printf("you cannot buy less than 30sqm\n");
            return 0;
        }
        else if(area <= 40 && area >=30){
            cost = (30*5000) + (area - 30)*8000 ;
        }
        else{
            printf("you cannot buy more than 40sqm \n");
            return 0;
        }
    }
    //for middle class
    else if(income < 500000){
        if(area < 40){
            printf("you cannot buy less than 40sqm\n");
            return 0;
        }
        if(area <= 50 && area >= 40){
            cost = (40*7000) + (area - 40)*10000 ;
        }
        else{
            printf("you cannot buy more than 50sqm\n");
            return 0;
        }
    }
    //for upperClass
    else if(income >= 500000){
        if(area < 50){
            printf("you cannot buy less than 50 sqm\n");
            return 0;
        }
        if(area <= 60 && area >= 50){
            cost = (50*9000) + (area - 50)*11000 ;
        }
        else{
            printf("you cannot buy more than 60 sqm\n");
            return 0;
        }
    }

    printf("your cost will be %f\n", cost);
return 0;
}