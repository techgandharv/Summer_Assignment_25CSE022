// Q99	Write a program to Sort names alphabetically.

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i = 0, j;
    char name[50][50], temp[50];

    printf("Enter number of Names: ");
    scanf("%d", &n);
    getchar();

    while (i < n)
    {
        printf("Enter name %d: ", i + 1);
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';
        i++;
    }

    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Alphabetically Sorted Names are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d.%s\n", i + 1, name[i]);
    }

    return 0;
}

// Sample Output:
// Enter number of Names: 7
// Enter name 1: Vinay
// Enter name 2: Vijay
// Enter name 3: Vinit
// Enter name 4: Rahul
// Enter name 5: Tanuj Kumar
// Enter name 6: Tanuj Gupta
// Enter name 7: Aman
// Alphabetically Sorted Names are:
// 1.Aman
// 2.Rahul
// 3.Tanuj Gupta
// 4.Tanuj Kumar
// 5.Vijay
// 6.Vinay
// 7.Vinit
