// Q59	Write a program to Rotate array right.

#include <stdio.h>

int main(){
    int n,i;

    printf("Enter number of elements of array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The right rotated array: [");
    printf("%d, ",a[n-1]);
    for ( i = 1; i < n; i++)
    {
        printf("%d",a[i-1]);
        if (i<n-1)
        {
            printf(", ");
        }
        
    }
   
    printf("]");

    return 0;
}

// Sample Output:
// Enter number of elements of array: 5
// Enter array elements: 1 2 3 4 5
// The right rotated array: [5, 1, 2, 3, 4]

