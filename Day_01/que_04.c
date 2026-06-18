// Q4	Write a program to Count digits in a number.

#include<stdio.h>
int main()
{
    int count=0,n;
    printf("Enter any number: ");
    scanf("%d",&n);

    if(n==0)
    {
        count=1;
    }
    else{
        while( n!=0){
            n=n/10;
            count++;
        }
    }

    printf("The number of digits is %d",count);

    return 0;
}