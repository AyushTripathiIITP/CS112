#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool mainFunction(char s[] , char a[]){
    if(strlen(s) != strlen(a)){
        return false ;
    }
    else{
        for(int i=0 ; i<strlen(a) ; i++){
            if(s[i] < a[i]){
                return false;
            }
            else{
                return true;
            }
        }
    }
}
int main(void){
    char s1[500],s2[500];
    printf("Enter the String s1 and S2\n");
    scanf("%s %s", s1 , s2);
    if(mainFunction(s1 , s2)==true){
        printf("s2 > s1\n");
    }
    else{
        printf("s1 > s2\n");
    }
return 0;
}