// WAP to sort array in descending order .

#include<stdio.h>

int main()
{
    int a[100] , n , i , j , temp;

    printf("Enter number of elements:");
    scanf("%d" , &n);

    printf("Enter array elements:");
    for(i=0 ; i<n ; i++)
       scanf("%d" , &a[i]);

    for(i=0 ; i<n-1 ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Array in descending order:");
    for(i=0 ; i<n ; i++)
        printf("%d " ,a[i]);

    return 0;

}
/* Enter number of elements:6
   Enter array elements:6 5 7 8 9 3
   Array in descending order:9 8 7 6 5 3*/