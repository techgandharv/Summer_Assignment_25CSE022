// Q77	Write a program to Multiply matrices.	


#include <stdio.h>

int main()
{
    int r_1,c_1,r_2,c_2,i,j,k;
    printf("Enter order of 1st matrix: ");
    scanf("%d %d",&r_1,&c_1);
    printf("Enter order of 2nd matrix: ");
    scanf("%d %d",&r_2,&c_2);

    if (c_1 != r_2)
    {
        printf("Matrix Multiplication is not possible!");
        return 0;
    }

    int a[r_1][c_1];
    printf("Enter elements of 1st matrix:\n");
    for ( i = 0; i < r_1; i++)
    {
        for ( j = 0; j < c_1 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    int b[r_2][c_2];
    printf("Enter elements of 2nd matrix:\n");
    for ( i = 0; i < r_2; i++)
    {
        for ( j = 0; j < c_2 ; j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    int c[r_1][c_2];
    printf("Matrix after Multiplication:\n");
    for ( i = 0; i < r_1; i++)
    { 
        for ( j = 0; j < c_2; j++)
        {
            c[i][j] = 0;
            for ( k = 0; k < c_1; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
                
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Sample Output:

// Enter order of 1st matrix: 2 3
// Enter order of 2nd matrix: 3 2
// Enter elements of 1st matrix:
// 2 3 4 

// 1 2 3

// Enter elements of 2nd matrix:
// 5 4

// 3 4

// 1 2

// Matrix after Multiplication:
// 23 28 
// 14 18