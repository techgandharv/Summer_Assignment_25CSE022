// Q84	Write a program to Convert lowercase to uppercase.

#include <stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,l;
    printf("Enter any string: ");
    gets(str);
    l = strlen(str);
    printf("String in uppercase:");
    for ( i = 0; i < l; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
        printf("%c",str[i]);
    }

return 0;
}

// Sample Output:
// Enter any string: my name is gandharv kumar singh
// String in uppercase:MY NAME IS GANDHARV KUMAR SINGH