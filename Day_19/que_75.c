// Q75	Write a program to Transpose matrix.

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

    printf("Matrix after tranpose:\n");
    for ( i = 0; i < c_1; i++)
    {
        for ( j = 0; j < r_1; j++)
        {
           printf("%d ",a[j][i]); 
        }
        printf("\n");
    }
    
    return 0;
}

// Sample Output:

// Enter order of the matrix: 3 4
// Enter elements of the matrix:
// 1 2 3 4
// 4 3 5 2
// 6 4 2 4

// Matrix after tranpose:
// 1 4 6 
// 2 3 4 
// 3 5 2 
// 4 2 4