#include <stdio.h>

int main(){
    float power, bill=0;
    int customerNo;
    printf("\nEnter your customer No:");
    scanf("%d",&customerNo);
    printf("Enter the power consumed:");
    scanf("%f",&power);

    if(power<=50){
        bill=0.50* power;
    }
    else if (power<=100){
        bill= 100+ (power-50)*0.65;
    }
    else if( power<=200){
        bill= 230+ (power-100)*0.80;
    }
    else{
        bill= 390+ (power-200);
    }
    printf("----------------------------\n");
    printf("----------Your Bill---------\n");
    printf("Customer Id:%d\n",customerNo);
    printf("Total= %8.2f\n",bill);
    printf("----------------------------\n");
    printf("----------------------------\n");
    return 0;
}


