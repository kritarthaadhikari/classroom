#include <stdio.h>
struct student
{
    char name[20];
    int roll;
}s;
int main(){
    FILE *fp;
    fp= fopen("data.txt","w");
    printf("Enter your name:");
    gets(s.name);
    printf("Enter your roll number:");
    scanf("%d",&s.roll);
    fwrite(&s,sizeof(struct student),1,fp);
    printf("File written successfully!\n");
    fclose(fp);
    fp=fopen("data.txt","r");
    printf("Contents of the file:\n");
    fread(&s,sizeof(struct student),1,fp);
    printf("Name:%s\nRoll Number:%d\n",s.name,s.roll);
    fclose(fp);
    return 0;
}
