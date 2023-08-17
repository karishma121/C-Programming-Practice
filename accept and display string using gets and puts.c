// write a program for accept and display using gets and puts 

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[10];
	printf("Enter string\n");
	gets(name);						//accept complete string using white spae
	printf("Display string \n");
	puts(name);					//to siplay string and take cursor automatically on next line 
	getch();
}