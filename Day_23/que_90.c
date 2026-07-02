// Q90	Write a program to Find first repeating character.

#include <stdio.h>
#include<string.h>

int main()
{
    int i,j,l;
    char str[50];                                                                                                 
    printf("Enter a string: ");      
    fgets(str, sizeof(str), stdin);       
    str[strcspn(str, "\n")] = '\0';
            
    char first = '\0';        
    l = strlen(str);
    for ( i = 0; i < l; i++)
    {
        if (str[i] == ' ')
        continue;
        int count = 0;
        for (j = 0; j < l; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }
        if(count > 1)
        {
            first = str[i];
            break;
        }

    }
    
    if (first != '\0')
      {
          printf("The first repeating characer is %c",first);
      }
    else
      {
          printf("No repeating character found.");
      }
     
    return 0;
}

// Sample Output:
// Enter a string: hindi  
// The first repeating characer is i