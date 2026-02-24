#include<stdio.h>
int main(){
    char ch='c';
    float pi=3.14;
    int num=3, number= 17;
    printf("%%f\n");
    printf("%9d\n",num);
    printf("%3c\n",ch);
    printf("%.2f\n",pi);
    printf("%.2f%7d\n",pi,number);
    return 0;
}
