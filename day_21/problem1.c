// WAP to find string length without strlen().

#include<stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string:");
    gets(str);

    while(str[i] != '\0')
    {
        i++;
    }
    printf("Length of string = %d" , i);

    return 0;
}
/* Enter a string:Priyanshi
   Length of string = 9 
   */