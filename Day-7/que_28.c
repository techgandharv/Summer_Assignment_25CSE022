// Q28	Write a program to Recursive reverse number.

#include <stdio.h>

int reverse = 0;

int rev(int num)
{
    if (num == 0)
        return reverse;

    reverse = reverse * 10 + (num % 10);
    return rev(num / 10);
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    printf("The reverse of %d is: %d",num,rev(num));

    
    return 0;
}