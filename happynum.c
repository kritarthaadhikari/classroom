#include <stdio.h>
int happyNum(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0, temp,backup=n;
    while(backup>=10)
    {while (n>0){
        temp= n%10;
        sum+=temp*temp;
        n/=10;
    }
    backup=sum;
n=backup;
sum=0;}

return backup;

}
int main(){
    if(happyNum()==1){
        printf("Happy Number");
    }
    else{
        printf("Not a Happy Number");
    }
    return 0;
}