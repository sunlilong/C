#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
} //���庯��

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    //int sum = num1 + num2;
    //�����ķ�ʽ���
    int sum = Add(num1, num2);

    printf("%d\n", sum);

    //����
    //int a=1;
    //int b=2;
    //int c=3;
    //int d=4;
    //��������
    //һ����ͬ���͵�Ԫ�صļ���
    //ʮ������1-10
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    //int arrch[5] = {'a','b','c'};//����ȫ��ʼ����ʣ��Ĭ��Ϊ0
    //�������±�������
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", arr[i]);
        i++;
    }

    return 0;

}