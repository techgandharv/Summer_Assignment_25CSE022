// Q69	Write a program to Bubble sort.

#include <stdio.h>

int main(){
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
        for ( j = 0; j < n; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];            
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }    
    printf("Array after bubble sort : [");
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
}

// Sample Output:
// Enter no of elements in array: 6
// Enter array elements: 4 1 6 3 5 2
// Array after bubble sort : [1, 2, 3, 4, 5, 6]