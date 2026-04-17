#include<stdio.h>
int hcf(int,int);
int main(){

    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("The hcf of %d and %d is %d",a,b,hcf(a,b));
    return 0;
}
int hcf(int a,int b){
    if(b%a==0){
        return a;
    }
    return hcf(b%a,a);
}