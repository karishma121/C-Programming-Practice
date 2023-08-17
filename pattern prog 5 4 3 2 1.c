/*	5 
	5 4 
	5 4	3
	5 4 3 2
	5 4 3 2 1	*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k=5;
	for (i=1; i<=5; i++)
	{
		for(j=0; j>i; j++)
		{
			printf("%d \t", (k-j)+1);				// doesent get accepted output
		}
		printf("\n");
	}
	getch();
}