// Q70	Write a program to Selection sort.

#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int temp=0;
    for ( i = 0; i < n; i++)
    {
        int smallest = a[i];
        for ( j = i; j < n; j++)
        {
            if(smallest>a[j])
            smallest=a[j];
        }
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }

    printf("Array after selection sort : [");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
        if (i<n-1)
        {
            printf(", ");
        }
        else
        printf("]");
    }
     return 0;