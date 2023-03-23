//1
#include<stdio.h>
void main()
{
int n=0, f=1;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
    f=f*n;
n--;
}
printf("the factorial is %d",f);
}



//2
#include <stdio.h>
#include <string.h>
void main()
{
char str[50];
int i=0,count=0;
printf("enter the string\n");
fgets(str,100,stdin);
for(i=0;i<strlen(str);i++)
{
if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' ||str[i]=='u'){
count++;
}
}
printf("length=%d , No of Vowels=%d",(i-1),count);
}




//3
#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    float marks;
} s[10];

int main() {
    int i;

    printf("Enter details for 3 students:\n");
    for (i = 0; i < 3; i++) {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);
        getchar(); // read and discard the newline character

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nDisplaying details for the students:\n\n");
    for (i = 0; i < 3; i++) {
        printf("Roll number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0;
}




//4
#include <stdio.h>

int main() {
    int a[10], i=0, ele=0, flag=0;

    printf("Enter array elements: ");
    for(i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &ele);

    for(i=0; i<10; i++) {
        if(a[i] == ele) {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("Element found\n");
    else
        printf("Element not found\n");

    return 0;
}




//5
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The diagonal elements of the matrix are:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}



