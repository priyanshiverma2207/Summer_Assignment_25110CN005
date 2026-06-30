// WAP to create ticket booking system.

#include<stdio.h>

int main()
{
    int totalSeats = 50 , booked , available;

    printf("Total Seats = %d\n", totalSeats);
    printf("Enter number of tickets to book:");
    scanf("%d" , &booked);

    if(booked <= totalSeats)
    {
        available = totalSeats - booked;

        printf("Tickets booked successfully!\n");
        printf("Booked Tickets = %d\n",booked);
        printf("Available Seats = %d\n" , available);
    }
    else
    {
        printf("Sorry! Not enough seats available.\n");
    }
    return 0;
}
/* Total Seats = 50
   Enter number of tickets to book:6
   tickets booked successfully!
   Booked Tickets = 6
   Available = 44 */
