#include <stdio.h>
int main(){
    int N,count=0;
    float average=0,sum=0;
    int i,n;
    printf("Case 1:\n");
      while(N>=0){
        printf("Enter a number:");
        scanf("%d",&N);
       if(N>0){
         sum+=N;
        count++;
       }
    }
    printf("Sum= %f\n",sum);
    average= sum/count;
    printf("Average is %.2f",average);

    printf("Case 2:\n");
    sum=0;
    count=0;
    printf("Enter the numbers:");
    scanf("%d",&n);
   for(i=1;i<=n;i++){
      printf("Enter a number:");
        scanf("%d",&N);
       if(N>0){
         sum+=N;

       }
         count++;
    }

   printf("Sum= %f\n",sum);
    average= sum/count;
    printf("Average is %.2f",average);


    return 0;

}
