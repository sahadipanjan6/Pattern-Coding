/*
	1
	1 0
	1 0 1
	1 0 1 0
	1 0 1 0 1
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
		
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			// if odd position
			if(j%2 == 1)
				printf("1 ");
				
			// if even position
			else
				printf("0 ");
		}
		printf("\n");
	}
	
}
