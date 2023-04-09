#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	printf("请输入产品的分数\n");
	scanf("%d", &num);
	switch (num / 10)
	{
	case 10:
	case 9: printf("产品等级为 A\n"); break;
	case 8: printf("产品等级为 B\n"); break;
	case 7:
	case 6: printf("产品等级为 C\n"); break;
	default:printf("产品等级为 D\n或输入值错误\n"); break;
	}
	return 0;
}