#define _CRT_SECURE_NO_WARNINGS
//ѭ�����
//д����--һ����
#include <stdio.h>

int main()
{
    int line = 0;
    while (line < 10000)
    {
        printf("д����:%d\n", line);
        line++;
    }
    if (line == 10000)
    {
        printf("��ǰ;\n");
    }
    return 0;
}