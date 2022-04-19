#include<stdio.h>
#include<math.h>

int main(void){
    float deg;
    float thold;
    float compare=1.0;
    int precision=1;
    printf("Enter the angle(in degree)\n");
    scanf("%f", &deg);
    printf("Enter the number decimal place you want threshold\n");
    scanf("%f", &thold);
    int t = thold ;
    //make the number that you will compare like for thold = 3 make 0.001
    while(thold != 0){
        compare /= 10 ;
        thold--;
    }
    //in order to round off the number this was needed
    while(t != 0){
        precision *= 10;
        t-- ;
    }
    // convert the degree to radian 
    float rad = (deg / 180.0)*3.14 ;
    float x= rad;
    float fx = rad;
    for(int i=1 ; i < 100 ; i++){
        x = x*((-1*pow(rad , 2))/((i+2)*(i+1)));
        if(x > 0 && x >= compare){
        fx += x ;
        }
        else if(x < 0 && -1*x >= compare){
        fx += x;
        }
        else{
            break;
        }
    }
    float num = fx;
    num = floor(precision*num)/precision ;

    printf("%f" , num);

return 0;
}