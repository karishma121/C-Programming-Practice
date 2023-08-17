// Write a program for command line arguments 

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(int argc, char * argv [])
{
	int i;
	printf("Number of parameters = %d", argc);
	for (i=0; i<argc; i++)
	{
		printf("\n %s", argv[i]);
	}
		getch();
}
