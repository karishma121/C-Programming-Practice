/* write a program print 
	2	4	6	8	
	10	12	14	16
	18	20	22	24	*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k=2;
	for (i = 1; i<=3; i++)
	{ 
		for (j = 1; j<=4; j++)
	{		
		printf("%d\t", k);
		k = k+2;
	}
		printf("\n");	
	}
	getch();
}