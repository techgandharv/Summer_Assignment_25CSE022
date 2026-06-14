// Q24	Write a program to Find x^n without pow().

#include <stdio.h>

int main()
{
    int num,n,i,p=1;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter power: ");
    scanf("%d",&n);
    
    for ( i = 1; i <=n; i++)
    {
        p*=num;
    }
    printf("The %dth power of %d is: %d",n,num,p);

    
    return 0;
}

