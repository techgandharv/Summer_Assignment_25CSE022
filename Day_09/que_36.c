// Q36	Write a program to Print hollow square pattern.
// *****
// *   *
// *   *
// *   *
// *****	

#include <stdio.h>

int main()
{
	int i,j;
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		
		{
			if((i==1 || i==2 || i==3)&&(j==1||j==2||j==3))
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}