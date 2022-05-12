/*
	A B C D E
	B C D E
	C D E
	D E
	E
	
*/

#include<stdio.h>

void main()
{
	int i, j = 0;
	char ch = 'A';
	
	for(i=5; i>=1; i--)
	{
		for(j=(int)ch; j<=(int)ch+i-1; j++)
			printf("%c ", (char)j);
		
		printf("\n");
		ch++;
	}
}
