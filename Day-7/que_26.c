// Q26	Write a program to Recursive Fibonacci.

#include <stdio.h>

int fib(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    return fib(n-1)+fib(n-2);
}
int main()
{
    int n,i;
    printf("Enter no of terms: ");
    scanf("%d",&n);

    printf("The fibonacci sereis: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",fib(i));
    }
    

    
    return 0;
}