#define _CRT_SECURE_NO_WARNINGS
//�Զ��庯��
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world!";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}//strcpy������ϰ


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
//	printf("�������һ������");
//	scanf("%d", &x);
//	printf("������ڶ�������");
//	scanf("%d", &y);
//	int max = get_max(x, y);
//	printf("���ֵΪ��%d\n", max);
//	return 0;
//}//��ȡ���ֵ


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
//	printf("����ǰ��a = %d��b = %d\n", a, b);
//	swap1(a, b);
//	printf("����ǰ��a = %d��b = %d\n", a, b);
//	return 0;
//}//���ĸ�����Ϊ��ͬ�Ŀռ䣬�ʣ��˳������


//void swap2(int *pa, int *pb)//*pa��*pbΪ��ʽ���� - �β�
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
//	printf("����ǰ��a = %d��b = %d\n", a, b);
//	swap2(&a, &b);//a, bΪʵ�ʲ��� - ʵ��
//	printf("����ǰ��a = %d��b = %d\n", a, b);
//	return 0;
//}//�������������˳�����ȷ