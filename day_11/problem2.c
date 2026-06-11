// WAP to write function to find maximum.

#include<stdio.h>

int maximum(int a , int b){
    return ( a > b) ? a : b;
}

int main(){
    int a , b;
    printf("Enter two numbers :");
    scanf("%d%d" , &a , &b);
    printf("Maximum = %d" , maximum(a , b));
    return 0;
}

/* Enter two numbers : 4 6
   Maximum = 6 
   */