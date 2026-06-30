//WAP to merge two sorted arrays.

#include<stdio.h>

int main()
{
    char s1[50] , s2[50] , s3[100];
    int i=0 , j=0 , k=0 ;

    printf("Enter first sorted string:");
    scanf("%s" ,s1);

    printf("Enter second sorted array:");
    scanf("%s" ,s2);

    while(s1[i] != '\0' && s2[j] != '\0')
    {
        if(s1[i] < s2[j])
           s3[k++] = s1[i++];
        else
           s3[k++] = s2[j++];

    }
    while(s1[i] != '\0')
       s3[k++] = s1[i++];

    while(s2[j] != '\0')
      s3[k++] = s2[j++];

    s3[k] = '\0';

    printf("Merged string: %s" , s3);

    return 0;
}
/* Enter first sorted string:abc
   Enter second sorted string:def
   Merged string:abcdef */