// Q68	Write a program to Find common elements.

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

    printf("Common elements are: ");
    for ( i = 0; i < n_a; i++)
    {
        int found=0;
        for ( j = 0; j < n_b; j++)
        {
            if(a[i]==b[j])
            {
                found=1;
                break;
            }
        }
        if(found)
        {
            int duplicate=0;
            for ( j = 0; j < i; j++)
            {
                if (a[i]==a[j])
                {
                    duplicate=1;
                    break;
                }
                
            }
            if (!duplicate)
            {
                printf("%d ",a[i]);
            }
            

        }

    }
    


    return 0;
}

// Sample Output:
// Enter number of elements in 1st array: 5
// Enter elements in 1st array: 1 2 4 2 3  
// Enter number of elements in 2nd array: 7
// Enter elements in 2nd array: 1 4 6 3 7 8 5
// Common elements are: 1 4 3 