// Q98	Write a program to Find common characters in strings.

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    printf("Enter 1st string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter 2nd string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int i = 0;
    printf("Common characters are:");
    while (str1[i] != '\0')
    {
        int j = 0;
        int duplicate = 0;
        int k = 0;
        while (k < i)
        {
            if (str1[i] == str1[k] && i != k)
                duplicate = 1;
            k++;
        }
        if (!duplicate)
        {
            while (str2[j] != '\0')
            {
                if (str1[i] == str2[j])
                {
                    printf(" %c", str1[i]);
                    break;
                }
                j++;
            }
        }
        i++;
    }

    return 0;
}

// Sample Output:
// Enter 1st string: hindi
// Enter 2nd string: english
// Common characters are: h i n