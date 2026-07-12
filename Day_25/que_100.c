// Q100	Write a program to Sort words by length.

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i = 0, j;
    char word[50][50], temp[50];

    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();

    while (i < n)
    {
        printf("Enter word %d: ", i + 1);
        fgets(word[i], sizeof(word[i]), stdin);
        word[i][strcspn(word[i], "\n")] = '\0';
        i++;
    }

    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strlen(word[i])>strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("Sorted words by length are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d.%s\n", i + 1, word[i]);
    }

    return 0;
}

// Sample Code:
// Enter number of words: 6
// Enter word 1: Play
// Enter word 2: Weak
// Enter word 3: Night
// Enter word 4: Winter
// Enter word 5: Background
// Enter word 6: Shy
// Sorted words by length are:
// 1.Shy
// 2.Weak
// 3.Play
// 4.Night
// 5.Winter
// 6.Background