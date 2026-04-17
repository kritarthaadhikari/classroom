#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=n;j>=i;j--){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}