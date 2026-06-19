// Q42	Write a program to Write function to find maximum.

#include <stdio.h>

int max(int a,int b,int c)
{
    if( a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else 
    return c;

}

int main()
{
    int a,b,c;
    printf("Enter any three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Maximum=%d",max(a,b,c));
    
    return 0;
}

// Sample Output:
// Enter any three numbers: 5 4 8
// Maximum=8