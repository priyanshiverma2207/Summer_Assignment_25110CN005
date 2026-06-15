// WAP to linear search.

#include<stdio.h>
int main(){
    int a[100], n ,key , i , found=0 ;
    
    printf("Enter the size:");
    scanf("%d", &n);

    printf("Enter the array elements:");
    for(i=0 ; i<n ; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to be found:");
    scanf("%d", &key);

    for(i=0 ; i<n ; i++){
        if(a[i] == key){
            printf("Found at position: %d",i+1);

            found = 1;
            break;
        }
    }
    if(found == 0)
      printf("Not Found");

    return 0;
}
/* Enter the size:7
   Enter the array elements:77 65 5 4 88 76 98
   Enter the element to  be found:77
   Found at position:1*/