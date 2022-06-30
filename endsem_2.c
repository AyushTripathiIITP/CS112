#include<stdio.h>

char stack[256];
int count = -1 ;

void push(char c){
    stack[++count] = c;
}

char pop(){
    int d = stack[count];
    --count;
    return d;
}

typedef struct npp
{
    char c;
    int put;
}var;


int main(void){
    printf("Input Sequence of Operations: \n");
    char str[256];
    var iden[256];
    scanf("%s", str);
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] != 'P'){
            push(str[i]);
            printf("Push time of %c : %d\n", str[i] , i+1);
            iden[i].c = str[i];
            iden[i].put = i+1;
        }
        else{
            char ch = pop();
            int time = i+1 ;
            printf("Pop time of %c : %d\n", ch , time);
            for(int i= 0 ; ; i++){
                if(iden[i].c == ch){
                    printf("Total time of %c in stack is : %d\n", ch , time - iden[i].put);
                    break;
                }
            }
        }
    }
return 0;
}