// Q73	Write a program to Add matrices.

#include <stdio.h>
int main()
{
    int r_1,c_1,r_2,c_2,i,j;
    printf("Enter order of 1st matrix: ");
    scanf("%d %d",&r_1,&c_1);
    printf("Enter order of 2nd matrix: ");
    scanf("%d %d",&r_2,&c_2);

    if (r_1!=r_2 || c_1!=c_2)
    {
        printf("Addition not possible!");
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

    int c[r_1][c_1];
    printf("Matrix after addition:\n");
    for ( i = 0; i < r_1; i++)
    {
        for ( j = 0; j < c_1; j++)
        {
         c[i][j] = a[i][j] + b[i][j];
         printf("%d ",c[i][j]);   
        }
        printf("\n");
    }
     
    return 0;
}

// Sample OUtput:

// Enter order of 1st matrix: 3 2
// Enter order of 2nd matrix: 3 2
// Enter elements of 1st matrix:
// 2 4

// 5 4

// 1 2

// Enter elements of 2nd matrix:
// 6 4

// 3 4

// 6 5

// Matrix after addition:
// 8 8 
// 8 8 
// 7 7 

// Enter order of 1st matrix: 3 3
// Enter order of 2nd matrix: 2 2
// Addition not possible!

