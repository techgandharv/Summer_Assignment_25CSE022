// Q17	Write a program to Check perfect number.

#include <stdio.h>

int main() 
{
    int num,i,r,s=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    num=num;

    printf("The factors of %d are:",num);
    for(i=1;i<num;i++)
    {
        r=num%i;
        if(r!=0)
        continue;
        printf("%d  ",i);
        s=s+i;
    }
    printf("\nThe sum of factors is: %d\n",s);

    if(s==num)
    printf("%d is a Perfect Number!",num);
    else
    printf("%d is a not Perfect Number!",num);

    



    return 0;
}
