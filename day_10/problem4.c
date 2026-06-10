// WAP to print character pyramid.

#include<stdio.h>

int main(){
     int i , j , n = 5 ;

    for( i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n -i -1 ; j++)
          printf(" ");

        for(j = 0 ; j <= i ; j++)
          printf("%C", 'A' + j);

        for(j = i - 1 ; j >= 0 ; j--)
          printf("%C", 'A' + j);

        printf("\n");
    }
    return 0;
}

/* The required
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
    */