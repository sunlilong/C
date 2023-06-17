#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int data[10];
	printf("请输入数据：\n");
	int i, j;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &data[i]);	//输入数据 
	}

	for (i = 0; i < 10; i++)  //采用双重循环 
	{
		for (j = 0; j < 10 - 1 - i; j++)
		{
			if (data[j] > data[j + 1])     //这里默认采用升序来排列 
			{
				int temp;        //定义一个临时值来存储数据，以此来达到交换数值的目的
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}

	printf("排序好的数组为：\n");
	for (i = 0; i < 10; i++)    //用for循环来遍历并输出排序完成的数组 
	{
		printf("%d ", data[i]);
	}
	return 0;
}