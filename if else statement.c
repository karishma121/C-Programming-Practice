// write a program number is even or odd using if else statement

#include<stdio.h>
#include<conio.h>

void main()
{
	int number;
	printf("Enter the number");
	scanf("%d",&number);
	if (number%2==0)
		printf("number is even");
	else
		printf("number is odd");
	getch();
}
