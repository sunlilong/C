#define _CRT_SECURE_NO_WARNINGS
//转义字符--转变了它原来的意思
#include <stdio.h>

int main()
{
    printf("D:\c-code\hello world\n");
    printf("ab\ncd\n");
    printf("(are you ok??)\n"); //??)-->]  三字母词
    printf("%s\n", "\"");
    printf("%s\n", "'");
    //printf ("\a");//警告，蜂鸣
    printf("%c\n", '\130');
    //X的ascll码值是88
    printf("%c\n", '\30');
    printf("%s\n", "\30");
    return 0;
}