// WAP to rotate array right.

#include <stdio.h>

int main() {
    int a[100] , n , i , last;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i = 0 ; i<n ; i++)
    scanf("%d" , &a[i]);

    last = a[n-1];

    for(i = n-1 ; i>0 ; i--)
       a[i] = a[i-1];

    a[0] = last;

    printf("Array after right rotation:");
    for(i=0 ; i<n ; i++){
       printf("%d ",a[i]);
    }
    return 0;
/* Enter size of array:6
   Enter elements:7 6 5 4 9 3
   Array after right rotation:3 7 6 5 4 9 */