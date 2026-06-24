// WAP to selection sort.

#include<stdio.h>

int main(){

    int arr[100] , n , i , j , min ,temp;

    printf("Enter number of elements:");
    scanf("%d" , &n);

    printf("Enter elements:");
    for(i=0 ; i<n ; i++)
        scanf("%d" , &arr[i]);

    for(i=0 ; i<n-1 ; i++)
    {
        min = i;
        
        for(j = i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[min])
            {    min = j ;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("Sorted array:");
    for(i=0 ; i<n ; i++)
        printf("%d " , arr[i]);

    return 0;
}
/* Enter number of elements:6
   Enter elements:5 6 7 8 9 4
   Sorted array:5 6 7 8 9 4 
   */