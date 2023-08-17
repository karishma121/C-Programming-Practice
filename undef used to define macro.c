// #undef us used to #define macro

#include<stdio.h>
#include<conio.h>
#define MESSAGE printf("Welcome to seed")
void main()
{
#undef MESSAGE 
	MESSAGE 
#error printf("Macro not define")
		getch();
}