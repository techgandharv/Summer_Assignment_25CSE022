// Q104	Write a program to Create quiz application.

#include <stdio.h>

int main()
{
    int option, score = 0;

    printf("******** QUIZ APPLICATION ********\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &option);

    switch (option)
    {
    case 2:
        printf("Correct!\n\n");
        score++;
        break;
    default:
        printf("Wrong! Correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("Q2. Which language is mainly used for system programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &option);

    switch (option)
    {
    case 3:
        printf("Correct!\n\n");
        score++;
        break;
    default:
        printf("Wrong! Correct answer is C.\n\n");
    }

    // Question 3
    printf("Q3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 360\n");
    printf("Enter your answer: ");
    scanf("%d", &option);

    switch (option)
    {
    case 2:
        printf("Correct!\n\n");
        score++;
        break;
    default:
        printf("Wrong! Correct answer is 366.\n\n");
    }

    // Question 4
    printf("Q4. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d", &option);

    switch (option)
    {
    case 3:
        printf("Correct!\n\n");
        score++;
        break;
    default:
        printf("Wrong! Correct answer is Mars.\n\n");
    }

    // Question 5
    printf("Q5. How many continents are there in the world?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &option);

    switch (option)
    {
    case 3:
        printf("Correct!\n\n");
        score++;
        break;
    default:
        printf("Wrong! Correct answer is 7.\n\n");
    }

    // Final Score
    printf("******** RESULT ********\n");
    printf("Your Score = %d/5\n", score);

    if (score == 5)
        printf("Excellent! Full Marks.\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}

// Sample Output:

// ******** QUIZ APPLICATION ********

// Q1. What is the capital of India?
// 1. Mumbai
// 2. Delhi
// 3. Kolkata
// 4. Chennai
// Enter your answer: 2
// Correct!

// Q2. Which language is mainly used for system programming?
// 1. Python
// 2. Java
// 3. C
// 4. HTML
// Enter your answer: 3
// Correct!

// Q3. How many days are there in a leap year?
// 1. 365
// 2. 366
// 3. 364
// 4. 360
// Enter your answer: 2
// Correct!

// Q4. Which planet is known as the Red Planet?
// 1. Earth
// 2. Venus
// 3. Mars
// 4. Jupiter
// Enter your answer: 3
// Correct!

// Q5. How many continents are there in the world?
// 1. 5
// 2. 6
// 3. 7
// 4. 8
// Enter your answer: 3
// Correct!

// ******** RESULT ********
// Your Score = 5/5
// Excellent! Full Marks.