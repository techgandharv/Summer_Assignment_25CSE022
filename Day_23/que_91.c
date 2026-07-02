// Q91	Write a program to Check anagram strings.

#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char str1[50],str2[50];
    int freq[256] = {0};
    printf("Enter 1st string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter 2nd string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2))
    {
        printf("Not Anagram!");
        return 0;
    }

    for ( i = 0; str1[i]!='\0'; i++)
    {
        freq[(unsigned char)str1[i]]++;
    }
    
    for ( i = 0; str2[i]!='\0'; i++)
    {
        freq[(unsigned char)str2[i]]--;
    }
    
    for ( i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("Not Anagram!");
            return 0;
        }
        
    }
    printf("Anagram Strings!");

    return 0;
}

// Sample Output:
// Enter 1st string: care
// Enter 2nd string: race
// Anagram Strings!