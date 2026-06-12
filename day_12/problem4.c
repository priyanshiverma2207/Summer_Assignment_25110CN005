// WAP to write function for perfect number.

#include<stdio.h>

int isperfect(int n)
{
    int i , sum = 0;

    for(i = 1 ; i < n ; i++)
    {
        if(n % i == 0)
           sum += i ;
    }
    return (sum == n);

}
int main()
{
    int n;

    printf("Enter a number:");
    scanf("%d", &n);

    if(isperfect(n))
       printf("Perfect Number:");
    else
        printf("Not a Perfect Number");

    return 0;
}

/* Enter a number:65
   Not a Perfect Number*/