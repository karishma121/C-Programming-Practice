// Compare 2 strings using built in functions 

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10], str2[10];
	int res;
	printf("Enter first string");
	gets(str1);
	printf("Enter second string");
	gets(str2);
	res=strcmp(str1, str2);
	if (res==1)
	//{
		printf("String 1 is greater");
	//}
	if (res==-1)
	//{
		printf("String 2 is greater");
	//}
	if (res==0)
	//{
		printf("String 1 and string 2 both are equal");
	//}
	getch();

}