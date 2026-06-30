// WAP to create bank account system.

#include<stdio.h>

int main()
{
    int choice;
    float balance = 0, amount;

    do{
        printf("\n---Bank Account System---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                 printf("Enter deposit amount:");
                 scanf("%f",&amount);
                 balance += amount ;
                 printf("Amount Deposited successfully!\n");
                 break;

            case 2:
                printf("Enter withdrawal amount:");
                scanf("%f",&amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Amount Withdrawn Successfully!\n");

                }
                else{
                    printf("Insufficient Balance!\n");
                }
                break;

                case 3:
                   printf("Current Balance = %.2f\n",balance);
                   break;

                case 4:
                   printf("Thank You!\n");
                   break;

                default:
                   printf("Invalid Choice!\n");
                 }
    } while(choice != 4);
    return 0;
}
/* ---Bank Account System---
   1. Deposit
   2. Withdraw
   3. Check Balance
   4. exit
   Enter your choice:3
   Cuurrent Balance = 0.00  */