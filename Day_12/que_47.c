// Q47	Write a program to Write function for Fibonacci.

#include <stdio.h>

void fibonacci(int num)
{
    int x=0,y=1,next,i;
    for ( i = 0 ; i < num ; i++)
    {
        printf("%d ",x);
        next = x + y;
        x=y;
        y=next;
    }
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    printf("The fibonacci series upto %dth term is:\n",num);
    fibonacci(num);

    return 0;
}

// Sample Output:
// Enter any number: 10
// The fibonacci series upto 10th term is:
// 0 1 1 2 3 5 8 13 21 34 