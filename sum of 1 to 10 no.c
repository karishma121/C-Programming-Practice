// write a program to print sum of 1 to 10 numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, sum=0;
	for (i=1;i<=10;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("sum=%d\n",sum);
	getch();
}
