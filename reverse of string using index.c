// Write a program to print reverse of string using index

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i, n;
	char str[10];
	printf("Enter the string to get reverse \n");
	gets(str);
	n = strlen (str);
	printf("\n reversed string is = \n");
	for(i = n-1; i>=0; i--)
	{
		printf("%c", str[i]);
	}
	getch();
}