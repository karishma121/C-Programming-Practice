// Write a program to open existing text file in read mode and enter character by character data into that file and display that data character by character on screen from that file. 

#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char ch;
	fp=fopen("Example.txt","r");
	fputs("S", fp);
	fclose(fp);

	fp=fopen("Exmaple.txt","a");
	fputs("E", fp);
	fclose(fp);

	fp=fopen("Example.txt","a");
	fputs("E", fp);
	fclose(fp);

	fp=fopen("Example.txt","a");
	fputs("D", fp);
	fclose(fp);

	fp=fopen("Example.txt", "r");
	while ((ch=fgetc(fp))!=EOF)
	{
		printf("%s", ch);
	}
	fclose(fp);
	getch();
}

