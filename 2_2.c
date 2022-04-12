#include<stdio.h>

int main(void){
    int price, hdfc , sbi , axis , prime;
    float price1 , price2 , price3 ;
    float discountPrice;
    int card;
    printf("ENTER THE PRICE OF MOBILE\n");
    scanf("%d", &price);

    printf("DO YOU HAVE HDFC CARD?(ENTER 1 OR 0)\n");
    scanf("%d", &hdfc);

    printf("DO YOU HAVE SBI CARD?(ENTER 1 OR 0)\n");
    scanf("%d", &sbi);

    printf("DO YOU HAVE AXIS CARD?(ENTER 1 OR 0)\n");
    scanf("%d", &axis);

    printf("DO YOU HAVE PRIME MEMBERSHIP?(ENTER 1 OR 0)\n");
    scanf("%d", &prime);

    if(hdfc ==1 && sbi == 1 && axis == 1){
        float discount1 = (0.1*price);
        if(discount1 <= 1250 && price > 10000){
            price1 = (price - discount1) ;
        }
        else if(discount1 > 1250 && price > 10000){
            price1 = (price - 1250) ;
        }
        else{
            price1 = price;
        }

        float discount2 = (0.15*price);
        if(discount2 <= 1250 && price > 15000){
            price2 = (price - discount2) ;
        }
        if(discount2 > 1250 && price > 15000){
            price2 = (price - 1250) ;
        }
        else{
            price2 = price ;
        }

         float discount3 = (0.05*price);
        if(discount3 <= 2000){
            price3 = (price - discount3);
        }
        if(discount3 > 2000){
            price3 = (price - 2000);
        }
        else{
            price3 = price ;
        }

    if(price1 >= price2 && price2 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 >= price2 && price2 <= price3){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 <= price2 && price3 <= price2 && price2 <= price1){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 <= price3){
        discountPrice = price1;
        card = 1;
    }
    }
    if(hdfc==1 && sbi==1 && axis==0){
        float discount1 = (0.1*price);
        if(discount1 <= 1250 && price > 10000){
            price1 = (price - discount1) ;
        }
        else if(discount1 > 1250 && price > 10000){
            price1 = (price - 1250) ;
        }
        else{
            price1 = price;
        }

        float discount2 = (0.15*price);
        if(discount2 <= 1250 && price > 15000){
            price2 = (price - discount2) ;
        }
        if(discount2 > 1250 && price > 15000){
            price2 = (price - 1250) ;
        }
        else{
            price2 = price ;
        }
        price3 = price;

    if(price1 >= price2 && price2 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 >= price2 && price2 <= price3){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 <= price2 && price3 <= price2 && price2 <= price1){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 <= price3){
        discountPrice = price1;
        card = 1;
    }
    }
    if(hdfc ==1 && sbi ==0 && axis ==0){
        float discount1 = (0.1*price);
        if(discount1 <= 1250 && price > 10000){
            price1 = (price - discount1) ;
        }
        else if(discount1 > 1250 && price > 10000){
            price1 = (price - 1250) ;
        }
        else{
            price1 = price;
        }

        price2 = price ;
        price3 = price ;

    if(price1 >= price2 && price2 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 >= price2 && price2 <= price3){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 <= price2 && price3 <= price2 && price2 <= price1){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 <= price3){
        discountPrice = price1;
        card = 1;
    }
    }
    if(hdfc== 1 && sbi ==0 && axis ==1){
        float discount1 = (0.1*price);
        if(discount1 <= 1250 && price > 10000){
            price1 = (price - discount1) ;
        }
        else if(discount1 > 1250 && price > 10000){
            price1 = (price - 1250) ;
        }
        else{
            price1 = price;
        }

        price2 = price ;

        float discount3 = (0.05*price);
        if(discount3 <= 2000){
            price3 = (price - discount3);
        }
        if(discount3 > 2000){
            price3 = (price - 2000);
        }
        else{
            price3 = price ;
        }

    if(price1 >= price2 && price2 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 >= price2 && price2 <= price3){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 <= price2 && price3 <= price2 && price2 <= price1){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 <= price3){
        discountPrice = price1;
        card = 1;
    }
    }
    if(hdfc ==0 && sbi == 1 && axis== 1){
        price1 = price ;
         float discount2 = (0.15*price);
        if(discount2 <= 1250 && price > 15000){
            price2 = (price - discount2) ;
        }
        if(discount2 > 1250 && price > 15000){
            price2 = (price - 1250) ;
        }
        else{
            price2 = price ;
        }

         float discount3 = (0.05*price);
        if(discount3 <= 2000){
            price3 = (price - discount3);
        }
        if(discount3 > 2000){
            price3 = (price - 2000);
        }
        else{
            price3 = price ;
        }
    
    if(price1 >= price2 && price2 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 >= price2 && price2 <= price3){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 <= price2 && price3 <= price2 && price2 <= price1){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 <= price3){
        discountPrice = price1;
        card = 1;
    }
    }
    if(hdfc ==0 && sbi == 1 && axis ==0){
    price1 = price;
    price3 = price;
     float discount2 = (0.15*price);
        if(discount2 <= 1250 && price > 15000){
            price2 = (price - discount2) ;
        }
        if(discount2 > 1250 && price > 15000){
            price2 = (price - 1250) ;
        }
        else{
            price2 = price ;
        }

    if(price1 >= price2 && price2 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 >= price2 && price2 <= price3){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 <= price2 && price3 <= price2 && price2 <= price1){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 <= price3){
        discountPrice = price1;
        card = 1;
    }
    }
    if(hdfc==0 && sbi ==0 && axis ==0){
        price1 = price ;
        price2 = price ;
        price3 = price ;
        
    if(price1 >= price2 && price2 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 >= price2 && price2 <= price3){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 <= price2 && price3 <= price2 && price2 <= price1){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 <= price3){
        discountPrice = price1;
        card = 1;
    }
    }
    if(hdfc == 0 && sbi ==0 && axis ==1){
        price1 = price;
        price2 = price;
         float discount3 = (0.05*price);
        if(discount3 <= 2000){
            price3 = (price - discount3);
        }
        if(discount3 > 2000){
            price3 = (price - 2000);
        }
        else{
            price3 = price ;
        }
        

    if(price1 >= price2 && price2 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 >= price2 && price2 <= price3){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 >= price3){
        discountPrice = price3 ;
        card = 3;
    }
    else if(price1 <= price2 && price3 <= price2 && price2 <= price1){
        discountPrice = price2 ;
        card = 2;
    }
    else if(price1 <= price2 && price3 <= price2 && price1 <= price3){
        discountPrice = price1;
        card = 1;
    }
    }

    float netPrice;

    if(prime ==1){
        float discount4;
        discount4 = (0.05*discountPrice);
        netPrice = discountPrice - discount4 ;
    }
    else{
        netPrice = discountPrice ;
    }

    printf("final price is %f\n", netPrice);

    if(card == 1){
        printf("HDFC BANK CARD SHOULD BE USED\n");
    }
    else if(card == 2){
        printf("SBI BANK CARD SHOULD BE USED\n");
    }
    else if(card ==3){
        printf("AXIS BANK CARD SHOULD BE USED\n");
    }
return 0;
}