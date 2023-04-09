#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	char a;
	scanf("%c", &a);
	if (a >= 65 && a <= 90)
	{
		printf("大写字母\n");
	}
	else
	{
		if (a >= 97 && a <= 122)
		{
			printf("小写字母\n");
		}
		else
		{
			if (a >= 48 && a <= 57)
			{
				printf("数字\n");
			}
			else
			{
				printf("其他\n");
			}
		}
	}
	return 0;
}
