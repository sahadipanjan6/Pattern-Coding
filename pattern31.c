/*
	     *
	   * *
	 * * *
   * * * *
 * * * * *
   
*/

#include<stdio.h>

void main()
{
	int i, j, k = 0;
	
	for(i=1; i<=5; i++)
	{
		// giving the spaces
		for(k=5-i; k>=0; k--)
			printf("  ");
			
		// giving the stars
		for(j=1; j<=i; j++)
			printf("* ");
			
		printf("\n");
		
	}
}
