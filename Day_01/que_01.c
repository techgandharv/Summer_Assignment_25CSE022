//  Q1	Write a program to Calculate sum of first N natural numbers.


#include <stdio.h>
int main()
{ int n,i,sum;
    
    printf("Enter any natural number:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
        
    }
    printf("The sum of first %d numbers is %d",n,sum);
    return 0;
}

