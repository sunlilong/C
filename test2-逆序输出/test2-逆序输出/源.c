#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a1, a2, a3, a4;
	printf("请输入一个四位数：");
	scanf("%d", &n);
	a1 = n / 1000;
	a2 = n % 1000 / 100;
	a3 = n % 100 / 10;
	a4 = n % 10;
	printf("逆序结果为：%d%d%d%d\n", a4, a3, a2, a1);
}
