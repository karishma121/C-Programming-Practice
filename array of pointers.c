// Array of pointers row size is known by column size is not known

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()				// not desire o/p
{
	int *ptr[3];
	int col, i, j;
	printf("Enter how many column you wants");
	scanf("%d", &col);
	for(i=0;i<3;i++)
	{
		for(j=0;j<col;j++)
		{
			ptr[i]=(int*)malloc(col*sizeof(int));
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element");
			scanf("%d",&ptr[i][j]);
		}
	}
	printf("\n Dsipaly array element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t", ptr[i][j]);
	}
	printf("\n");
}
	free(ptr);
	getch();
}

