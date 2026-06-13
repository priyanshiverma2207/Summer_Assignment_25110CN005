// WAP to find largest and smallest element.

#include <stdio.h>

int main()
{
    int a[10] , n , i , largest , smallest;

    printf("Enter size:");
    scanf("%d" , &n);

    printf("Enter array element:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    largest = smallest = a[0];
    
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        largest = a[i];

        if(a[i] < smallest)
        smallest = a[i];
    }

    printf("Largest = %d\n" , largest);
    printf("Smallest = %d", smallest);

    return 0;
}
/* Enter size:7
Enter array element: 7 6 8 4 9 3 2
Largest = 9
Smallest = 2 */