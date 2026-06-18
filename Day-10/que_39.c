// Q39	Write a program to Print number pyramid.
//     1
//    121
//   12321
//  1234321
// 123454321

#include <stdio.h>

int main()
{
    int i,j;
    for ( j = 1; j <= 5; j++)
    {
        for ( i = 1; i <= 5-j; i++)
        {
            printf(" ");
        }
        for ( i = 1; i <= j; i++)
        {
            printf("%d",i);
        }
        for ( i =j-1; i >=1; i--)
        {
            printf("%d",i);
        }
        printf("\n");
        
        
    }
    

    
    return 0;
}