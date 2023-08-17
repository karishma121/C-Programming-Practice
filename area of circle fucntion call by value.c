// area of circle using function call by value

#include<stdio.h>
#include<conio.h>

void circle(float);
void circle(float radius)
{
float area_circle;
area_circle = 3.14 * radius * radius;
printf("area of circle = %f", area_circle);
}

void main()
{
	float r;
	printf("Enter the radius of circle");
	scanf("%f", &r);
	circle(r);
	 getch();
}


