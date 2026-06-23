// Q58	Write a program to Rotate array left.

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
    printf("The left rotated array: [");
    for ( i = 1; i < n; i++)
    {
        printf("%d, ",a[i]);
    }
   
    printf("%d]",a[0]);

    return 0;
}

// Sample Output:
// Enter number of elements of array: 5
// Enter array elements: 1 2 3 4 5
// The left rotated array: [2, 3, 4, 5, 1]

















