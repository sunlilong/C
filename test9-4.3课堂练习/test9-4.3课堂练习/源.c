#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	/*
	int sum = 0;
	int i = 0;
	int n = 0;
	printf ("������һ������");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum = sum+i;
	}
	printf("sum = %d\n",sum);
	//1-n���
	*/

	/*
	int sum = 0;
	int i = 0;
	int n = 0;
	for (i=1;i<=99;i=i+2)
	{
		sum = sum+i;
	}
	printf("sum = %d\n",sum);
	//����1-99
	*/

	/*
	char c1 = 'a',c2;
	while (c1<='c')
	{
		c2 = 'x';
		while (c2<='z')
		{
			printf ("%c vs %c\n",c1,c2);
			c2++;
		}
		c1++;
	}
	//�������-while
	*/

	/*
	char c1,c2;
	for (c1 = 'a';c1<='c';c1++)
	{
		//c2 = 'x';
		for (c2 = 'x';c2<='z';c2++)
		{
			printf ("%c vs %c\n",c1,c2);
		}
	}//�������-for
	*/

	/*
	int a,a1,a2,a3;
	for (a=100;a<=999;a++)
	{
		a1=a/100;
		a2=a%100/10;
		a3=a%10;
		if(pow(a1,3)+pow(a2,3)+pow(a3,3)==a)
		{
			printf("ˮ�ɻ���Ϊ��%d\n",a);

		}
	}//ˮ�ɻ���
	*/

	/*
	int i,j;
	for (i=1;i<=9;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%d*%d=%d\t",i,j,i*j);
		}
	printf("\n");
	}//�˷��ھ���-for
	*/
	return 0;
}
