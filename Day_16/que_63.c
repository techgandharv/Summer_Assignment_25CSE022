// Q63	Write a program to Find pair with given sum.


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
    int sum=0;
    printf("Enter required sum: ");
    scanf("%d",&sum);

    printf("Pairs having sum = %d are: ",sum);
    for(i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(a[i]+a[j]==sum)
            printf("(%d,%d) ",a[i],a[j]);
        }
        
    }
    
    
    return 0;
}

// Sample Output:
// Enter number of elements in array:8 
// Enter elements of array: 1 2 3 4 5 6 7 8
// Enter required sum: 9
// Pairs having sum = 9 are: (1,8) (2,7) (3,6) (4,5) 