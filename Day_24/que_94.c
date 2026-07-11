// Q94	Write a program to Compress a string.

#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char str[50];
    printf("Enter a string with multiple consicutive characters:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Compressed String: ");
    while (str[i] != '\0')
    {
        int count = 1;
        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
        i++;
    }

    return 0;
}

// Sample Output:
// Enter a string with multiple consicutive characters:aaadddsssssggfffd
// Compressed String: a3d3s5g2f3d1