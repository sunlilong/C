#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a, b;

	do
	{
		scanf("%c%c", &a, &b);
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

	} while (a != 35);

	return 0;
}