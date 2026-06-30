// WAP to create student record management system.

#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter number of students:");
    scanf("%d" , &n);

    for(i=0 ; i<n ; i++)
    {
        printf("\nStudent %d\n" , i+1);

        printf("Enter Roll no:");
        scanf("%d", &s[i].roll);

        printf("Enter Name:");
        scanf("%s" , s[i].name);

        printf("Enter Marks:");
        scanf("%f", &s[i].marks);
    }

    printf("\n\nStudent Records:\n");
    printf("Roll no\tName\tMarks\n");

    for(i=0 ; i<n ; i++)
    {
        printf("%d\t%s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
    return 0;
}
/* Enter of student : 2
   
   Student 1
   Enter Roll no:44
   Enter Name:riya
   Enter Marks:56
   
   Student 2
   Enter Roll no:23
   Enter Name:priya
   Enter marks:76

   Student Records:
   Roll no  Name  Marks
   44       riya  56.00
   23       priya 76.00
   */