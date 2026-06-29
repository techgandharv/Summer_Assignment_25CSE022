// Q83	Write a program to Count vowels and consonants.

#include <stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int i,l;
    printf("Enter any string: ");
    gets(str);
    l = strlen(str);

    int vowel_count = 0;
    int consonent_count = 0;
    for ( i = 0; i < l; i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || 
           str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
       {
        vowel_count++;
       }
       else if (str[i] == ' ')
       {
        continue;
       }
       else
       {
        consonent_count++;
       }
          
    }
    printf("Vowels = %d\n",vowel_count);
    printf("Consonents = %d",consonent_count);
    
    return 0;
}

// Sample Output:
// Enter any string: good morning
// Vowels = 4
// Consonents = 7
