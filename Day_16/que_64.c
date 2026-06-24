// Q64	Write a program to Remove duplicates from array.


#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter number of elements in array:");
    scanf("%d",&n);

    int a[n];
    printf("Enter elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array without duplicates: ");
    for ( i = 0; i < n; i++)
    {
        int duplicate=0;
        for ( j = 0; j < i; j++)
        {
            if(a[i]==a[j])
           {
             duplicate=1;
             break;
           }
        }
        if(!duplicate)
        printf("%d ",a[i]);
    }
    
    return 0;
}

// Sample Output:
// Enter number of elements in array:10
// Enter elements of array: 1 3 2 2 4 3 2 5 2 6  
// Array without duplicates: 1 3 2 4 5 6 