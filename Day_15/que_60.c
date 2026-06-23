// Q60	Write a program to Move zeroes to end.

#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter number of elements of array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int count=0;
    printf("The resultant array: [");
    for ( i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            printf("%d, ",a[i]);
        }
        else
        count++;
        
    }
    for ( i = 0; i < count; i++)
    {
        printf("0");
        if (i<count-1)
        {
            printf(", ");
        }
    }
    printf("]");

    return 0;
}

// Sample Output:
// Enter number of elements of array: 8 
// Enter array elements: 0 7 6 0 0 8 0 3  
// The resultant array: [7, 6, 8, 3, 0, 0, 0, 0]