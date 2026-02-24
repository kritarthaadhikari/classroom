#include <stdio.h>
#include<math.h>
void main(){
    int arr[10],min,max,temp=0;
    int i,j,n,upd[10];
       printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Enter an element");
    scanf("%d", &arr[i]);
    }
    min=arr[0];
    max= arr[0];
    for(i=0;i<n;i++){
        if(min>arr[i]){
        min= arr[i];
        }
        else if(max<arr[i]){
        max= arr[i];
        }
    }
    printf("%d is maximum\n",max);
    printf("%d is minimum\n",min);
    for(i=0;i<n;i++){
            for(j=i;j<n;j++){


        if(arr[i]>arr[j]){
           temp= arr[i];
           arr[i]=arr[j];
           arr[j]=temp;

        }}
    }
    printf("In ascending order:\n");
    for(i=0;i<n;i++){
     printf("%d\t",arr[i]);
}
printf("\n");
 printf("In descending order:\n");
     for(j=n-1;j>=0;j--){
        printf("%d\t",arr[j]);
     }
    }





