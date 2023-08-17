#include<stdio.h>
#include<conio.h>
void main()
{
	float p, n, r, si, i;
	i = 1; 
	while (i<=3)
	{
	printf("\n\n  ENter priciple amount, rate of intrest, period");
	scanf("%f%f%f", &p, &r, &n);
	si = p * r * n / 100;
	printf("simple intrest = %f", si);
	i++;
	}
	getch();
}
