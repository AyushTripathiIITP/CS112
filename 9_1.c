#include<stdio.h>
#include<string.h>

int checkSubstring(char p[] , char fu[] , int slow , int i , int a){
    if(i < strlen(p) && slow < strlen(fu)){
    if(fu[slow] == p[i]){
        ++a;
        checkSubstring(p , fu , ++slow , ++i , a); //recursivity
    }
    else{
        return 0;
    }
    }
    else{
        if(a != strlen(fu)){
            return 0;
        }
        else{
            return i;
        }
    }
}
int main(void){
    //takes the input from the user
    static char p[5000];
    printf("PLEASE ENTER THE STRING P\n");
    scanf("%[^\n]%*c" , p);

    static char q[5000];
    printf("PLEASE ENTER THE STRING Q\n");
    scanf("%[^\n]%*c" , q);

    static char r[5000];
    printf("PLEASE ENTER THE STRING R\n");
    scanf("%[^\n]%*c" , r);

    //code to find if q is present in p or not and at which position

    int slow = 0, i =0, a= 0,aim=0 ;
    for( ; i < strlen(p) ; i++){
        if(q[slow] == p[i]){
            aim += checkSubstring(p , q , slow , i , a);
        }
    }
    //repeat the algorithm for finding the r in p
    int slow2 = 0, i2 =0, a2= 0,aim2=0 ;
    for( ; i2 < strlen(p) ; i2++){
        if(r[slow2] == p[i2]){
            aim2 += checkSubstring(p , r , slow2 , i2 , a2); //same can be used
        }
    }
    if(aim && aim2 != 0 && aim - strlen(q) < aim2 - strlen(r) && aim < aim2 - strlen(r)){
        printf("The pattern Q*R is found in the P at index %i\n" , aim - strlen(q));
        return 0;
    }
    else if(strlen(q) == 0 && aim2 - strlen(r) != 0){
        printf("The pattern Q*R is found int the P at index %i\n", aim2 - strlen(r));
    }
    else if(strlen(r) == 0 && aim - strlen(q) != 0){
        printf("The pattern Q*R is found int the P at index %i\n", aim - strlen(q));
    }
    else{
        printf("The pattern is not found in the P\n");
        return 0;
    }
return 0;
}