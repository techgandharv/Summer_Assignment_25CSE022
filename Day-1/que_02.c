// Q2	Write a program to Print multiplication table of a given number.


#include<stdio.h>
int main()
{
    int i=1,n,p;

    printf("***********************\n");

    printf("MULTIPLICATION TABLE\n");

    printf("***********************\n\n");
    printf("Enter any number: ");
    scanf("%d\n",&n);

    printf("The multiplication table of %d is:\n",n);
    
    while(i<=10)
    {
    {    p=i*n;
        printf("%d x %d = %d\n",n,i,p);
    }
    i++;
    } 
    return 0;
}