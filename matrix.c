//  Write a program in C that reads a matrix of size NxN, replace the elements of primary
// diagonal by the minimum value of the entered matrix and display the resultant matrix.

#include <stdio.h>
int main(){
    int N,i,j;
    printf("enter the order of matrix NxN:\n");
    scanf("%d",&N);
    int arr[N][N],backup[10],len=0;
    printf("Enter the elements of matrix:\n");
    for ( i=0;i<N;i++){
        for( j=0;j<N;j++){
            printf("%dth row, %dth column:",i+1,j+1);
            scanf("%d",&arr[i][j]);
            backup[len]=arr[i][j];
            len++;
        }
    }
   
    for(i=0;i<N*N;i++){
        for(j=i+1;j<N*N;j++){
            if(backup[i]>backup[j]){
                backup[i]=backup[i]+backup[j]-(backup[j]=backup[i]);
            }
    }}
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i==j){
                arr[i][j]=backup[0];
            }
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
    printf("Enter elements:\n");
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &arr[i][j]);

            if(i == 0 && j == 0)
                min = arr[i][j];   // initialize
            else if(arr[i][j] < min)
                min = arr[i][j];
        }
    }
*/