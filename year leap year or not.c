// write a program for given year is leap year or not

#include<stdio.h>
#include<conio.h>

void main()
{
	int year;
	printf("Enter year");
	scanf("%d",&year);
	(year%4==0 && year%100!=0 || year/400==0)? printf("Year is leap year") : printf("Year is not leap year");
	getch();
}