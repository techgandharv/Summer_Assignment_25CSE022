// Q54	Write a program to Frequency of an element.

#include <stdio.h>

int main()
{
    int n,check,i,count=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter element to check frequency:");
    scanf("%d",&check);

    for ( i = 0; i < n; i++)
    {
        
        if(a[i]==check)
        {
            count++;
        }
    }
    printf("The frequency of %d is %d times!",check,count);
    
    return 0;
}

// Sample Output:
// Enter number of elements: 7
// Enter array elements: 4 3 4 4 5 7 4
// Enter element to check frequency:4
// The frequency of 4 is 4 times!