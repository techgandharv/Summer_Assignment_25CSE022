// Q30	Write a program to Print number triangle.
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main()
{
    int i=5,j;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    
    return 0;
}
