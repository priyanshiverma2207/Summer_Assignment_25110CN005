//WAP to find product of digits

#include<stdio.h>

int main(){

    int x,r,mul=1;

    printf("enter the number:");

    scanf("%d",&x);

    while(x!=0){

        r=x%10;
        mul=mul*r;
        x=x/10;
    }

    printf("multiplication of digits = %d ",mul);

    return 0;                                                                      
}