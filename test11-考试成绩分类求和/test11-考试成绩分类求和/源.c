#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int one, two, three, four, five,sum;
	do
	{
		printf("������ѡ����ɼ���");
		scanf("%d", &one);
	} while (one < 0 || one>40 || one % 2);

	do
	{
		printf("�����������ɼ���");
		scanf("%d", &two);
	} while (two < 0 || two>10);

	do
	{
		printf("��������������ɼ���");
		scanf("%d", &three);
	} while (three < 0 || three>20);

	do
	{
		printf("����������ͼ��ɼ���");
		scanf("%d", &four);
	} while (four < 0 || four>6);

	do
	{
		printf("�����������ɼ���");
		scanf("%d", &five);
	} while (five < 0 || five>24);

	sum = one + two + three + four + five;
	printf("����ܳɼ�Ϊ%d\n", sum);
	return 0;
}