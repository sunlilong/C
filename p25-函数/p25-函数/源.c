#define _CRT_SECURE_NO_WARNINGS
//自定义函数
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world!";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}//strcpy函数复习


//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入第一个数：");
//	scanf("%d", &x);
//	printf("请输入第二个数：");
//	scanf("%d", &y);
//	int max = get_max(x, y);
//	printf("最大值为：%d\n", max);
//	return 0;
//}//获取最大值


//void swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d，b = %d\n", a, b);
//	swap1(a, b);
//	printf("交换前：a = %d，b = %d\n", a, b);
//	return 0;
//}//因四个变量为不同的空间，故，此程序错误


//void swap2(int *pa, int *pb)//*pa和*pb为形式参数 - 形参
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d，b = %d\n", a, b);
//	swap2(&a, &b);//a, b为实际参数 - 实参
//	printf("交换前：a = %d，b = %d\n", a, b);
//	return 0;
//}//交换两个数，此程序正确