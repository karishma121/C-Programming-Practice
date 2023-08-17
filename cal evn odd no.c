// calculate even and odd no

#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	while(i<=100)
	{
		if (i%2==0)
			printf("Number is even=%d\n",i);
		else
			printf("Number is odd=%d\n",i);
		i++;
	}
	getch();
}