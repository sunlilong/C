#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��������Ϸ

void menu()
{
	printf("********************************\n");
	printf("********    1.play    **********\n");
	printf("********    0.exit    **********\n");
	printf("********************************\n");
}

void game()
{
	int guess = 0;
	int count = 5;
	//1.���������

	int r = rand() % 100 + 1;
	//printf("%d\n", r);

	//2.������
	while (count)
	{
		printf("������%d�β����ֻ���\n", count);
		printf("�������->");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("��С��\n");
		}
		else if (guess > r)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("������ʧ�ܣ���ȷ������%d\n", r);
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("\n");
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while (input);
	return 0;
}