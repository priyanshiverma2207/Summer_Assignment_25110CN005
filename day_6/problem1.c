// WAp to covert decimal to binary.

#include<stdio.h>
int main(){
    int n , binary[32] , i=0 , j;
    printf(" Enter a Decimal Number:");
    scanf("%d" , &n);

    if (n == 0 ){
        printf("binary number = 0");
        return 0 ;
    }
    while(n>0){
        binary[i] = n % 2 ;
        n = n/2 ;
        i++ ;

    } 
    printf("binary number = ");
    for(int j = i-1 ; j >= 0 ; j--){
         printf("%d ", binary[j]);
    }
    return 0;
}