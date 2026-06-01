/*WAP to find factorial of a given number.*/

#include<stdio.h>

int main()
{
    int n,i,fact=1;

    printf("Enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact *=i;
    }
    printf("factorial of %d is %d\n",n,fact);
    return 0;
}