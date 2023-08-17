// write a program to calculate simple intrest

#include<stdio.h>
#include<conio.h>
void main()
{
	float p, r, n, si;
	printf("Enter the principle amount rate of intrest period");
	scanf("%f%f%f",&p, &r, &n);
	si = p*r*n/100;
	printf("simple intrest = %f", si);
	getch();
}
