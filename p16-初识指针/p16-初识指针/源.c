#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /*     int a = 10;//a���ڴ���Ҫ����ռ� - 4���ֽ�
        printf ("%p\n",&a);//%pר��������ӡ��ַ��
        int*pa = &a;//pa��������ŵ�ַ�ģ���c������pa��ָ�����
        printf("%p\n",pa);

        //*˵��pa��ָ�����
        //int ˵��paִ�еĶ�����ָ�����͵�

        char b = 'w';
        char* pc = &b;
        printf("%p\n",pc);
        int*pb = &pb;
        printf("%p\n",pb); */

        /*     int x = 100;
            int y = 10;
            int *px = &x;
            int *py = &y;
            printf("%d\n",x);
            printf("%d\n",y);
            printf("%d,%d",*px,*py); */

    int m = 10;
    int* pm = &m;
    *pm = 20;
    printf("%d\n", m);
    return 0;
}