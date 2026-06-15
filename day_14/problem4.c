// WAP to find duplicates in array.

#include<stdio.h>
int main(){
    int a[100] , n , i , j;

    printf("Enter the size:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0 ; i<n ; i++)
       scanf("%d" , &a[i]);

    printf("Duplicates:");
    for(i=0 ; i<n ; i++){
        for(j=i+1 ; j<n ; j++){
            if(a[i] == a[j]){
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}
/* Enter the size:7
   Enter the elements:7 6 6 5 4 4 3
   Duplicates:6 4 */