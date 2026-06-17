// Q35	Write a program to Print repeated character pattern.
// A
// BB
// CCC
// DDDD
// EEEEE

#include <stdio.h>

int main()
{
    int j;
    char i=65;
    for ( i = 65; i <=69 ; i++)
    {
        for(j=65;j<=i;j++)
        {
        printf("%c",i);
    }
    printf("\n");
    }
    
    return 0;
}