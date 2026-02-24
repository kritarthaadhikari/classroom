#include <stdio.h>
int main(){
    int num[20],i,size;
    printf("Enter the size of array");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter a number:");
        scanf("%d",&num[i]);
    }
    printf("The entered numbers are:\n");
    for(i=0;i<size;i++){
        printf("%d\t",num[i]);
    }
    printf("\n");
int arr[20],j;
for(i=0;i<size;i++){
        arr[i]=0;
    for(j=i;j<size;j++){
        if(num[i]==num[j]){
            arr[i]+=1;
        }
    }
}
int H=arr[0],L=arr[0],D=0;
for(i=0;i<size;i++){
    if(H<arr[i]){
        H=arr[i];
    }
    else {
        L=arr[i];
    }
    }
D=L+H;
j=0;
int backup,rev=0,rem=0,palindrome[100];
for(i=10;i<=1001;i++){
        backup=i;
    while(backup!=0){
        rem= backup%10;
        rev=rev*10+rem;
        backup/=10;
    }
    if(i==rev){
    palindrome[j]=i;
    j++;
    }
    rev=0;
}
printf("%d is the %dth Palindrome term",palindrome[D-1],D);
return 0;

}
