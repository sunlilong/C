#define _CRT_SECURE_NO_WARNINGS
//ѡ�����
#include <stdio.h>

int main()
{
    int a;
    printf("��ѧϰ��\n");
    printf("��ѧ�Ŀ�1 ����Ŀ�0:");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("��ǰ;\n");
    }
    else
    {
        printf("�ؼ�������ɣ�\n");
    }
    return 0;
}