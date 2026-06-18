// Q31	Write a program to Print character triangle.
// A
// AB
// ABC
// ABCD
// ABCDE

#include <stdio.h>

int main()
{
    int i,j;
    char c;
    for ( i = 1; i <=5 ; i++)
    {
        c=65;
        for ( j = 1; j <=i; j++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    
    
    return 0;
}