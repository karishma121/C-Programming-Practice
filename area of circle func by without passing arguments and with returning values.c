// Calculate are of circle function by without passing arguments and whith returning values 

#include <stdio.h>
#include<conio.h>

float circle();
float circle()
{
	float radius, area_circle;
	printf("Enter the circle of radius");
	scanf("%f", &radius);
	area_circle = 3.14 * radius * radius;
	return area_circle;
}
void main()

{
	float a_circle;
	a_circle = circle();
	printf("Area of circle is = %f", a_circle);
	getch();
}
