// WAP to print character triangle.

#include<stdio.h>

int main()
{
    for(char i='A' ; i<='E' ; i++)
    {
        for(char j='A' ; j<=i ; j++)
        printf("%C" , j);
        printf("\n");
    }
    return 0;
}