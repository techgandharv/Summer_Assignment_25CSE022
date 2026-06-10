//Q7	Write a program to Find product of digits. 

#include<stdio.h>
int main()
{
    int num,p=1,r;

    printf("Enter a NUmber: ");
    scanf("%d",&num);

    while(num!=0)
    {
        r=num%10;
        num=num/10;
        p*=r;
    }
    printf("The product of digits of the number is %d",p);
    
    return 0;
}