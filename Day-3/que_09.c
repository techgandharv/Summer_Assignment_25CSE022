// Q9	Write a program to Check whether a number is prime.

#include <stdio.h>
int main()
{ int n,i,r=0;
    
    printf("Enter any number:");
    scanf("%d",&n);

for(i=2;i<n;i++)
    { if (n%i==0)
    {
        r=1;
        break;
    }
    
    }
    if (r==1 || n<=1 )
    printf("%d is not a Prime Number!",n);
    else
         printf("%d is a Prime Number!",n);
    

    return 0;
}


