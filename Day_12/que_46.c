// Q46	Write a program to Write function for Armstrong.

#include <stdio.h>
#include<math.h>

int armstrong(int num)
{
    int s=0;
    int x=num;
    while(num>0)
    {
        s = s + (int)round(pow((num%10),3));
        num = num / 10;
    }
    printf("Sum = %d\n",s);
    if(s==x)
    return 1;
    else
    return 0;
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    if (armstrong(num))
    {
        printf("%d is an armstrong number!",num);
    }
    else
    {
        printf("%d is not an armstrong number!",num);
    }
    
    return 0;
}

// Sample Output:
// Enter any number: 153
// Sum = 153
// 153 is an armstrong number!