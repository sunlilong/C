#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	char a;
	scanf("%c", &a);
	if (a >= 65 && a <= 90)
	{
		printf("��д��ĸ\n");
	}
	else
	{
		if (a >= 97 && a <= 122)
		{
			printf("Сд��ĸ\n");
		}
		else
		{
			if (a >= 48 && a <= 57)
			{
				printf("����\n");
			}
			else
			{
				printf("����\n");
			}
		}
	}
	return 0;
}
