// WAP to find sum and average of array.

#include<stdio.h>

int main()
{
    int a[10] , n , i , sum=0;
    float avg;

    printf("Enter size:");
    scanf("%d" , &n);

    printf("Enter array elements:\n");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = sum / (float)n;

    printf("Sum = %d\n" , sum);
    printf("Average = %.2f", avg);

    return 0;
}
/* Enter size:6
   Enter array elements:
   5 7 8 4 5 7 8
   Sum = 36
   Average = 6.00
   */