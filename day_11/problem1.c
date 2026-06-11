// WAP to write function to find sum of two numbers.

#include<stdio.h>

int sum(int a , int b){
    return a + b ;
}

int main() {
    int a , b;
    printf("Please enter two numbers:");
    scanf("%d%d" , &a , &b);
    printf("Sum = %d " , sum(a , b));
    return 0;
}

/* PLease enter two numbers: 8 8
Sum = 16 */