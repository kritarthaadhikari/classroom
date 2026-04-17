#include <stdio.h>
struct student{
    char name[30];
    int roll;
    float marks;
};
int displayStudent(struct student s[], int n){
    for(int i=0;i<n;i++){
       if(s[i].marks>24){
            printf("Name: %sRoll: %d\nMarks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
       }
    }
    return 0;
    
}
int main(){
    int n;
    FILE *fp= fopen("students.txt", "w");
    if(fp==NULL)
        printf("Error opening file");
        return -1;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();
    struct student s[50];
    for(int i=0; i<n; i++){
        printf("Enter name of student %d: ", i+1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Enter roll and marks of student %d: ", i+1);
        scanf("%d %f", &s[i].roll, &s[i].marks);
        getchar();
        fwrite(&s[i],sizeof(struct student),1,fp);
        
    }
    displayStudent(s,n);
    printf("Written Successfully!");
    fclose(fp);
    return 0;
}