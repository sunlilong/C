#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int menu()
{
	printf("******��ӭ����1629�Ƽ�******\n");
	printf("	1�����ƴ�Ϻ		48/��\n");
	printf("	2�����Զ���		20/��\n");
	printf("	3��ˮ����		38/��\n");
	printf("	4�����������		88/��\n");
	return 0;
}
int diancan(int a)
{
	switch (a)
	{
		case 0 :printf("��˽���\n"); break;
		case 1 :printf("���ƴ�Ϻ\n"); break;
		case 2 :printf("���Զ���\n"); break;
		case 3 :printf("ˮ����\n"); break;
		case 4 :printf("���������\n"); break;
		default:printf("�������\n"); break;
	}
	return 0;
}
int danjia(int a)
{
	int price;
	switch (a)
	{
		case 1:price = 48; break;
		case 2:price = 20; break;
		case 3:price = 38; break;
		case 4:price = 88; break;
		default :price = 0;
	}
	return price;
}

int main()
{
	menu();
	printf("���ˣ�\n");
	int i = 0;
	int j=1;
	int sum = 0;
	for (i = 0; j != 0; i++)
	{
		scanf("%d", &j);
		diancan(j);
		sum += danjia(j);
	}
	printf("ȷ�ϲ˵���\n");

	j = 100;
	for (i = 0; j != 0; i++)
	{
		scanf("%d", &j);
		diancan(j);
		sum += danjia(j);
	}
	printf("����%d����\n", i - 1);
	printf("����Ϊ��%dԪ\n", sum);
	return 0;
}