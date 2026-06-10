// Q6	Write a program to Reverse a number.

#include<stdio.h>
int main()
{
    int num,sum=0,r;
    printf("Enter a Number: ");
    scanf("%d",&num);

    while (num!=0)
    {
        r=num%10;
        num=num/10;
        sum=(sum*10)+r;
    }

    printf("The revversed number is %d",sum);

    return 0;
}