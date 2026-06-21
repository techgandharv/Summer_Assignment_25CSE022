// Q50	Write a program to Find sum and average of array.

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int a[n],b[n],s[n];
    printf("Enter 1st array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 2nd Array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Array after Sum = ");
    printf("[");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]+b[i]);
        if(i<n-1)
        printf(", ");
    }
    printf("]\n");

    printf("Array after Sum = ");
    printf("[");
    for ( i = 0; i < n; i++)
    {
        printf("%.2f",(a[i]+b[i])/2.00);
        if(i<n-1)
        printf(", ");
    }
    printf("]");

    return 0;
}

// Sample Output:

// Enter 1st array: 1 3 5 7 9
// Enter 2nd Array:  2 4 6 8 10
// Array after Sum = [3, 7, 11, 15, 19]
// Array after Sum = [1.50, 3.50, 5.50, 7.50, 9.50]