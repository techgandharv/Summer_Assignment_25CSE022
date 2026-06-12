// Q15	Write a program to Check Armstrong number.

#include<stdio.h>

int main()
{
    int   n,s=0,num,r,x;
    printf("Enter any Number: ");
    scanf("%d",&num);
    x=num;
    while(num!=0)
    {
        r =num % 10;
        num = num/10;
        s = s + r*r*r;
     }
     printf("Sum = %d\n", s);
     if(x==s)
     printf("%d is an Amstrong Number!",x);
     else
     printf("%d is not an Amstrong Number!",x);

         
    return 0;
}