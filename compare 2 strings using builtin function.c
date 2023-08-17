
// Write a program to compare 2 strings using built in fucntion

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
	char str1[10], str2[10];
	int res;
	printf("Enter first string");
	gets(str1);
	printf("Enter second string");
	gets(str2);
	res=strcmp (str1, str2);
	if (res == 1)
	{
		printf("first string is greater");
	}
	else if (res== -1)
	{
		printf("second string is greater");
	}
	if (res == 0)
	{
		printf("Both strings are equal");
	}
	getch();
}
