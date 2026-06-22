// Q55	Write a program to find Second largest element.

#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int largest=a[0];
    int second_largest=a[0];
    for ( i = 0; i < n; i++)
    {
        if(a[i]>largest)
        {
            second_largest=largest;
            largest=a[i];
        }
        else if(a[i] > second_largest && a[i] != largest)
        {
            second_largest = a[i];
        }
    }
    printf("%d is second largest",second_largest);
    
    return 0;
}

// Sample Output:
// Enter number of elements: 7
// Enter array elements: 1 66 4 533 42 34 23 
// 66 is second largest


