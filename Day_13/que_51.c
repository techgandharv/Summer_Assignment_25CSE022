// Q51	Write a program to Find largest and smallest element.

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
    int largest=a[0];
    int smallest=a[0];

    for ( i = 0; i < n; i++)
    {
        if (a[i]>largest)
        
            largest = a[i];
        
        if (a[i]<smallest)
        
            smallest = a[i];
            
    }

    printf("Largest element of array is: %d\n",largest);
    printf("Smallest element of array is: %d",smallest);
     
    return 0;
}

// Sample Output:
// Enter no of elements in array: 6  
// Enter all 6 elements of Array: 34 45 67 23 99 1 34
// Largest element of array is: 99
// Smallest element of array is: 1