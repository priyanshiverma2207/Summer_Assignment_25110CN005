// WAP to find maximum occuring character.

#include<stdio.h>

int main(){
    char str[100];
    int i , j , max=0 ;
    char maxChar;

    printf("enter a string:");
    gets(str);

    for(i=0 ; str[i] !='\0' ; i++){
        int count = 1;

        for(j=i+1 ; str[j] !='\0' ; j++){
            if(str[i] == str[j])
               count++;
        }
        if(count > max){
            max = count;
            maxChar = str[i] ;
        }
    }
    printf("Maximum occuring character = %c\n" , maxChar);
    printf("Frequency = %d" , max);

    return 0;

}
/* enter a string:Selection
   Maximum occuring character = e
   Frequency = 2
   */