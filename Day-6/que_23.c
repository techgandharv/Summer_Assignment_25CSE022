// Q23	Write a program to Count set bits in a number.

#include <stdio.h>

int main()
{
    int num,count=0;
    printf("Enter any number: ");
    scanf("%d",&num);

    while (num>0)
    {
        {
            if(num%2==1)
            count++;
        }
        num/=2;
    }
    printf("The number of set bits are: %d",count);
    
    return 0;
}

