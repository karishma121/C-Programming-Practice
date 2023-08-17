// #if #endif 

#include<stdio.h>
#include<conio.h>
#define BAL 5000
void main()
{
	int amt;
	printf("Enter the amount you want to withdraw");
	scanf("%d", &amt);
#if (amt < BAL)
	printf("Yehh.... you can withdraw amount");
#endif
	getch();
}



