#include<stdio.h>
#include <math.h>
int main(){
    int rem=0, number, count=0,arm=0;
    printf("Enter a number:");
    scanf("%d",&number);
    int backup=number;
    for(;number>0;number/=10){
        count++;
    }
    number=backup;
    for(;number>0;number/=10){
        rem= number%10;
        arm+=pow(rem,count);
    }
if(backup==arm){
    printf("%d is armstrong",backup);
}
else{
    printf("%d is not armstrong",backup);
}
return 0;
}
