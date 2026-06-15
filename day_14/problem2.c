// WAP to frequency of an element.

#include<stdio.h>
int main(){
    int a[100] , n , key , i , count = 0;

    printf("Enter the size:");
    scanf("%d" , &n);

    printf("Enter the elements of array:");
    for(i=0 ; i<n ; i++)
        scanf("%d" , &a[i]);

    printf("Enter the element:");  
    scanf("%d", &key);

    for(i=0 ; i<n ; i++)
       if(a[i] == key)
         count++;

    printf("Frequency = %d" , count);

    return 0;
}
/*Enter the size:6
  Enter the elements of array:6 7 8 7 9 7
  Enter the element:7
  Frequency = 3 */
