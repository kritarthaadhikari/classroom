#include <stdio.h>
int nonSort(int arr[],int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if (arr[i]<arr[j]){
                arr[j]=arr[i]+arr[j]-(arr[i]=arr[j]);
            }
        }
    }
   
}
int main(){
    int N,i;
    printf("enter the total numbers N");
    scanf("%d",&N);
    int arr[N];
    printf("enter the elements of array:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    nonSort(arr,N);
    return 0;
}