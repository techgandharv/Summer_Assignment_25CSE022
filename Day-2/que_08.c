// Q8	Write a program to Check whether a number is palindrome.

#include<stdio.h>
int main()
{
    int num,sum=0,r,init;

    printf("Enter a NUmber: ");
    scanf("%d",&num);
    init=num;           // here original number is stored in init
    while(num!=0)
    {
        r=num%10;
        num=num/10;
        sum=(sum*10)+r;
    }

    if (sum==init)
    {
        printf("The number is a palindrome!");
    }
    else
    {
         printf("The number is not a palindrome!");
    }
    
    
    return 0;
}