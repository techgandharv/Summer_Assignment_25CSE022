// Q79	Write a program to Find row-wise sum.

#include <stdio.h>

int main()
{
    int r_1,c_1,i,j;
    printf("Enter order of the matrix: ");
    scanf("%d %d",&r_1,&c_1);

    int a[r_1][c_1];
    printf("Enter elements of the matrix:\n");
    for ( i = 0; i < r_1; i++)
    {
        for ( j = 0; j < c_1 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < r_1; i++)
    {
        int sum = 0;
        for ( j = 0; j < c_1; j++)
        {
            sum += a[i][j];
        }
        printf("Sum of row %d elements = %d\n",i+1,sum);
    }
    
    return 0;
}

// Sample Output:

// Enter order of the matrix: 3 3
// Enter elements of the matrix:
// 1 2 3 

// 4 3 5

// 7 6 4

// Sum of row 1 elements = 6
// Sum of row 2 elements = 12
// Sum of row 3 elements = 17