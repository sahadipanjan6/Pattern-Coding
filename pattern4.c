/*
	A B C D E
	A B C D E
	A B C D E
	A B C D E
	A B C D E
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
	
	for(i=1; i<=5; i++)
	{
		for(j=65; j<=69; j++)
			printf("%c ", (char)j);
			
		printf("\n");
	}
}
