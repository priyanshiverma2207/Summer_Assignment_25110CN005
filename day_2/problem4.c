//WAP to check whether a number is palindrome.

#include <stdio.h>

int main(){
     int n,ori,rev=0,x;

     printf("enter a number :");
     scanf("%d",&n);

     ori=n;

     while(n!=0){
        x = n%10;
        rev = rev*10+x;
        n=n/10;

     }

     if(ori == rev)
        printf("palindrome Number");

      else
        printf("not a palindrome number");
        
        return 0;
}