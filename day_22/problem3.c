// WAP to character frequency.

#include<stdio.h>

int main()
{
    char str[100] ,ch;
    int i, count = 0;

    printf("Enter a string:");
    gets(str);

    printf("Enter character to find frequency:");
    scanf("%c" , &ch);

    for(i=0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == ch)
          count++;
    }

    printf("Frequency of '%c' = %d" ,ch , count);

    return 0;

}
/* Enter a string:yellow
   Enter character to find frequency:l
   Frequency of 'l' = 2 
   */
