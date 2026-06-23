// Q57	Write a program to Reverse array.

#include <stdio.h>

int main(){
    int n,i;

    printf("Enter number of elements of array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("The reverse array: [");
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d ",a[i]);
        if (i>0)
        {
            printf(", ");
        }
    }
    printf("]");

    return 0;
}


// Sample Output:
// Enter number of elements of array: 5
// Enter array elements: 10 20 30 40 50 
// The reverse array: [50 , 40 , 30 , 20 , 10 ]