// WAP to find first non-repeating character.

#include<stdio.h>

int main(){
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string:");
    gets(str);

    for(i = 0 ; str[i] != '\0' ; i++)
      freq[str[i]]++;

    for(i = 0 ; str[i] != '\0' ; i++){
        if(freq[str[i]] == 1){
            printf("First non-repeating character = %c" , str[i]);
            break;
        }
    }

    return 0;
}
/* Enter a string:helloo
   First non-repeating character = h*/
