// Q49	Write a program to Input and display array.

#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter all %d elements of Array: ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array = ");
    printf("[");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
        if(i<n-1)
        printf(", ");
        
    }
    printf("]");
    
    
    return 0;
}

// Sample Output:
// Enter no of elements in array: 5        
// Enter all 5 elements of Array: 1 3 5 7 9
// Array = [1, 3, 5, 7, 9]

