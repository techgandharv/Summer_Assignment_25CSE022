// Q45	Write a program to Write function for palindrome.

#include <stdio.h>

int rev(int num)
{
    int org = num;
    int rev=0;
    while(num>0)
    {
        rev=rev*10+(num%10);
        num=num/10;
    }
    if(org == rev) 
    return 1;
    else
    return 0;
    }


int main()
{ int num;
    printf("Enter any number: ");
    scanf("%d",&num);
     if (rev(num))
     printf("%d is a Palindrome!",num);
     else
     printf("%d is not a Palindrome!",num);

     return 0;
}

// Sample Output:
// Enter any number: 234432
// 234432 is a Palindrome!

// Enter any number: 23456
// 23456 is not a Palindrome!
