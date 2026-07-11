// Q96	Write a program to Remove duplicate characters.

#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, l;
    char str[50];
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    l = strlen(str);
    printf("String after removing duplicates: ");
    for (i = 0; i < l; i++)
    {
        int duplicate = 0;
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}

// Sample Output:
// Enter any string: afghgfasg
// String after removing duplicates: afghs