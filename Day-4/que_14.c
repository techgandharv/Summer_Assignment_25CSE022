// Q14	Write a program to Find nth Fibonacci term.

#include<stdio.h>

int main()
{
    int   n,i,fib1=0,fib2=1,next;
    printf("Enter any Number: ");
    scanf("%d",&n);
    
   
    for ( i = 2; i < n; i++)
     {
        next=fib1+fib2;
        if (i==n)
        break;
        fib1=fib2;
        fib2=next;

     }
     printf("The %dth Fibbonacci term is: %d",n,next);
    return 0;
}