#define _CRT_SECURE_NO_WARNINGS
//��������Щ���ݿɸı䣬��Щ���ݲ��ܸı�
//���ܸı�--����
//�ܸı�--����

#include <stdio.h>

//ȫ�ֱ��� - {}�ⶨ��ı���

int main()
{
    int age = 20;//�Ƽ�����ø�һ��ֵ
    //����һ������
    //intΪ����--����
    //ageΪ������
    //�Ⱥ�Ϊ��ֵ������Ϊ��ֵ
    //��ɣ����� ��������//���е����Ƽ�
    double weight = 99.99;//�ֲ����� - {}�ڶ���ı���
    age = age + 1;
    printf("%d\n", age);
    weight = weight - 10.12;
    printf("%lf\n", weight);
    //�����������ĺ�
    int a, b, sum;
    scanf("%d%d", &a, &b);//scanfΪ���뺯��
    sum = a + b;
    printf("sum = %d", sum);
}

//%d - ����
//%f - float
//%lf - double
//���ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ�����
//�����齫�ֲ�������ȫ�ֱ�������д��һ����