// Calculate are of circle function with passing arguments and whithout returning values 

#include <stdio.h>
#include<conio.h>

void circle (float);
void circle (float r)
{
	float area_circle;
	area_circle = 3.14 * r * r;
	printf("Area of circle is = %f", area_circle);
}

void main()
{
	float r;
	printf("Enter the circle of radius");
	scanf("%f", &r);
	circle(r);
	getch();
}
