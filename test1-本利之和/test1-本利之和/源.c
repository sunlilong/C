#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int year = 0;
	int money = 0;
	float lv = 0.0225;
	float benli = 0;
	//float lixi = 0;
	printf("��������ݣ�");
	scanf("%d", &year);
	printf("�����뱾��");
	scanf("%d", &money);
	float lixi = 1000 * pow((1 + lv), year);

	printf("����֮��Ϊ��%fԪ\n", lixi);
	return 0;
}
