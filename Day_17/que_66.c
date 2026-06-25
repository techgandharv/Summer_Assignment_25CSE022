// Q66	Write a program to Union of arrays.

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
    int k=n_a;
    for ( i = 0; i < n_b; i++)
    {
        int found=0;
        for ( j = 0; j < k; j++)
        {
            if(b[i]==c[j])
           { found=1;
            break;
           }
        }
        if(!found)
        {  
           c[k]=b[i];
           k++;
        }

    }
     
    printf("Array after union: [");
    for ( i = 0; i < k; i++)
    {
        printf("%d",c[i]);
        if (i<k-1)
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
// Enter number of elements in 2nd array: 6
// Enter elements in 2nd array: 3 4 5 6 7 8
// Array after union: [1, 2, 3, 4, 5, 6, 7, 8]