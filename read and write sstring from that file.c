// Write a program to write string into file and read string from that file display that string on the console.

#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char str[10];
	printf("Enter string");
	gets(str);
	fp=fopen("Example.txt","w");
	fputs(str, fp);
	fclose(fp);
	fp=fopen("Example.txt", "r");
	printf("%s", fgets (str,4,fp));
	fclose(fp);
	getch();
}
