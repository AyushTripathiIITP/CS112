#include<stdio.h>

typedef struct account_op{
    int accountNumber;
    char name[500];
    int cos_num;
    int bal;
}ac;

int main(void){
    //progrmae to open bank account
    ac opening[5000];
    int cus;
    prinf("Enter the Number of customer\n");
    scanf("%d", &cus);
    for(int i =0 ; i< cus ; i++){
        printf("Enter your name\n");
        scanf("%s", &opening[i].name);
        printf("Enter your updated balance\n");
        scanf("%d", &opening[i].bal);
        opening[i].accountNumber = i;
        opening[i].cos_num = i ;
    }
    //progrmae to deposit
    int acNum , acBal;
    printf("Enter you account number\nEnter the balance to add");
    scanf("%d %d", &acNum , &acBal);
    for(int i =0 ; i < cus ; i++){
        if(opening[i].accountNumber == acNum){
            opening[i].bal += acBal ;
            break;
        }
    }
    //programe to withdraw
    int accNum , accBal;
    printf("Enter the account number\nEnter the withdrawn amount\n");
    scanf("%d %d", &accNum , &accBal);
    for(int i=0 ; i < cus ; i++){
        if(opening[i].accountNumber == accNum){
            opening[i].bal += accBal ;
            break;
        }
    }
    //programme to transfer
    int sender, reciever, amt;
    scanf("%d %d %d", &sender , &reciever , &amt);
    for(int i = 0 ; i< cus ; i++){
        if(opening[i].accountNumber == sender){
            opening[i].bal -= amt;
            break;
        }
    }
    for(int i = 0 ; i< cus ; i++){
        if(opening[i].accountNumber == reciever){
            opening[i].bal += amt;
            break;
        }
    }
    //programme to display account details
    int acccNum;
    scanf("%d", &acccNum);

    for(int i =0 ; i <cus ; i++){
        if(opening[i].accountNumber == acccNum){
        printf("Name: %s", opening[i].name);
        printf("Account Numner: %d", opening[i].accountNumber);
        printf("Customer Number: %d", opening[i].cos_num);
        printf("Balance: %d", opening[i].bal);
        }
    }
return 0;
}