// write a program to create a new file 

#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	fp=fopen("sample.txt", "w");
	printf("File created successfully....\n");
	fclose(fp);

	fp=fopen("sample.pdf", "w");
	printf("File created successfully.....\n");
	fclose(fp);

	fp=fopen("sample.ppt", "w");
	printf("File created successfully....\n");
	fclose(fp);

	fp=fopen("sample.txt","r");
	printf("File created succefully....\n");
	fclose(fp);

	getch();
}

