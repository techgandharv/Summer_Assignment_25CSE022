// Q11	Write a program to Find GCD of two numbers.	

#include<stdio.h>
int main()
{
    int x,y,gcd=1,i;
    printf("Enter Number 1: ");
    scanf("%d",&x);
    printf("Enter Number 2: ");
    scanf("%d",&y);
    
    for (i = 1; i <= x && i <= y; i++)
    {
        if (x%i == 0 && y%i == 0)

            gcd = i;
        
    }

    printf("GCD of %d and %d is %d",x,y,gcd);
    return 0;
}
