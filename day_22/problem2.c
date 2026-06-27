// WAP to count words in a sentence.

#include<stdio.h>

int main()
{
    char str[100];
    int i , words = 1;

    printf("Enter a sentence:");
    gets(str);

    for(i=0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == ' ')
          words++;
    }
    printf("Total words = %d" , words);

    return 0;
}
/* Enter a sentence:Shaanvi is playing 
   Total words = 3 */