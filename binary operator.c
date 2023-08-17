//write a program for binary operator

#include<stdio.h>
#include<conio.h>
void main()
{
	int x, y, add, sub, mul,mod;
	float div;
	printf("Enter values of x and y\n");
	scanf("%d%d", &x, &y);

	add=x+y;
	printf("addition = %d\n", add);

	sub=x-y;
	printf("substration =%d\n",sub);

	mul=x*y;
	printf("multiplication=%d\n",mul);

	div=x/y;
	printf("division=%f\n",sub);

	mod=x%y;
	printf("modulus=%d",mod);  
	
	getch();
}
