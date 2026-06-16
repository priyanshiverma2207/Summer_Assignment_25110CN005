//WAP to find pair with given sum.

#include<stdio.h>

int main() {
    int a[100] , n , sum , i , j;

    printf("Enter size of array:");
    scanf("%d" , &n);

    printf("Enter array elements:");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("Enter required sum:");
    scanf("%d" , &sum);

    for(i = 0 ; i < n ; i++){
        for(j = i + 1; j < n ; j++){
            if(a[i] + a[j] == sum){
                printf("Pair: %d and %d\n", a[i] , a[j]);
            }
        }
    }
    return 0;
}
