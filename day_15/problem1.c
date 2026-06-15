// WAP to Reverse array.

#include<stdio.h>
int main() {
    int a[100] , n , i;

    printf("Enter size:");
    scanf("%d" , &n);

    printf("Enter the elements:");
    for(i=0 ; i < n ; i++)
       scanf("%d", &a[i]);
    
    printf("Reversed Array:");
    for(i = n-1; i>=0 ; i--){
     printf("%d ",a[i]);
    
}
    
    return 0;
}
/* Enter size:5
   Enter the elements:6 7 4 5 9
   Reversed Array:9 5 4 7 6 */