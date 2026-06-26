//WAP to find diagonal sum.

#include<stdio.h>

int main(){
    int a[10][10] , n , i , j , sum =0 ;

    printf("Enter order of square matrix:");
    scanf("%d" , &n);

    printf("Enter matrix elements:\n");
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    for(i=0 ; i<n ; i++){
        sum = sum + a[i][i];
    }
    printf("Sum of diagonal elements= %d",sum);
    return 0;
}
/* Enter order of square matrix:2
   Enter matrix elements:
   2 3 4 5
   Sum of diagonal elements= 7 */