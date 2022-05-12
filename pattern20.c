/*
	E
	E D
	E D C
	E D C B
	E D C B A
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
	char ch;
	
	for(i=1; i<=5; i++)
	{
		ch = 'E';
		for(j=1; j<=i; j++)
			printf("%c ", ch--);
			
		printf("\n");
	}
}
