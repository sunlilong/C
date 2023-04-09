#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int year = 0;
	int money = 0;
	float lv = 0.0225;
	float benli = 0;
	//float lixi = 0;
	printf("请输入年份：");
	scanf("%d", &year);
	printf("请输入本金：");
	scanf("%d", &money);
	float lixi = 1000 * pow((1 + lv), year);

	printf("本利之和为：%f元\n", lixi);
	return 0;
}
