// Q18	Write a program to Check strong number.

#include <stdio.h>

int main() 
{
    int num,i,r,s=0,x,p;
    printf("Enter any number: ");
    scanf("%d",&num);
    
    x=num;
    while (num>0)
    {
        r=num%10;
        num/=10;
        p=1;
        for ( i = 1; i <= r; i++)
        {
            p*=i;
        }
        s+=p;
    }
    if(s==x)
    printf("%d is a Strong Number",x);
    else
    printf("%d is not a Strong Number",x);
    
    return 0;
}
