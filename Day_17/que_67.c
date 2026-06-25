// Q67	Write a program to Intersection of arrays.

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
    int k=0;
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
            for ( j = 0; j < k; j++)
            {
                if (c[j]==a[i])
                {
                    duplicate=1;
                    break;
                }
            }

            if(!duplicate)
            {
                c[k]=a[i];
                k++;
            }
            
         }
        
    }
    printf("Array after Intersection: [");
    for ( i = 0; i < k; i++)
    {
        printf("%d",c[i]);
        if (i<k-1)
        printf(", ");
        
    }
    printf("]");
    
    
    return 0;
}

// Sample Output:
// Enter number of elements in 1st array: 6
// Enter elements in 1st array:  2 4 3 1 5 6  
// Enter number of elements in 2nd array: 4  
// Enter elements in 2nd array: 2 3 4 7
// Array after Intersection: [2, 4, 3]