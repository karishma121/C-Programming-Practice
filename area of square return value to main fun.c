// write a program area of square return the value to main fun and print value in main()

#include<stdio.h>
#include<conio.h>

float square(float);
float square (float side)
{
	float area_square;
	area_square= side * side;
	return area_square;
}

void main()
{
	float a, square_area;
	printf("Enter value a");
	scanf("%f", &a);
	square_area= square(a);
	printf("Area of square is = %f", square_area);
	getch();
}
