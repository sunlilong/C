#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0;
    printf("%d\n", ~a);
    //��λȡ��         λ--������λ��1���0��0���1

    int b = 10;
    int c = ++b;//ǰ��++  ��++����ʹ��
    printf("%d\n", c);//11
    printf("%d\n", b);//11
    int d = b++;//����++  ��ʹ�ã���++
    printf("%d\n", d);
    printf("%d\n", b);

    /*     int a = 1;
        int b = (++a) + (++a) + (++a);
        printf ("%d\n",b);       //���Ƽ��о� */

    int e = (int)3.14;
    printf("%d\n", e);//ǿ��ת������

    int f = 10;
    int g = 20;
    int h = f && g;
    printf("%d\n", h);//����һ��Ϊ�٣�ֵΪ��

    int i = f || g;
    printf("%d\n", h);//����ͬʱΪ��Ϊ�٣�ֵΪ��

    //��������������Ŀ��������
    //�� ��
    //exp1 ��exp2 ��exp3
    //exp1������exp2���㣬�������ʽ�Ľ���ǣ�exp2�Ľ��
    //exp1��������exp3���㣬�������ʽ�Ľ���ǣ�exp3�Ľ��
    int j, k, max;
    scanf("%d", &j);
    scanf("%d", &k);
    max = j > k ? j : k;
    printf("%d\n", max);
    /* if (j>k)
        max = j;
    else
        max = k; */


    int l = 0;
    int m = 3;
    int n = 5;
    int o = (l = m + 2, n = l - 4, m = n + 2);
    printf("%d\n", o);
    //���ű��ʽ�����Ÿ�����һ�����ʽ
    //�������ʽ�Ľ�������һ�����ʽ���

    //[]�±����ò�����
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    printf("%d\n", arr[5]);

    //�������ò�����
    //���ú���ʱ�������������()���Ǻ������ò�����

}