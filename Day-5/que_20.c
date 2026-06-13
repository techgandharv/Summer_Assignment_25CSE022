// Q20 Write a program to Find largest prime factor.

#include <stdio.h>

int main()
{
    int num, i, j, check = 1, large = 0;

    printf("Enter any Number: ");
    scanf("%d", &num);

    printf("The Prime Factors of %d are: ", num);

    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            check = 1;

            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    check = 0;
                    break;
                }
            }

            if (check == 1)
            {
                printf("%d  ", i);
                large = i;
            }
        }
    }

    printf("\nThe largest Prime Factor of %d is %d", num, large);

    return 0;
}