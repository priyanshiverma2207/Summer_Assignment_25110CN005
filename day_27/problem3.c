// WAP to create salary management system.

#include<stdio.h>

int main()
{
    int empId;
    char name[50];
    float basicSalary , hra , da , totalSalary;

    printf("Enter Employee ID:");
    scanf("%d" , &empId);

    printf("Enter Employee Name:");
    scanf("%s" , name);

    printf("Enter Basic Salary:");
    scanf("%f" , &basicSalary);

    hra = basicSalary * 0.20;
    da = basicSalary * 0.10;

    totalSalary = basicSalary + hra + da;

    printf("\n---Salary Details---\n");
    printf("Employee ID:%d\n", empId);
    printf("Employee Name:%s\n",name);
    printf("Basic Salary:%.2f\n",basicSalary);
    printf("HRA: %.2f\n",hra);
    printf("DA:%.2f\n",da);
    printf("Total Salary:%.2f\n",totalSalary);

    return 0;
}
/* Enter Employee id:3445
   Enter Employee Name:priya
   Enter Basic Salary:5678
   
   ---Salary Details---
   Employee ID:3445
   Employee Name:priya
   Basic Salary:5678.00
   HRA:1135.60
   DA:567.80
   Total Salary:7381.40 */