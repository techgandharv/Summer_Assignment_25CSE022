// Q44	Write a program to Write function to find factorial.

#include <stdio.h>

int factorial(int num)
{
    if (num==0)
    return 1;
    if (num > 0)
    return num * factorial(num-1);

}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
    
    return 0;
}

// Sample Output:
// Enter any number: 5
// The factorial of 5 is 120
