// WAP to create library management system.

#include<stdio.h>

int main()
{
    int choice, bookCount = 0;

    while(1)
    {
        printf("\n---Library Management System---\n");
        printf("1. Add Books\n");
        printf("2. Display Books\n");
        printf("3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        if(choice == 1)
        {
            bookCount++;
            printf("Book added successfully!\n");
        }
        else if (choice == 2)
        {
            printf("Total Books in Library = %d\n" , bookCount);
        }
        else if(choice == 3)
        {
            printf("Existing...\n");
            break;
        }
        else
        {
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}
/* ---Library Mangement System---
   1. Add Books
   2.Display Books
   3. Exit
   Enter your choice:1
   Book added successfully!
   */