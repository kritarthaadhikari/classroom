#include <stdio.h>

int main(){
 float salesPrice, salesTax, netAmt;
    char itemType;
    printf("Enter the sales price:");
    scanf("%f",&salesPrice);

    printf("Enter your item type(N/F)");
    scanf(" %c",&itemType);

    if(itemType=='N'){
        salesTax= 0.06* salesPrice;
    }
    else{
        salesTax= 0.13* salesPrice;
    }
    netAmt= salesPrice+salesTax;
    printf("Your net price is %.2f",netAmt);
return 0;
}
