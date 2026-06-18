// Q16	Write a program to Print Armstrong numbers in a range.

#include<stdio.h>

int main()
{
    int   r,start,end,i,x,num,s;
    printf("Enter Start Number: ");
    scanf("%d",&start);

    printf("Enter End Number: ");
    scanf("%d",&end);

    printf("The Amstrong Numbers between %d and %d are: ",start,end);

    for(i=start;i<end;i++)
    {
        s=0;

        x=i;
        num=i;
        while(num>0)
        {
            r =num % 10;
            num = num/10;
            s = s + r*r*r;
        
        }
        if(s==x)
        printf("%d\t",x);
     }


         
    return 0;
}