// Q43	Write a program to Write function to check prime.

#include <stdio.h>

int prime(int num)
{
    int i;
    if(num<=1)
    return 0;
        for ( i=2; i < num; i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);

     if (prime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is not a Prime number\n", num);

    return 0;
}

// Sample Output:
// 1. Enter a number: 1
//    1 is not a Prime number

// 2. Enter a number: 5
//    5 is a Prime number

// 3. Enter a number: 8
//    8 is not a Prime number  