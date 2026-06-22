// Q53	Write a program to Linear search.

#include <stdio.h>

int main()
{
    int n,check,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter element to find:");
    scanf("%d",&check);

    for ( i = 0; i < n; i++)
    {
        if(a[i]==check)
        {
            printf("%d is found on index %d",check,i);
            return 0;
        }
    }
    printf("%d not found!",check);
    
    return 0;
}

// Sample Output:
// Enter number of elements: 6
// Enter array elements: 4 6 2 0 7 6
// Enter element to find:7
// 7 is found on index 4