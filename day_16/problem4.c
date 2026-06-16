// WAP to remove duplicates from array.

#include<stdio.h>

int main(){
    int a[100] , n , i , j , k ;

    printf("Enter size of array:");
    scanf("%d" , &n);

    printf("Enter array of elements:");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for(i = 0 ; i < n ; i++){
        for(j = i + 1 ; j < n ; j ++){
            if(a[i] == a[j]){
                for(k = j ; k < n-1 ; k++){
                    a[k] = a[k+1];
                }
            n--;
            j--;
            }
            
        }
    }
    printf("Array after removing duplicates:");
    for(i = 0 ; i<n ;i++ ){
        printf("%d " , a[i]);
    }
    return 0;
}
/* Enter size of array:6
   Enter array of elements:6 7 7 8 5 6 
   Array after removing duplicates:6 7 8 5m
   */