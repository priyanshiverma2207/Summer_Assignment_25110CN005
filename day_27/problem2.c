// WAP to create employee management system.

#include<stdio.h>

int main()
{
    int id[50] , i , n;
    char name[50][20];
    float salary[50];

    printf("Enter number of employee:");
    scanf("%d" , &n);

    for(i=0 ; i<n ; i++)
    {
        printf("\nEmployee %d\n" , i + 1);

        printf("Enter ID:");
        scanf("%d" , &id[i]);

        printf("Enter Name:");
        scanf("%s" , name[i]);

        printf("Enter Salary:");
        scanf("%f", &salary[i]);
    }
    printf("\nEmployee Records:\n");
    printf("ID\tName\tSalary\n");

    for(i=0 ; i<n ; i++)
    {
        printf("%d\t%s\t%.2f\n",id[i],name[i],salary[i]);
    }
    return 0;
}
/*Enter number of employee:2

  Employee 1
  Enter ID:2333
  Enter Name:priya
  Enter Salary:67888
  
  Employee 2
  Enter ID:6565
  Enter Name:riya
  Enter Salary:3578

  Employee Records:
  ID     Name     Salary
  2333   priya     67888.00
  6565   riya      36564.00
  */