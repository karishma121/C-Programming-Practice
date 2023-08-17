// write a program to check person is eligible for voting or not accept age by user using ternary operator

#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("Enter the person age");
	scanf("%d",&age);

	(age>=18)? printf("Person eligibile for voting") : printf("Perrson is not eligible for voting");
	getch();
}