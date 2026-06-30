// WAP to create ATM simulation.

#include<stdio.h>

int main()
{
    int choice;
    float balance=5000 , amount;

    printf("1. Check Balance\n");
    printf("2.Deposit Money\n");
    printf("3.Withdraw Money\n");
    printf("Enter your choice:");
    scanf("%d" , &choice);

    switch(choice)
    {
        case 1:
           printf("Balance = %.2f" , balance);
           break;

        case 2:
           printf("Enter amount to deposit:");
           scanf("%f" , &amount);
           balance = balance  + amount;
           printf("New Balance = %.2f" , balance);
           break;

        case 3:
          printf("Enter amount to withdraw:");
          scanf("%f", &amount);

          if(amount <= balance)
          {
            balance = balance - amount;
            printf("Remaining Balance = %.2f" , balance);
          }
          else{
            printf("Insufficent Balance");
          }
           break;

           default:
           printf("Invalid Choice");

          }
          return 0;
    }
 /* 1. Check Balance
    2. Deposit Money
    3. Withdraw Money
    Enter your choice:2
    Enter amount to deposit:5000
    New Balance = 10000.00 */