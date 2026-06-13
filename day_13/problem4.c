// WAP to count even and odd elements.

#include<stdio.h>

int main()
{
    int a[10] , n , i;
    int even = 0 , odd = 0;

    printf("Enter size:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);

        if(a[i] % 2 == 0)
          even++;
        else
          odd++;
    }
    printf("Even elements = %d\n" , even);
    printf("odd elements = %d", odd);
    
    return 0;
}
/* Enter size:6
   Enter the elements:7 8 9 5 4 3
   Even elements = 2
   odd elements =4 */