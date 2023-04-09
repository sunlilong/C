#define _CRT_SECURE_NO_WARNINGS
//循环语句
//写代码--一万行
#include <stdio.h>

int main()
{
    int line = 0;
    while (line < 10000)
    {
        printf("写代码:%d\n", line);
        line++;
    }
    if (line == 10000)
    {
        printf("有前途\n");
    }
    return 0;
}