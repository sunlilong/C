#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//猜数字游戏

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
	//1.生成随机数

	int r = rand() % 100 + 1;
	//printf("%d\n", r);

	//2.猜数字
	while (count)
	{
		printf("您还有%d次猜数字机会\n", count);
		printf("请猜数字->");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("猜数字失败，正确的数是%d\n", r);
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
	return 0;
}