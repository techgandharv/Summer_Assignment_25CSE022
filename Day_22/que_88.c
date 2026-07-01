// Q88	Write a program to Remove spaces from string.	


#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    l = strlen(str);
    printf("String without spaces: ");
    for ( i = 0; i < l; i++)
    {
        if(str[i] == ' ')
        continue;
        printf("%c",str[i]);
    }
    
    return 0;
}

// Sample Output:
// Enter a string: hello world
// String without spaces: helloworld