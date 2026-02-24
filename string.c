#include <stdio.h>
int main(){
    char str1[20], str2[20];
    printf("Enter string1");
    scanf("%[^\n]s",str1);
    printf("Enter string2:");
    scanf(" %[^\n]s",str2);
    int i=0,j=0;
    char sum[40];
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("%s",str1);
    return 0;
}
