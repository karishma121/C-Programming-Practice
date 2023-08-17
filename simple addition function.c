// simple addition program by using function

#include<stdio.h>
#include<conio.h>

void addition();
void addition()
{
	int a, b, add;
printf("Enter values a and b");
scanf("%d%d", &a, &b);
add = a+b;
printf("addition = %d", add);
}

void main()
{
	addition();

getch();
}

