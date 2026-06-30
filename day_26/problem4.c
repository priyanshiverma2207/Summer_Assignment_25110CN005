// WAP to create quiz application.

#include <stdio.h>

int main()
{
    int score = 0 , ans;

    printf("-----Quiz Application-----\n");

    printf("\nQ1. What is the capital of India\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4.Chennai\n");
    scanf("%d",&ans);

    if(ans == 2)
       score++;

    printf("\nQ2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    scanf("%d" , &ans);

    if(ans == 3)
     score++;

    printf("\nYour Score = %d/2\n",score);

    return 0 ;

}
/* Q1. What is the capital of India
   1. Mumbai
   2. Delhi
   3. KOlkata
   4. Chennai
   2
   
   Q2. How many days are there in a week?
   1. 5
   2. 6
   3. 7
   4. 8
   2

   Your Score = 1/2
   */