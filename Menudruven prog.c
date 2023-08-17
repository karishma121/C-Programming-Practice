// write a menudriven program

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int a, b, add, sub, mult, choice;
	float div;

	printf("***CHOICE*** \n");
	printf("1.addition \n 2.substractio \n 3.multiplicatio \n 4.division \n 5.exit");
	printf("\nEnter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:	printf("Enter the value of a and b\n");
			scanf("%d%d",&a,&b);
			add=a+b;
			printf("Adittion=%d",add);
			break;

	case 2: printf("Enter the values of a and b\n");
			scanf("%d%d",&a,&b);
			sub=a-b;
			printf("Substraction=%d",sub);
			break;

	case 3: printf("Enter the values of a and b\n");
			scanf("%d%d",&a,&b);
			mult=a*b;
			printf("Multiplication=%d",mult);
			break;

	case 4: printf("Enter the values of a and b\n");
			scanf("%f%f",&a,&b);
			div=a/b;
			printf("Division=%f",div);
			break;

	case 5: exit(0);

	default: printf("Enter valid choice");
	}
	getch();
}
