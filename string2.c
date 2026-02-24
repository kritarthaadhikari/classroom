#include <stdio.h>
int main(){
    char str1[20],str[20];
    int i,rev=1,len=0;
    printf("Enter a string");
    scanf("%[^\n]s", str1);
    while(str1[len]!='\0'){
        len++;
    }
    for(i=0;i<len/2;i++){
        if(str1[i]!=str1[len-i-1]){
            rev=0;
            break;
        }
        else{
            rev=1;
        }
    }
    if(rev==1){
        printf("%s is Palindrome",str1);
    }
    else{
        printf("%s is Not palindrome",str1);
    }
    return 0;
}
