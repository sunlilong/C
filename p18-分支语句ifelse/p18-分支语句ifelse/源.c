#define _CRT_SECURE_NO_WARNINGS
//程序化的程序设计语言
//顺序结构
//选择结构：if，switch
//循环结构：while，for，do while
//c语言中由一个分号隔开的就是语句
//c语言如何表示真和假
//非0就是真
//0就是假
#include <stdio.h>

//int main()
//{
//	//在c语言中，由;隔开的就是语句
//	printf("hehe\n");
//	3 + 5;
//	;//空语句
//	//c语言中非0为真，0为假
//
//	int age = 20;
//
//	//if (age >= 18)
//	//	printf("成年\n");//单分支
//
//	if (age >= 18)
//		printf("成年\n");
//	else
//	{
//		printf("未成年\n");
//	}//代码块
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("壮年\n");
//	else if (age >= 40 && age < 60)
//		printf("中年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老不死");//多分支
//
//
//	int a = 0;
//	int b = 1;
//	if (a == 1)
//	{
//		if (b == 1)
//			printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}//悬空else问题
//	//else和最近的if匹配
//
//	//代码风格-
//	//《高质量c/c++编程》
//	return 0;
//}


//int test()
//{
//	if (1)
//		return 0;
//
//	printf("hehe\\n");
//	return 1;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}//1-100奇数

