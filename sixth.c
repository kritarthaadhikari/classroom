#include <stdio.h>
#include<math.h>
void main(){
    int arr[4][4],min;
    int i,j,n=4;
    printf("4d Array\n");
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("Enter an element");
    scanf("%d", &arr[i][j]);
    }}
    min=arr[0][0];
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(min>arr[i][j]){
        min= arr[i][j];
        }
    }}
    if( min%2==0){
            printf("Replacing secondary elements\n");
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){

    if(i!=j){
    arr[i][j]=min;
        }}
    }}
    else {
            printf("Replacing principal diagonal\n");
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    if(i==j){
        arr[i][j]=min;}
    }}}

for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("%d\t",arr[i][j]);
       }
       printf("\n");
        }
    }
