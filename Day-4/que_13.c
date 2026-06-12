// Q13	Write a program to Generate Fibonacci series.

#include<stdio.h>

int main()
{
    int   n,i,fib1=0,fib2=1,next;
    printf("Enter any Number: ");
    scanf("%d",&n);
    
    printf("The Fibnnaci series upto %dth term is:%d\t   %d\t",n,fib1,fib2);
    for ( i = 2; i < n; i++)
     {
        next=fib1+fib2;
        printf("%d\t",next);
        fib1=fib2;
        fib2=next;
     }
     
    return 0;
}
