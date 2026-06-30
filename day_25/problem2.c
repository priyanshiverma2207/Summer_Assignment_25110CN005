// WAP to find common characters in strings.

#include<stdio.h>

int main(){
    char str1[100] , str2[100];
    int i,j;
    int visited[256] = {0};

    printf("Enter first string:");
    gets(str1);

    printf("Enter second string:");
    gets(str2);

    printf("Common characters:");


    for(i=0 ; str1[i] != '\0' ; i++){
        int ascii_val = (unsigned char)str1[i];

        if (visited[ascii_val] == 0) {
        for(j=0 ; str2[j] != '\0' ; j++){
            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                visited[ascii_val] = 1;
                break;
            }
        }
    }
}
    return 0;
}
/*
Enter first string:hello
Enter second string:world
Common characters:l 0 */
