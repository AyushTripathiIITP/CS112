#include<stdio.h>
#include<string.h>

int* myStrStr(char* s , char* a){
    int slow= 0,f = 0;
    int* ind;
    for(int fast= 0 ; fast < strlen(s) ; fast++){
        if(*(a + slow) == *(s + fast) && slow < strlen(a)){
            ++slow;
            ind = &fast ;
            f = 1;
        }
        else if( *(a + slow) != *(s + fast) && f == 1){
            ind = NULL ;
            f = 0;
            slow = 0;
        }
    }
    return ind;
}

int main(void){
    char s[500] , a[500];
    scanf("%s %s", s ,a);
    int* ind;
    ind = myStrStr(s , a);
    printf("%i" , *ind - strlen(a));
    //returns index wrt to 0 base
return 0;
}