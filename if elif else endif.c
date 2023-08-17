// #if #elif #endif

#include<stdio.h>
#include<conio.h>
#define NUM 50 
void main()
{
#if (NUM == 50)
	printf("Fifty");
#elif (NUM == 100)
	printf("Hundred");
#elif (NUM == 600)
	printf("Six hundred");
#else printf("Num is anything");

#endif 
	getch();
}