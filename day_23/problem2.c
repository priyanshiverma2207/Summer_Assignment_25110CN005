// WAP to find first repeating character.

#include<stdio.h>

int main(){
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string:");
    gets(str);

    for(i=0 ; str[i] != '\0' ; i++){
        freq[str[i]]++;

        if(freq[str[i]] == 2){
            printf("First repeating character = %c" , str[i]);
            break;
        }
    }
  
    return 0;
}
/* Enter a string:excellence
   First repeating character = e */