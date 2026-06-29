// Q82	Write a program to Reverse a string.


#include <stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int i,l;
    printf("Enter any string: ");
    gets(str);
    l = strlen(str);

    // reversed string
    printf("The reversed string : ");
    for ( i = l-1; i >= 0 ; i--)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}

// Sample Output:
// Enter any string: hello world
// The reversed string : dlrow olleh
