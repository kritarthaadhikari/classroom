#include <stdio.h>
struct student{
  char name[30];
    int rollNo;
    float marks;
};
int main(){
    int i,n;
    printf("Enter the records of the student:\n");
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){
        printf("Enter the name:");
        fflush(stdin);
        scanf("%[^\n]s",s[i].name);
        printf("Enter the roll number:");
        scanf("%d",&s[i].rollNo);
        printf("Enter the marks");
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<n;i++){
        printf("Student-%d\nName:%s\nMarks:%.2f\n",s[i].rollNo,s[i].name,s[i].marks);
    }
    return 0;
}