#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int menu()
{
	printf("******欢迎光临1629酒家******\n");
	printf("	1、油闷大虾		48/份\n");
	printf("	2、干煸豆角		20/份\n");
	printf("	3、水煮鱼		38/份\n");
	printf("	4、爆炒獐翎鳝		88/份\n");
	return 0;
}
int diancan(int a)
{
	switch (a)
	{
		case 0 :printf("点菜结束\n"); break;
		case 1 :printf("油闷大虾\n"); break;
		case 2 :printf("干煸豆角\n"); break;
		case 3 :printf("水煮鱼\n"); break;
		case 4 :printf("爆炒獐翎鳝\n"); break;
		default:printf("编码出错\n"); break;
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
	printf("请点菜：\n");
	int i = 0;
	int j=1;
	int sum = 0;
	for (i = 0; j != 0; i++)
	{
		scanf("%d", &j);
		diancan(j);
		sum += danjia(j);
	}
	printf("确认菜单：\n");

	j = 100;
	for (i = 0; j != 0; i++)
	{
		scanf("%d", &j);
		diancan(j);
		sum += danjia(j);
	}
	printf("点了%d个菜\n", i - 1);
	printf("共计为：%d元\n", sum);
	return 0;
}