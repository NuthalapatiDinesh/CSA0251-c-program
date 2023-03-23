#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[100];
    float marks;
} s[50];

int main(){
    int i;
    printf("detalis of 3 students:\n");
    for(i=0;i<3;i++){
    printf("\nEnter roll number: ");
    scanf("%d",&s[i].roll);
    printf("Enter the name: ");
    scanf("%s",s[i].name);
    getchar();
    printf("Enter the marks: ");
    scanf("%f",&s[i].marks);
    }
    printf("\nstudent details is displayed\n\n");
    for(i=0;i<3;i++){
        printf("Roll number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }
    return 0;
}

