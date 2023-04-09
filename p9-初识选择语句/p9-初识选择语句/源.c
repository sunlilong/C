#define _CRT_SECURE_NO_WARNINGS
//选择语句
#include <stdio.h>

int main()
{
    int a;
    printf("想学习吗？\n");
    printf("想学的扣1 不想的扣0:");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("有前途\n");
    }
    else
    {
        printf("回家卖红薯吧！\n");
    }
    return 0;
}