// Q76	Write a program to Find diagonal sum.

#include <stdio.h>
int main()
{
    int r_1,c_1,i,j;
    printf("Enter order of 1st matrix: ");
    scanf("%d %d",&r_1,&c_1);

//square matrix check
    if (r_1!=c_1)
    {
        printf("It is not a square matrix so diagonal and diagonal sum is not posssible!");
        return 0;
    }
    
//taking input matrix elements
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
//taking diagonal sum
    int diagonal_sum = 0;
    for ( i = 0; i < r_1; i++)
    {
        for ( j = 0; j < c_1; j++)
        {
            if(i==j)                
            diagonal_sum += a[i][j];
        }
        
    }

//printing diagonal sum of matrix
    printf("The sum of diagonal elemnts is %d!",diagonal_sum);
    
    return 0;
}

// Sample Output:

// Enter order of 1st matrix: 3 3
// Enter elements of 1st matrix:
// 1 2 3      

// 4 5 6

// 7 8 9

// The sum of diagonal elemnts is 15!
