// write a program given year s leap year or not using if else statement

#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter te year");
	scanf("%d", &year);
	if (year%4==0)
		printf("Year is leap year");
	else
		printf("Year is not leap year");
	getch();
}