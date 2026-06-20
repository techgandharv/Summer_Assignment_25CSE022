// Q48	Write a program to Write function for perfect number.

#include <stdio.h>

int perfect(int num)
{
    int s=0,i;
    printf("The factors of %d are:",num);
    for ( i = 1; i < num; i++)
    {
        if (num%i==0)
       { s=s+i;
         printf("%d ",i);
       }
    }
    printf("\nSum = %d\n",s);

    if (s==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    if (perfect(num))
    {
        printf("Hence %d is a Perfect Number!",num);
    }
    else
    {
        printf("Hence %d is not a Perfect Number!",num);

    }
    
    return 0;
}

// Sample Output:

// Enter any number: 28   
// The factors of 28 are:1 2 4 7 14 
// Sum = 28
// Hence 28 is a Perfect Number!

// Enter any number: 45
// The factors of 45 are:1 3 5 9 15 
// Sum = 33
// Hence 45 is not a Perfect Number!