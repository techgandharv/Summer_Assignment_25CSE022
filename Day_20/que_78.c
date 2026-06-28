// Q78	Write a program to Check symmetric matrix.

#include <stdio.h>

int main()
{
    int r_1,c_1,i,j;
    printf("Enter order of the matrix: ");
    scanf("%d %d",&r_1,&c_1);

    if(r_1!=c_1)
    {
        printf("Not a square matrix so symmetric matrix is not possible");
        return 0;
    }

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


    int check = 1;
    for ( i = 0; i < r_1; i++)
    {
        for ( j = 0; j < c_1; j++)
        {
            if (a[i][j]!=a[j][i])
            {
                check = 0;
                break;
            }
        }
        if (check == 0)
        break;
    }

    if(check)
    printf("This is a symmetric matrix!");
    else
    printf("This is not a symmetric matrix!");
    
    return 0;
}

// Sample Output:
// Enter order of the matrix: 3 3
// Enter elements of the matrix:
// 1 2 3

// 2 3 1

// 3 1 2

// This is a symmetric matrix!