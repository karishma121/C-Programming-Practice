// Accepting and displaying 2D array element by user

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[3][3], i, j;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3;j++)
		{
			printf ("Enter values");
			scanf("%d", arr[i][j]);
		}
	}
	printf("\n Display element \n");
	for (i=0;i<3;i++)
	{
		for (j=0; j<3; j++)
		{
		printf("display element = %d \t", arr[i][j]);
		}
	printf("\n");
	}
getch();		// not given accepted output

}