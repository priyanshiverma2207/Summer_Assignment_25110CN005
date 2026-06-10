// WAP to print repeated character pattern.

#include <stdio.h>

int main()
{
    for(char i = 'A' ; i<='E' ;i++)
    {
        for(char j = 'A' ; j<=i ; j++)
        printf("%c" , i);
        printf("\n");
    }
    return 0;
}

/* the required patter 
    A
    BB
    CCC
    DDDD
    EEEEE*/