// Q86	Write a program to Count words in a sentence.

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
    int check = 0;
    for ( i = 0; i < l; i++)
    {
        if (str[i] == ' ')
        {
            check++;
        }
    }
    printf("No of words in the sentence is %d",check+1);
    
return 0;
}

// Sample Output:
// Enter a string: honesty is the best policy
// No of words in the sentence is 5