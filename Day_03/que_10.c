// Q10	Write a program to Print prime numbers in a range.

#include <stdio.h>
int main()
{ int initial,last,i,j,prime;
    printf("Enter initial number: ");
    scanf("%d",&initial);
    printf("Enter last number: ");
    scanf("%d",&last);
     printf("Prime numbers between %d and %d are:",initial,last);
    for ( i = initial; i < last; i++)
    {
        if(i<=1)
        continue;

        prime=1;

        for ( j = 2; j < i; j++)
        {
            if(i%j==0)
           { prime=0;

            break;
           }
        }

        if(prime)
        printf("%d\t",i);
        
    }

    return 0;
}


