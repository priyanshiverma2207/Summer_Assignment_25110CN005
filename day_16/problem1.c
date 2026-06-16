// WAP to find missing number in array.

#include<stdio.h>

int main(){
    int n , i , sum = 0 , total = 0 , missing;

    printf("Enter the size:");
    scanf("%d" , &n);

    int a[n-1];

    printf("Enter %d numbers:", n-1);
    for(i = 0 ; i<n-1 ; i++){
        scanf("%d" , &a[i]);
        sum += a[i];

    }
    total = n * (n+1)/2 ;
    missing = total - sum ;

    printf("Missing number = %d" , missing);

    return 0;
}
/* Enter the size:6
   Enter 5 numbers:1 2 4 5 6 7
   Missing number = 3
   */