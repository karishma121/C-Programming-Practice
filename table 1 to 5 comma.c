// wrte a program to display table 1 to 5 by using comma operator

#include<stdio.h>
#include<conio.h>

void main()
{
	int one, two, three, four, five;

	for (one=1, two=2, three=3, four=4, five=5; 
		one<=10, two<=20, three<30, four<=40, five<=50; 
		one=one+1, two=two+2, three=three+3, four=four+4, five=five+5)
	{
		printf("\n%d  \t%d  \t%d  \t%d  \t%d", one, two, three, four, five);
	}
	getch();
}