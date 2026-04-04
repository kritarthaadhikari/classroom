//Wap to sort element in ascending and descending order using func and pointer concept
#include <stdio.h>
int sortAsc(int *arr, int size ){
    int* temp = arr + 8;
    int i,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(*(arr + i) > j[arr]){
                arr[j]=arr[i]+arr[j]-(arr[i]=arr[j]);
                //a=b+a-(b=a)
            }
        }
    }
    printf("Ascending order:\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Descending order:\n");
    for(i=size-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}
int main(){
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size],i;
    printf("Enter %d numbers:",size);
    for(i=0;i<size;i++){

        scanf("%d",&arr[i]);
    }
    sortAsc(arr,size);
    return 0;
}
