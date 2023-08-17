// write a program to count even and odd numbers from 1 to 20

#include<stdio.h>
#include<conio.h>

void main()
{
	int ecount=0,ocount=0,i,num;
	printf("Enter number");
	scanf("%d\n",num);
	{
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
			ecount++;				//something wrong not a display output
		else
			ocount++;
}
printf("Even count=%d",ecount);
printf("Odd count=%d",ocount);
}
getch();
}

