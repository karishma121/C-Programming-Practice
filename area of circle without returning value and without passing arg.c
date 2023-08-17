// Calculate are of circle functio without returning values and whithout passing arguments 

#include<stdio.h>
#include<conio.h>
void circle();
void circle()
	{
		float radius, area_circle;
		printf("Enter the radius");
		scanf("%f", &radius);
		area_circle = 3.14 * radius * radius;
		printf("Area of circle is = %f", area_circle);
}

void main()
{
	circle();
	getch();
}