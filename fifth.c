#include <stdio.h>
#include<math.h>
void main(){
    int arr[10][10],sum=0;
    int i,j,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("Enter an element");
    scanf("%d", &arr[i][j]);
    }}

    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j){
        sum+=arr[i][j];
        }
        else if (i+j==n-1){
        sum+=arr[i][j];
        }

    }}
    if(n%2!=0){
        sum+=arr[1][1];
    }
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("%d ",arr[i][j]);
    }
    printf("\n");}

    int temp=sum,count=0,rem,arm=0;
    while(temp!=0){
        temp/=10;
        count++;
    }
    temp=sum;
    while(temp!=0){
        rem=temp%10;
        arm+=pow(rem,count);
        temp/=10;
    }
    if(arm==sum){
        printf("%d is armstrong",sum);
    }
    else{
        printf("%d is not armstrong",sum);
    }

}
