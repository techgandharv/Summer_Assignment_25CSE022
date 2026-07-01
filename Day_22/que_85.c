// Q85	Write a program to Check palindrome string.	

#include <stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    l = strlen(str);
    char rev[50];
    printf("Reverse string is: ");
    for ( i = 0; i < l; i++)
    {
        rev[i] = str[l-1-i];
        printf("%c",rev[i]);
    }
    rev[l] = '\0';

    if(strcmp(str,rev)==0)
    {
        printf("\nHence the string is a palindrome!");
    }
    else
    printf("\nHence the string is not a palindrome!");
    
    return 0;
}

// Sample Output:
// Enter a string: madam
// Reverse string is: madam
// Hence the string is a palindrome!