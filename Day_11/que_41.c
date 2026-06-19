// Q41	Write a program to Write function to find sum of two numbers.	

#include <stdio.h>

int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    printf("Sum=%d",sum(a,b));
    
    return 0;
}

// Sample Output:
// Enter number a: 4
// Enter number b: 3
// Sum=7