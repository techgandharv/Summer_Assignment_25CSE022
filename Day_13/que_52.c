// Q52	Write a program to Count even and odd elements.

#include <stdio.h>

int main()
{
     int n,i,even_count=0,odd_count=0;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter all %d elements of Array: ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        if (a[i]%2)
        even_count++;
        else
        odd_count++;
    }

    printf("Even elements: %d\n",even_count);
    printf("Odd elements: %d",odd_count);
     
    return 0;
}

// Sample Output:
// Enter no of elements in array: 10
// Enter all 10 elements of Array: 45 3 44 56 2 9 0 44 23 5   
// Even elements: 5
// Odd elements: 5