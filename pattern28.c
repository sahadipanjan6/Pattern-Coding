/*
	*
	* *
	*   *
	*     *
	* * * * *
	
*/

#include<stdio.h>

void main()
{
	int i, j, k = 0;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 || j==i || i==5)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
