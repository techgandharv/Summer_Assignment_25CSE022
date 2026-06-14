// Q22	Write a program to Convert binary to decimal.

#include <stdio.h>
#include<math.h>

int main()
{
    int binary[32],i,n,count=0,s=0;
    printf("Enter number of bits: ");
    scanf("%d",&n);

    printf("Enter any %d digit Binary number: ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&binary[i]);
        count=i;
    }
    for ( i = 0; i<n ; i++)
    {
        s=s+binary[i]*pow(2,n-1-i);
    }
    printf("The Decimal number is: %d",s);
    


    
    return 0;
}