#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float pTax(int w)
{//w�ǹ���
	float ptaxmoney;//��������˰
	float tax[5] = { 0.0,0.03,0.1,0.2,0.25 };//��������˰�� 
	if (w <= 5000)
	{
		ptaxmoney = w * tax[0];
	}
	if (w > 5000 && w <= 8000)
	{
		ptaxmoney = (w - 5000) * tax[1];
	}
	if (w > 8000 && w <= 12000)
	{
		ptaxmoney = (8000 - 5000) * tax[1] + (w - 8000) * tax[2];
	}
	if (w > 12000 && w <= 25000)
	{
		ptaxmoney = (8000 - 5000) * tax[1] + (12000 - 8000) * tax[2] + (w - 12000) * tax[3];
	}
	if (w > 25000)
	{
		ptaxmoney = (8000 - 5000) * tax[1] + (12000 - 8000) * tax[2] + (25000 - 12000) * tax[3] + (w - 25000) * tax[4];
	}
	return ptaxmoney;
}
int main(void)
{
	int wage;
	double tax;
	scanf("%d", &wage);//����һ���Ǹ�����
	while (wage < 0) {
		printf("������һ���Ǹ�����\n:");
		scanf("%d", &wage);
	}
	printf("%.2f", pTax(wage));
}
