// Q21	Write a program to Convert decimal to binary.

#include <stdio.h>

int main()
{
    int num,x,binary[32],i=0,j;
    
    printf("Enter any Number: ");
    scanf("%d",&num);
    x=num;

     if(num==0)
    {
        printf("The Binary of 0 is 0");
        return 0;
    }
    
    while (num>0)
    {
        binary[i]=num%2;
        num/=2;
        i++;
    }
    printf("The Binary of %d is: ",x);
    for (int j = i-1; j >=0; j--)
    {
        printf("%d ",binary[j]);
    }
    



    return 0;
}

