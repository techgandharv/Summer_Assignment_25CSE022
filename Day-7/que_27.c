// Q27	Write a program to Recursive sum of digits.

#include <stdio.h>

int sum(int num)
{
    if(num==0)
    return 0;

    return (num % 10) + sum(num / 10);
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    printf("The sum of digits of %d is: %d",num,sum(num));
    
    return 0;
}