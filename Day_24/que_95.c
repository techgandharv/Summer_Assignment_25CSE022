// Q95	Write a program to Find longest word.

#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char str[50];
    printf("Enter a String with multiple words:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int word_len = 0;
    int start = 0;
    int max_start = 0;
    while (str[i] != '\0')
    {
        int count = 0;
        while (str[i] == ' ')
        {
            i++;
        }
        start = i;
        while (str[i] != ' ' && str[i] != '\0')
        {
            count++;
            i++;
        }
        if (count > word_len)
        {
            word_len = count;
            max_start = start;
        }
    }
    printf("Longest Word: ");
    for (i = max_start; i < max_start + word_len; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}

// Sample Output:
// Enter a String with multiple words:Lion is the king of forest
// Longest Word: forest