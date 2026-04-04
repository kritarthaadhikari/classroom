#include <stdio.h>
int main(){
    FILE *filep;
    filep=fopen("file.txt","w");
    char ch,str[20];
    do{
        getchar();
        printf("Enter string\n");
        gets(str);
        fputs(str,filep);
        fputs("\n",filep);
        puts("Any more strings?");
        ch=getchar();
    }while(ch=='Y'||ch=='y');
    printf("Written successfully!\n");
    fclose(filep);
    filep= fopen("file.txt","r");
    while(fgets(str,20,filep)){
        puts(str);
    }
    fclose(filep);

    return 0;
}