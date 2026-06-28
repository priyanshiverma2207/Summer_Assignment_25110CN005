// WAP to check anagram strings.

#include<stdio.h>
#include<string.h>

int main(){
    char s1[100] , s2[100];
    int i , freq[256] = {0} ;

    printf("Enter first string:");
    gets(s1);

    printf("Enter second string:");
    gets(s2);

    if(strlen(s1) != strlen(s2)){
        printf("Not Anagram");
    }

    for(i = 0 ; s1[i] != '\0' ; i++){
        freq[s1[i]]++;
        freq[s2[i]]--;
        
    }
    for(i=0 ; i<256 ; i++){
        if(freq[i] != 0){
            printf("Not Anagram");
        }
    }
    printf("Anagram");

    return 0;
}
/* Enter first string:silent
   Enter second string:listen
   Anagram */