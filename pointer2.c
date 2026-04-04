#include <stdio.h>
#include <conio.h>
#define max 100
struct student{
    int rollNo;
    char name[50];
    float marks;
};
void inputstudent(struct student *s,int i){
    printf("Enter roll number:");
    scanf("%d",&s[i].rollNo);
    printf("Enter the name of the student:");
    getchar();
    scanf("%[^\n]s",s[i].name);
    printf("Enter the aggregate marks:");
    scanf("%f",&s[i].marks);
}
void display(struct student *s, int n){
    int i;
    for(i=0;i<n;i++){
        printf("Student- %d\n",s[i].rollNo);
        printf("Name:%s\n",s[i].name);
        printf("Marks:%.2f\n",s[i].marks);
    }
}

int main(){
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student students[max];

    for(int i=0;i<n;i++){
        printf("Enter Student details:\n");
        inputstudent(&students[i],i);
    }
    printf("Displaying the records:");
    display(&students[0],n);
}
