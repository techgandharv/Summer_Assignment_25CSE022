//Q5	Write a program to Find sum of digits of a number.

#include<stdio.h>
int main()
{
    int n,s=0,r;
    printf("Enter any number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    

    printf("The sum of digits is %d",s);

      

    return 0;
}