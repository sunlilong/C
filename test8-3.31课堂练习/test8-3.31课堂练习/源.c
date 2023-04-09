#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	int i=0;
	int j=0;
	while (i<10)
	{
		j=0;
		while (j<6)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	//三行 星
	*/


	/*
	int i=1;
	int j=0;
	while (i<4)
	{
		j=0;
		while (j<i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	//三角 星
	*/

	/*
	int i=1;
	int j=0;
	while (i<4)
	{
		j=1;
		while (j<=i)
		{
			printf("%d",j);
			j++;
		}
		printf("\n");
		i++;
	}
	//三角 数字
	*/


	/*
	int i=1;
	int j=0;
	while (i<4)
	{
		j=1;
		while (j<=2*i-1)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	//三行 奇数星
	*/

	/*
	int i=1;
	int j=0;
	while (i<=9)
	{
		j=1;
		while (j<=i)
		{
			printf("%d*%d=%d\t",i,j,i*j);
			j++;
		}
		printf("\n");
		i++;
	}
	//乘法口诀表
	*/

	/*
	int i=1;
	int j=1;
	int a=9;
	int b=1;
	while (i<10)
	{
		j=1;
		while (j<=2*i-1)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}//1-10
	while (a>0)
	{
		b=0;
		while (b<2*a-1)
		{
			//printf("%d ",b);
			printf("*");
			b++;
		}
		printf("\n");
		a--;
	}//9-1
	//倒三角 星
	*/

	return 0;

}
