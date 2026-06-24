// Q61	Write a program to Find missing number in array.

#include <stdio.h>

int main()
{
    int n,num,i,j;
    printf("Enter number of elements in array:");
    scanf("%d",&n);

    int a[n];
    printf("Enter elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Missing number: ");
    for ( i = 1; i < n+1 ; i++)
    {
        int found=0;
        for ( j = 0; j < n; j++)
        {
            if(a[j]==i)
            {
                found = 1;
                break;
            }
        }
        if(found==0)
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;
}

// Sample Output:
// Enter number of elements in array:7
// Enter elements of array: 1 2 4 5 6 7 8
// Missing number: 3 
