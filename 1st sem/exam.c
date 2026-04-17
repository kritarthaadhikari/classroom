#include <stdio.h>
void sortArray(int * arr, int size){
    int i,j;
    for(i=0;i<size;i++){
        for (j=i+1;j<size;j++){
            if (*(arr+i)>*(arr+j)){
                *(arr+i)=*(arr+j)+*(arr+i)-(*(arr+j)=*(arr+i));
            }
        }
    }
    printf("Ascending order:\n");
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
int main(){
    int n, arr[10],i;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sortArray(arr,n);
    return 0;
}