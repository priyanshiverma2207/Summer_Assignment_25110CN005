// WAP to check symmetric matrix.

#include<stdio.h>

int main(){
    int a[10][10], n,i , j , flag=1;

    printf("Enter order of square matrix:");
    scanf("%d" ,&n);

    printf("Enter matrix elements:");
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            if(a[i][j] != a[j][i]){
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
     printf("Matrix is symmetric");
    else
       printf("Matrix is not symmetric");

    return 0;
}
/* Enter order of square matrix:2
   Enter matrix elements 2 3 3 2
   Matrix is symmetric 
   */