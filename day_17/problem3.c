 // WAP to Intersection of arrays.

 #include<stdio.h>

 int main()
 {
    int a[50] , b[50] , n1 , n2 , i ,j;

    printf("Enter size of First array:");
    scanf("%d", &n1);

    printf("Enter elements of first array:");
    for(i=0 ; i<n1 ; i++)
       scanf("%d",&a[i]);

    printf("Enter size of second array:");
    scanf("%d",&n2);

    printf("Enter elements of second array:");
    for(i = 0; i<n2 ; i++)
      scanf("%d" , &b[i]);

    printf("intersection of arrays:");

    for(i=0 ; i<n1 ;i++)
    {
        for(j=0 ; j<n2 ; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }

 return 0;
 }
 /* Enter size of First array:6
    Enter elements of first array:6 7 8 5 4 9
    Enter size of second array:7
    Enter elements of second array:6 5 4 1 2 8 8
    Intersection of arrays:6 8 5 4*/