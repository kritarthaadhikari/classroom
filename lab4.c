#include <stdio.h>
int main(){
    int UL, LL,num1,num2,num;
    int sum=0,i;
    printf("enter two numbers upper limit and lower limit:");
    scanf("%d%d",&UL,&LL);
    printf("enter two numbers P and Q:");
    scanf("%d%d",&num1,&num2);
    num= LL;

    while(num>=LL && num<=UL){
        if (num %num1 ==0 && num%num2!=0){
            sum+=num;
        }
        num++;
    }
      printf("The sum is %d",sum);
sum=0;
    num=LL;
    do{
         if (num %num1 ==0 && num%num2!=0){
            sum+=num;
        }
        num++;
    }while(num>=LL &&num<=UL);
    printf("The sum is %d",sum);
sum=0;

    for(i=LL;i<=UL;i++){
    if (i %num1 ==0 && i%num2!=0){
            sum+=i;
        }
    }


    printf("The sum is %d",sum);
    return 0;
}
