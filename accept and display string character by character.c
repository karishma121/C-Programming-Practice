// write a program to accept and display string character by character 

#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5],i;
	printf("Enter your name");

	for (i=1;i<=5;i++)
	{
		scanf("%c",&name[i]);
	}
	name[i];
	printf("Display name");
	for (i=1;i<=5;i++)
	{
		printf("%c", name[i]);
	}
	getch();
}


