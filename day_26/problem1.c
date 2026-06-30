// WAP to create number guessing game.

#include<stdio.h>

int main()
{
    int secret=7 , guess;

    printf("Guess a number between 1 and 10:\n");

    do
    {
        scanf("%d",&guess);
        
        if(guess > secret)
           printf("Too High! try again.\n");
        else if (guess < secret)
           printf("Too low! try again.\n");
   
        } while(guess != secret);

        printf("Congratulations! You guessed the correct number.");

   return 0; 
}
/* Guess a number between 1 and 10:
   5
   Too low! try again.
   9
   Too high! try again.
   7
   Congratulations! You guessed the correct number.*/