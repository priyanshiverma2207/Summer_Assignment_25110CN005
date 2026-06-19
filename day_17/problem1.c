//WAP to merge arrays.
#include<stdio.h>

int main(){
    int a[50],b[50],c[100];
    int n1,n2,i;

    printf("Enter size of first array:");
    scanf("%d",&n1);

    printf("Enter elements of first array:\n");
    for(i=0 ; i<n1 ; i++)
    scanf("%d",&a[i]);

    printf("Enter size of second array:");
    scanf("%d",&n2);

    printf("Enter elements of second array:\n");
    for(i=0 ; i<n2 ; i++)
    scanf("%d",&b[i]);

    for(i=0 ; i<n1 ; i++)
      c[i] = a[i];

    for(i=0 ; i<n2 ; i++)
      c[n1+i] = b[i];

    printf("Merges array:\n");
    for(i=0 ; i<n1+n2 ; i++)
      printf("%d ",c[i]);

    return 0;
}
/* Enter size of first array:5
   Enter elements of first array:
   5 4 3 2 6
   Enter size of second array:5
   Enter elements of second array:
   7 8 9 6 5
   Merges array:
   5 4 3 2 6 7 8 9 6 5 */