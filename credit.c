#include <stdio.h>

int main() {

    long cardnumber;
    printf("Credit card number: ");
    scanf("%ld", &cardnumber);
    int card1, card2, card3, card4, card5, card6, card7, card8;
    card1 = ((cardnumber %100)/10)*2;
    card2 = ((cardnumber % 10000)/1000*2);
    card3 = ((cardnumber % 1000000)/100000*2);
    card4 = ((cardnumber % 100000000)/10000000*2);
    card5 = ((cardnumber % 10000000000)/1000000000*2);
    card6 = ((cardnumber % 1000000000000)/100000000000*2);
    card7 = ((cardnumber % 100000000000000)/10000000000000*2);
    card8 = ((cardnumber % 10000000000000000)/1000000000000000*2);

    card1 = (card1 % 100/10) + (card1 %10);
    card2 = (card2 % 100/10) + (card2 %10);
    card3 = (card3 % 100/10) + (card3 %10);
    card4 = (card4 % 100/10) + (card4 %10);
    card5 = (card5 % 100/10) + (card5 %10);
    card6 = (card6 % 100/10) + (card6 %10);
    card7 = (card7 % 100/10) + (card7 %10);
    card8 = (card8 % 100/10) + (card8 %10);

    int numcard = card1+card2+card3+card4+card5+card6+card7+card8;
    int card9, card10, card11, card12, card13, card14, card15, card16;

    card9 = (cardnumber %10);
    card10 = ((cardnumber % 1000)/100);
    card11 = ((cardnumber % 100000)/10000);
    card12 = ((cardnumber % 10000000)/1000000);
    card13 = ((cardnumber % 1000000000)/100000000);
    card14 = ((cardnumber % 100000000000)/10000000000);
    card15 = ((cardnumber % 10000000000000)/1000000000000);
    card16 = ((cardnumber % 1000000000000000)/100000000000000);

    int numcard2 = card9+card10+card11+card12+card13+card14+card15+card16;
    int numcard3 = numcard + numcard2;

    int length = 0;
    long visa = cardnumber;
    long amex = cardnumber;
    long master = cardnumber;

    if((numcard3 % 10)!=0){
        printf("%s\n", "Invalid");
        return 0;
    }
    while (cardnumber >0)
    {
        cardnumber = cardnumber/10;
        length++;
    }
    while ( visa >=10)
    {
        visa /= 10;
    }
    if(visa == 4 && (length ==13 || length == 16)) {
        printf("%s\n", "VISA");
        return 0;
    }
    while (amex >= 10000000000000)
    {
        amex/=10000000000000;
    }
    if (length==15 && (amex == 34 || amex == 37)) {
        printf("%s\n", "AMEX");
        return 0;
    }
    while (master >= 100000000000000)
    {
       master /= 100000000000000;
    }
    if (length==16 &&(master==51||master==52||master==53||master==54||master==55)){
        printf("%s\n","MASTERCARD");
        return 0;
    } else printf("%s\n", "INVALID");
    return 0;    
}