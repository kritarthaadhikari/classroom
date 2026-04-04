#include <stdio.h>
struct student{
    char name[30];
    int rollNo;
    float marks;
};
int main(){
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student s[n];
    struct student *sp= s;
    printf("Enter the records of the students:\n");
    for(i=0;i<n;i++){
        printf("Enter the name:");
                fflush(stdin);
        scanf("%[^\n]s",(sp+i)->name);
        printf("Enter the roll number:");
        scanf("%d",&(sp+i)->rollNo);
        printf("Enter the marks");
        scanf("%f",&(sp+i)->marks);
    }
    for(i=0;i<n;i++){
        printf("Student-%d\nName:%s\nMarks:%.2f\n",(sp+i)->rollNo,(sp+i)->name,(sp+i)->marks);
    }
    return 0;
}
