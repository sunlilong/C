#define _CRT_SECURE_NO_WARNINGS
//��������
//������������+ - * / %
//��λ��������>>   <<
#include <stdio.h>

int main()
{
    int a = 9 / 2;//��������Ϊ������ʹ�õ�����������
    printf("%d\n", a);
    float b = 9 / 2.0;
    printf("%f\n", b);
    int c = 9 % 2;//ȡģ
    printf("%d\n", c);

    //��λ
    int d = 2;
    int e = d << 1;//���Ʋ����� -- �ƶ����Ƕ�����λ  //a-2
    printf("%d\n", e);

    //λ��������&��λ��  |��λ��  ^��λ���

    //��ֵ�������� 
    int f = 2;
    f += 3;
    printf("%d\n", f);

    //��Ŀ������
    int g = 10;//C�����0��ʾ�٣���0��ʾ��
    printf("%d\n", !g);//��-->�棬����涨Ϊ1
    printf("%d\n", -g);//-Ϊ��ֵ��+Ϊ��ֵ

/*     if (a)
    {
        //���aΪ�棬����
    }

    if (!a)
    {
        ���aΪ�٣�����
    } */

    //sizeof��һ��������
    //�������ͻ��߱����Ĵ�С
    int h = 10;
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof h);//sizeof����������ſ�ʡ�ԣ�����������

    int arr[10] = {};
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr[0]));
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", sz);

    return 0;
}