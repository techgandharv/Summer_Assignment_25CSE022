// Q65	Write a program to Merge arrays.

#include <stdio.h>

int main()
{
    int n_a,n_b,i,j;
    printf("Enter number of elements in 1st array: ");
    scanf("%d",&n_a);
    
    int a[n_a];
    printf("Enter elements in 1st array: ");
    for ( i = 0; i < n_a; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number of elements in 2nd array: ");
    scanf("%d",&n_b);

    int b[n_b];
    printf("Enter elements in 2nd array: ");
    for ( i = 0; i < n_b; i++)
    {
        scanf("%d",&b[i]);
    }

    int c[n_a+n_b];
    for ( i = 0; i < n_a; i++)
    {
        c[i]=a[i];
    }
    for ( i = 0; i < n_b; i++)
    {
        c[n_a+i]=b[i];
    }

    printf("Merged Array: [");
    for ( i = 0; i < n_a+n_b; i++)
    {
        printf("%d",c[i]);
        if (i<n_a+n_b-1)
        {
            printf(", ");
        }
    }
    printf("]");
    
    return 0;
}

// Sample Output:
// Enter number of elements in 1st array: 5
// Enter elements in 1st array: 1 2 3 4 5
// Enter number of elements in 2nd array: 5
// Enter elements in 2nd array: 6 7 8 9 10
// Merged Array: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
