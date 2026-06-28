// WAP to check string rotation.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100] , temp[200];

    printf("Enter first string:");
    scanf("%s",str1);

    printf("Enter second string:");
    scanf("%s",str2);

    strcpy(temp,str1);
    strcat(temp,str1);

    if(strlen(str1) == strlen(str2) && strstr(temp , str2))
      printf("String is a rotation.\n");
    else
      printf("string is not a rotation.\n");

    return 0;
}
/* Enter first string:abcd
   Enter second string:cdab
   String is a rotation. */