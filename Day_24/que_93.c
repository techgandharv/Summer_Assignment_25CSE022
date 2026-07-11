// Q93	Write a program to Check string rotation.

#include <stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char str1[50],str2[50];

    printf("Enter 1st string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    
    printf("Enter 2nd string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';;

    if (strlen(str1) != strlen(str2))
    {
        printf("Not a string rotation!");
        return 0;
    }

    int l = strlen(str1);
    for ( i = 0; i < l; i++)
    {
        char temp = str1[0];
        for ( j = 0; j < l; j++)
        {
            str1[j] = str1[j+1]; 
        }
        str1[l-1] = temp;
        if(strcmp(str1,str2) == 0)
        {
            printf("String are Rotations!");
            return 0;
        }
    }
    
    printf("String are not Rotations!");
    
    return 0;
}

// Enter 1st string: cdeab
// Enter 2nd string: bcdea
// String are Rotations!
