// WAP to subtract matrices.

#include<stdio.h>

int main(){
    int a[10][10],b[10][10],diff[10][10];
    int i , j , r ,c ;

    printf("Enter rows and column:");
    scanf("%d %d" , &r, &c);

    printf("Enter the first matrix:\n");
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){

        scanf("%d" , &a[i][j]);
    }
} 
    printf("Enter the second matrix:\n");
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){

        scanf("%d" , &b[i][j]);
    }
}
 printf("the diff of matrix is:\n");
 for(i=0 ; i<r ; i++){
    for(j=0 ; j<c ; j++){
       diff[i][j]  = a[i][j] - b[i][j] ;

       printf("%d " ,diff[i][j]);

       
    }
    printf("\n");
 }
 return 0;
}
/* Enter rows and columns:2 2
   Enter the first matrix:
   2 3 4 5
   Enter the second matrix:
   5 6 7 8
   the diff of matrix is:
   -3 -3
   -3 -3  */