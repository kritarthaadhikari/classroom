#include <stdio.h>

int main(){
    float SP, tax=0;
    int item;
    printf("Enter your sale price:");
    scanf("%f",&SP);
    printf("Enter your item type:\n");
    printf("1.Grocery Items\n2.Cosmetics Items");
    printf("\n3.Clothing Items\n4.Liquor Items");
    scanf("%d",&item);

    switch (item){
    case 1:
        tax= 0.1* SP;
        break;

    case 2:
        tax= 0.15* SP;
        break;

    case 3:
        tax= 0.2* SP;
        break;

    case 4:
        tax= 0.24* SP;
        break;

    default:
        printf("Invalid option");
        break;
    }
    SP+= tax;
    if (SP> 6000){
        SP-=0.02*SP;
    }
    printf("Your total is %.2f",SP);
    return 0;
}
