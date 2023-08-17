// write a prgram for unary operator

#include<conio.h>
#include<stdio.h>
void main()
{
	int a = 20, b, c;
	printf("valur of a = %d\n",a);
	b = -a;
	printf("Value of b = %d\n",b);
	c = ++a;
	printf("Value of c = %d\n",c);
	c = --a;
	printf("Value of c = %d\n",c);
	c = a++;
	printf("Value of c=%d\n", c);
	printf("Value of a=%d\n",a);
	getch();
}
