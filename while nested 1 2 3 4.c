
/* write a program print 
	1234
	1234
	1234
	1234 */

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i = 1; i<=4; i++)
	{
		for (j = 1; j<=4; j++)
	{
		printf("%d\t", j);
		}
		printf("\n");
	}
		getch();
	}
