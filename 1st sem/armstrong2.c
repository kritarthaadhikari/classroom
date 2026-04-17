#include<stdio.h>
#include <math.h>
int main(){
    int rem=0, number, count=0,arm=0;
    printf("Enter a number:");
    scanf("%d",&number);
    int backup=number;
    do{
        rem= log(number);
        count++;
        number/=10;
    }while(number!=0);
number=backup;
 do{
    rem=number%10;
    arm+=pow(rem,count);
    number/=10;
 }while(number!=0);

 if(backup==arm){
    printf("%d is armstrong",backup);
}
else{
    printf("%d is not armstrong",backup);
}

return 0;
}
