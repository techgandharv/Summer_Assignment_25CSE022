// Q102	Write a program to Create voting eligibility system.

#include <stdio.h>

int main()
{
    printf("#######VOTING ELIGIBILITY SYSTEM#######\n\n");

    int age;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Invalid Age!");
    }
    else if (age < 18)
    {
        printf("You are not eligible for voting!");
    }
    else
    {
        printf("You are eligible for voting!");
    }

    return 0;
}

// Sample Output:
// Enter Your Age: 23
// You are eligible for voting!