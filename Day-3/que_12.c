// Q12	Write a program to Find LCM of two numbers.

#include <stdio.h>

int main()
{
    int x,y,i,lcm;

    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    for (i = (x > y ? x : y); ; i++)
    {
        if (i%x == 0 && i%y == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM of %d and %d is %d", x, y, lcm);

    return 0;
}