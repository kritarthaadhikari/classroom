#include <stdio.h>
int main(){
    int rem=0,backup,R=0,i=1,count=0;
    int a=0,b=1,c=0;
    long long int number;
    printf("Enter a number");
    scanf("%lld",&number);
    while (number!=0){
        rem= number%10;
        R+=rem;
        number/=10;
    }
    printf("%d\n",R);
    backup=R;

    while(backup>=10){
            R=0;
        while (backup!=0){
            rem= backup%10;
            R+=rem;
            backup/=10;
        }
        printf("%d\n",R);
    if(R>=10){
        backup=R;
    }
    }
    if(R<10){

        while(i<=R){
            if(R%i==0){
                count++;
            }
            i++;
        }
        goto label;
    }
     label:
        if(count>2){
            printf("%d is composite",R);
        }
        else if (count==2){
            printf("%d is prime",R);
        }
        else{
            printf("The number is 1 ");
        }
    i=1;
    if (count>2){
        while(i<=R-1){
            a=c;
            c=a+b;
            b=a;
            i++;
        }
        printf("\nThe %dth term of fibonacci series is %d",R-1,a);
    }

    else if (count==2){
            while(i<=R+1){
            a=c;
            c=a+b;
            b=a;
            i++;
        }
        printf("\nThe %dth term of fibonacci series is %d",R+1,a);

    }
    else{
         while(i<=R){
            a=c;
            c=a+b;
            b=a;
            i++;
        }
        printf("\nThe %dth term of fibonacci series is %d",R,a);
    }






}
