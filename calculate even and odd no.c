
// write a program to calculate 1 to 20 even and odd count

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, ecount=0, ocount=0;
printf("Enter the number 1 to 20:\n");


for (i = 1; i <=20; i++)
{
	if(i%2==0)
		ecount++;
	else
		ocount++;
}
printf("Even count = %d\n", ecount);
printf("Odd count = %d\n", ocount);

getch();
}