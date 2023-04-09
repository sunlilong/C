#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, sum = 0, i = 1;
	while (i <= 5)
	{
		do
		{
			printf("ÇëÊäÈë·ÖÊý£º");
			scanf("%d", &a);
		} while (a < 0 || a>100);
		sum += a;
		i++;
	}
	printf("sum=%d", sum);
	return 0;
}