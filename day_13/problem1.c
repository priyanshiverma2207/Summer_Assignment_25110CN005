// WAP to input and display array.

#include<stdio.h>

int main()
{
    int a[10] , n ,i;

    printf("Enter number of elements:");
    scanf("%d" , &n);

    printf("Enter array elements:\n");
    for(i = 0 ;i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements are:\n");
    for(i = 0 ; i < n ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
/* Enter number of elements:5
   Enter array elements:
   1 2 3 4 5
   Array elements are:
   1 2 3 4 5*/