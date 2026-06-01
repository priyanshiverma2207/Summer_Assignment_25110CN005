/*WAP to print multiplication table of a given number.*/

#include<stdio.h>

int main()
{
    int n,i,product;

    printf("enter n: ");
    scanf("%d",&n);

    if(n == 0)
    {
        printf("please enter a non zero number.\n");
        return 1;
    }
    for(i=1;i<=10;i++)
    {
        product = n*i;
        printf("%d * %d = %d\n",n,i,product);

    }
    return 0;
}