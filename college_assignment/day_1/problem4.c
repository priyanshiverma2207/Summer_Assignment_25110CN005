/* WAP to count the number of digits in a number */

#include <stdio.h>

int main()
{
     float num;
     int digits=0;

     printf("enter a number:");
     scanf("%f",&num);

     if(num !=(int)num)
     {
        printf("invalid input.please enter an integer.\n");
        return 1;
     }
     int n=(int)num;

     if(n==0)
     digits=1;
     else{
        while(n!=0)
        {
            n/=10;
            digits++;
        }
     }
     printf("number of digits : %d\n",digits);
     return 0;

}