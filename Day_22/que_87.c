// Q87	Write a program to Character frequency.

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
        
            printf("%c occur %d times\n",str[i],count);
     }
    
    return 0;
}

// Sample Output:
// Enter a string: summer assignment
// s occur 3 times
// u occur 1 times
// m occur 3 times
// e occur 2 times
// r occur 1 times
//   occur 1 times
// a occur 1 times
// i occur 1 times
// g occur 1 times
// n occur 2 times
// t occur 1 times