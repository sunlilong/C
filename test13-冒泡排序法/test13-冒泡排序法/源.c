#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int data[10];
	printf("���������ݣ�\n");
	int i, j;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &data[i]);	//�������� 
	}

	for (i = 0; i < 10; i++)  //����˫��ѭ�� 
	{
		for (j = 0; j < 10 - 1 - i; j++)
		{
			if (data[j] > data[j + 1])     //����Ĭ�ϲ������������� 
			{
				int temp;        //����һ����ʱֵ���洢���ݣ��Դ����ﵽ������ֵ��Ŀ��
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}

	printf("����õ�����Ϊ��\n");
	for (i = 0; i < 10; i++)    //��forѭ�������������������ɵ����� 
	{
		printf("%d ", data[i]);
	}
	return 0;
}