#include<stdio.h>

int main(void){
    int amt;
    printf("Enter the amount you want\n");
    scanf("%d", &amt);
    int nos_note[7];
    int note[7]={100,50,20,10,5,2,1};

    //establish a loop that takes i th note and finds its integral nos. by /
    //then use it to depreciate the value of amout 
    //repeat until amt > 0

    for(int i=0 ; i<7 ; i++){
        if(amt > 0){
        nos_note[i]= amt / note[i] ;
        amt -= note[i]*nos_note[i] ;
        printf("You need %d number of notes of value %d\n",nos_note[i],note[i]);
        }
        else{
            break;
        }
    }
return 0;
}