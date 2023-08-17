// Write a program to display character using switch function 

#include<conio.h>
#include<stdio.h>

void main()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	switch(ch)
	{
	case'a':printf("Apple");
				break;
	case'b':printf("Ball");
				 break;
	case'c':printf("Cat");
				break;
	case'd':printf("Dog");
				break;
	case'e':printf("Elephant");
				break;
	default:printf("Enter valid choice");
	}
	getch();
}

