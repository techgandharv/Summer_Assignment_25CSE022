// Q40	Write a program to Print character pyramid.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
 

#include <stdio.h>

int main()
{
    int i,j;
    char c;
    for ( j = 1; j <= 5; j++)
    { 
        
        for ( i = 1; i <= 5-j; i++)
        {
            printf(" ");
        } 
        c='A';
        for ( i = 1; i <= j; i++)
        { 
            printf("%c",c);
            c++;
        } 
         c -= 2;
        for ( i =j-1; i >=1; i--)
        {
            printf("%c",c);
            c--;
        }
        printf("\n");
        
        
    }
    

    
    return 0;
}