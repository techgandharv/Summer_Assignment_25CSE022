// Q56	Write a program to Find duplicates in array.

#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Duplicate elements are: ");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}

// Sample Output:
// Enter number of elements: 8
// Enter array elements: 3 6 3 7 8 5 7 5
// Duplicate elements are: 3 7 5 