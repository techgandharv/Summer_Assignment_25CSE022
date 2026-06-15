// Q25	Write a program to Recursive factorial.

#include <stdio.h>

int factorial(int num)
{
    if (num==0)
    return 1;

    return num*factorial(num-1);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num < 0)
{
    printf("Factorial is not defined for negative numbers.");
    return 0;
}
    printf("The factorial of %d is: %d",num,factorial(num));
    
    return 0;
}
