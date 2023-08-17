// write a program to calculate square 

#include<conio.h>
#include<stdio.h>

void main()
{
	int square, number;
	printf("Enter the number");
	scanf("%d", &number);

	square= number  *number;

	printf("Suare of given number %d is =%d", number, square);
	getch();
}