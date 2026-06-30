// WAP to create marksheet generation system.

#include<stdio.h>

int main()
{
    char name[50];
    int m1 , m2 , m3, total;
    float percentage;

    printf("Enter Student Name:");
    scanf("%s" , name);

    printf("Enter Marks of 3 Subjects:");
    scanf("%d %d %d" , &m1 , &m2 , &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n--Marksheet--\n");
    printf("Name: %s\n",name);
    printf("Total Marks:%d\n",total);
    printf("Percentage:%.2f%%\n",percentage);

    if(percentage >= 40)
      printf("Result:Pass");
    else
      printf("Result:Fail");

    return 0;
}
/* Enter Student Name:priya
   Enter Marks of 3 Subjects:44
   67
   55
   
   --Marksheet--
   Name:priya
   Total Marks:166
   Percentage:55.33%
   Result:Pass */