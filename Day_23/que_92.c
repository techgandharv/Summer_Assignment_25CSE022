// Q92	Write a program to Find maximum occurring character.

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
    int max = 0;
    char max_char;

    for ( i = 0; i < l; i++)
    {
        int duplicate = 0;
        int count = 1;
        for ( j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                duplicate = 1;
                break;
            }
        }
        if(duplicate)
        {
            continue;
        }
        for ( j = i+1; j < l; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (count > max)
        {
            max = count;
            max_char = str[i];
        }
        
     }

     printf("%c have maximum frequency occuring %d times!",max_char,max);
    return 0;
}

// Sample Output:
// Enter a string: book
// o have maximum frequency occuring 2 times!
