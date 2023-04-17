#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int one, two, three, four, five,sum;
	do
	{
		printf("请输入选择题成绩：");
		scanf("%d", &one);
	} while (one < 0 || one>40 || one % 2);

	do
	{
		printf("请输入填空题成绩：");
		scanf("%d", &two);
	} while (two < 0 || two>10);

	do
	{
		printf("请输入程序输出题成绩：");
		scanf("%d", &three);
	} while (three < 0 || three>20);

	do
	{
		printf("请输入流程图题成绩：");
		scanf("%d", &four);
	} while (four < 0 || four>6);

	do
	{
		printf("请输入程序题成绩：");
		scanf("%d", &five);
	} while (five < 0 || five>24);

	sum = one + two + three + four + five;
	printf("你的总成绩为%d\n", sum);
	return 0;
}