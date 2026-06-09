// WAP to find x^n without pow().

#include <stdio.h>
int main() {
     
    int x , n, result = 1 ;

    printf("Enter base and power :");
    scanf("%d%d" , &x , &n);

    for(int i=1 ; i<=n ; i++){
        result = result*x ;
    }
    printf("the result is %d" , result);
    return 0;
}