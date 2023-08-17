// function by without passing arguments and with returning values 

#include<stdio.h>
#include<conio.h>
float circle();
float circle()
{
	float radius, a_circle;
	printf("Enter the radius of circle");
	scanf("%f",&radius);
	a_circle=3.14*radius*radius;
	return(a_circle);
}
void main()
{
	float area_circle;
	area_circle=circle();
	printf("Area of circle=%f",area_circle);
	getch();
}