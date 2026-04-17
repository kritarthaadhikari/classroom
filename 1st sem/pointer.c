#include <stdio.h>
int sumAvg(int *pM, int *pN);

int main(){
    int M,N;
    printf("Enter the lower limit M:");
    scanf("%d",&M);
    printf("Enter the upper limit N:");
    scanf("%d",&N);
    sumAvg(&M,&N);
}
int sumAvg(int *pM, int *pN)
{
    int sum=0;
    float average=0;
    int *psum=&sum;
    float *paverage=&average;
    int i;
    for(i=*pM;i<=*pN;i++){
        *psum+=i;
    }
    *paverage=*psum/(*pN-*pM+1);
    printf("The sum is %d",*psum);
    printf("The average is %f",*paverage);
    return 0;
}
