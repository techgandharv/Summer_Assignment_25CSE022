// Q3	Write a program to Find factorial of a number.

#include<stdio.h>
int main()
{
    int i=1,n,p;
    printf("Enter any number: ");
    scanf("%d",&n);
    p=1;
    while(i<=n)
    {
     p=p*i;
     i++;
        
    }

     printf("The factorial of %d is %d",n,p);

    return 0;
}