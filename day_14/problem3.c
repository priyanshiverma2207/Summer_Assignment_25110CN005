// WAP to find second largest  element.

#include<stdio.h>
int main(){
    int a[100] , n , i , largest , second;

    printf("Enter the size:");
    scanf("%d", &n);

    printf("Enter the elements:");
    for(i=0 ; i<n ; i++)
    scanf("%d" , &a[i]);

    largest = second = a[0];

    for(i=1; i<n ; i++){
        if(a[i] > largest){
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)

        second = a[i];
    }
    printf("Second Largest = %d" , second);

    return 0;
}
/* Enter the size:7
   Enter the elements:66 77 87 98 99 96 54
   Second Largest = 98 */

