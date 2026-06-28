// Q80	Write a program to Find column-wise sum.

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

    for ( i = 0; i < c_1; i++)
    {
        int sum = 0;
        for ( j = 0; j < r_1; j++)
        {
            sum += a[j][i];
        }
        printf("Sum of column %d elements = %d\n",i+1,sum);
    }
    
    return 0;
}

// Sample Output:

// Enter order of the matrix: 4 3
// Enter elements of the matrix:
// 1 4 2

// 5 4 3

// 7 6 5 

// 8 7 3 

// Sum of column 1 elements = 21
// Sum of column 2 elements = 21
// Sum of column 3 elements = 13
