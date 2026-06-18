// Q38	Write a program to Print reverse pyramid.
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main()
{
    int i,j,k;
    for ( i = 0; i < 5 ; i++)
        {
            for ( j = 5; j>5-i; j--)
            {
                printf(" ");  
            }
            for ( k = 7; k >=2*i-1; k--)
            {
                printf("*");
            }
            
            printf("\n");
        }

        
        return 0;
    }
    