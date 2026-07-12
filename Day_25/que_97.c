// Q97	Write a program to Merge two sorted arrays.

#include <stdio.h>

int main()
{
    int a[] = {1, 5, 100, 200};
    int b[] = {2, 4, 6, 8};
    int c[50];
    int i = 0, j = 0, k = 0;

    while (i < 4 && j < 4)
    {

        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // copying remaining elements
    while (i < 4)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < 4)
    {

        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged Array: [");
    for (i = 0; i < 8; i++)
    {
        printf("%d", c[i]);
        if (i < 7)
        {
            printf(", ");
        }
    }
    printf("]");

    return 0;
}

// Sample Output:
// Merged Array: [1, 2, 4, 5, 6, 8, 100, 200]