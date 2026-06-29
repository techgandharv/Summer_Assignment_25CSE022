// Q81	Write a program to Find string length without strlen().

#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter any string: ");
    // scanf("%s",str);     //can be used but it stops when first space comes!

    //hence we will use fgets()
    fgets(str,sizeof(str),stdin);
    
    int i=0;
    while(str[i]!='\0' && str[i]!='\n')
    {
        i++;
    }
    printf("Length of string is: %d",i);
    return 0;
}

// Sample Output:
// Enter any string: Gandharv Kumar Singh
// Length of string is: 20