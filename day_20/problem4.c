// WAP to find column wise sum.

#include<stdio.h>

int main() {
    int a[10][10] , r , c , i , j ,sum;

    printf("Enter rows and columns:");
    scanf("%d %d" , &r ,&c);

    printf("Enter matrix elements:");
    for(i = 0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){
            scanf("%d" ,&a[i][j]);
        }
    }
    for(j=0 ; j<c ; j++){
        sum=0;
        for(i=0 ; i<r ; i++){
            sum += a[i][j];
        }
        printf("Sum of column %d = %d\n" , j+1 , sum);
    }
    return 0;
}
/* Enter rows and columns:2 3
   Enter matrix elements:2 3 5 6 7 8
   Sum of column 1 = 8
   Sum of column 2 = 10
   Sum of column 3 = 13 */
