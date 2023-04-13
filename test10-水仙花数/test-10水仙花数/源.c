#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, a1, a2, a3;
	for (a = 100; a <= 999; a++)
	{
		a1 = a / 100;
		a2 = a % 100 / 10;
		a3 = a % 10;
		if (pow(a1, 3) + pow(a2, 3) + pow(a3, 3) == a)
		{
			printf("水仙花数为：%d\n", a);

		}
	}
	return 0;
}
