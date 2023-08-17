#include<stdio.h>
#include<conio.h>
int add(int, int);
int add(int m, int n)
{
	int addition;
	addition = m + n;
	return addition;
}

void main()
{
	int a, b, ans;
	printf("Enter the values of a and b");
	scanf("%d%d", &a, &b);
	ans = add(a, b);
	printf("addition = %d", ans);
	getch();
}   

