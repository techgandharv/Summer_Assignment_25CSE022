// Q101	Write a program to Create number guessing game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guessed, no_of_attempts = 0;

    // Taking random number
    srand(time(0));
    num = rand() % 100 + 1;

    // Game Starts
    printf("********NUMBER GUESSING GAME********\n\n");
    printf("Can you guess a number between 1 and 100?\n");
    printf("Come On, Let's Play!\n");

    // users input and checking
    do
    {
        printf("Guess a number:");
        scanf("%d", &guessed);
        no_of_attempts++;

        if (num > guessed)
        {
            printf("Enter Higher!\n");
        }
        else if (num < guessed)
        {
            printf("Enter Lower!\n");
        }
        else
        {
            printf("\nCongrats!\n");
        }

    } while (num != guessed);

    // Result
    printf("You have guessed right number %d.\n", num);
    printf("Number of attempts = %d\n\n", no_of_attempts);

    printf("********GAME OVER!********\n");

      return 0;
}

// Sample Output:

// ********NUMBER GUESSING GAME********

// Can you guess a number between 1 and 100?
// Come On, Let's Play!

// Guess a number:50
// Enter Lower!
// Guess a number:35
// Enter Lower!
// Guess a number:29
// Enter Higher!
// Guess a number:32

// Congrats!
// You have guessed right number 32.
// Number of attempts = 4

// ********GAME OVER!********