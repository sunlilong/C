#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	printf("�������Ʒ�ķ���\n");
	scanf("%d", &num);
	switch (num / 10)
	{
	case 10:
	case 9: printf("��Ʒ�ȼ�Ϊ A\n"); break;
	case 8: printf("��Ʒ�ȼ�Ϊ B\n"); break;
	case 7:
	case 6: printf("��Ʒ�ȼ�Ϊ C\n"); break;
	default:printf("��Ʒ�ȼ�Ϊ D\n������ֵ����\n"); break;
	}
	return 0;
}