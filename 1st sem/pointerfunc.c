#include <stdio.h>
#include <stdlib.h>
void factorial(int *p){
    int i,fact=1;
    for(i=1;i<=*p;i++){
        fact*=i;
    }
    printf("The factorial of %d is %d",*p,fact);
}
int main(){
    int *ptr= (int *)malloc(sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    printf("Enter a number:");
    scanf("%d",ptr);
    factorial(ptr);
    return 0;
}