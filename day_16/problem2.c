// WAP to find maximum frequency element.

#include<stdio.h>

int main() {
    int a[100] , n , i , j;
    int maxFreq = 0 , element;

    printf("Enter size of array:");
    scanf("%d" , &n);

    printf("Enter the array element:");
    for(i=0 ; i<n ; i++){
        scanf("%d" , &a[i]);
    }
    for(i=0 ; i<n ; i++){
       int count = 1;  
       
    for(j = i+1 ; j<n ; j++){
        if (a[i] == a[j]){
            count++;
        }
    }
    if(count > maxFreq){
        maxFreq = count ;
        element = a[i];
    }
    }

    printf("Element with maximum frequency = %d\n " , element);
    printf("Frequency = %d " , maxFreq);

    return 0;

}
/* Enter size of array:6
   Enter the array elements:5 6 7 7 9 7
   Element with maximum frequency = 7
   Frequency = 3 */