//Function by passing arguments and with returning values

#include<stdio.h>
#include<conio.h>
float circle (float);
float circle (float r)
{	
	float area_circle;
	area_circle=3.14*r*r;
	return area_circle;
}
void main()
{	
	float radius,a_circle;
	printf("Enter radius");
	scanf("%f",&radius);
	a_circle=circle(radius);
	printf("Area of circle=%f",a_circle);
	getch();
}
