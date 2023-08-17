// write a program to calculate area of circle by using call by function

#include<stdio.h>
#include<conio.h>

void circle();
void circle()
{
	float area_circle, radius;
	printf("Enter circle of radius = ");
	scanf("%f", &radius);
	area_circle = 3.14 * radius * radius;
	printf("Area of cirlce = %f", area_circle);
}

void main()
{
	circle();
	getch();
}