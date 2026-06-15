// WAP to move zeroes to end.

#include<stdio.h>

int main(){
    int a[100] , n , i , j=0;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i=0 ; i<n ; i++)
       scanf("%d" , &a[i]);

    for(i=0; i<n ; i++){
        if(a[i] != 0){
            a[j] = a[i];
            j++;
        }
    }
    while(j < n) {
        a[j] = 0;
        j++;
    }
    printf("Array after moving zeroes:");
    for(i = 0 ; i<n ; i++)
       printf("%d ",a[i]);

    return 0;
}
/* Enter size of array:6
   Enter elements:4 1 0 5 8 0
   Array after moving zeroes:4 1 5 8 0 0 */