// WAP to write function for Fibonacci.

#include<stdio.h>

int fibonacci(int m) {
    if(m == 0)
        return 0;
    if(m == 1)
        return 1;

    return fibonacci(m-1) + fibonacci(m-2);
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printf("%d\n" , fibonacci(n));
    return 0;
}