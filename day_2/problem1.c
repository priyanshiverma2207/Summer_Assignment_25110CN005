//WAP to find sum of digits of a number

#include<stdio.h>
int main(){

    int x,r,sum=0;

    printf("enter the number :");
    scanf("%d",&x);
    while(x!=0){

        r=x%10;

        sum=sum+r;

        x=x/10;
    }

    printf("sum of digits=%d",sum);

    return 0;
}