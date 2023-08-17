// write a prograsm to write mixdata to file and display that mixed data to sceen

#include<stdio.h>
#include<conio.h>

	typedef struct
	{
		int roll_no;
		char m[10];
		float per;
	}student;
	void main()
	{
		FILE *fp;
		student s;
		printf("Enter data \n");
		printf("Enter roll no \n");
		scanf("%d", &s.roll_no);
		printf("Enter name\n");
		scanf("%s",s.m);
		printf("Enter percentage\n");
		scanf("%f", &s.per);
		fp=fopen("mixdata.txt", "w");
		fprintf(fp,"roll_no=%d \n Name=%c \n percentage=%f \n", s.roll_no, s.m, s.per);
		fclose(fp);
		fp=fopen("mixdata.txt", "r");
		fscanf(fp,"roll_no=%d \n Name=%c \n percentage=%f \n", &s.roll_no, &s.m, &s.per);
		fclose(fp);
		getch();
	}

