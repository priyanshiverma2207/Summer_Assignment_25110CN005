// WAP to reverse a number

#include<stdio.h>

int main(){

    int n,r=0,x;

    printf("enter number :");
    scanf("%d",&n);

    while(n!=0) {

        x=n%10;
        r=r*10+x;
        n=n/10;

    }

    printf("reversed number=%d",r);

    return 0;

}
