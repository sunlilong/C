#define _CRT_SECURE_NO_WARNINGS
//C中字符串就是一串字符--用双引号括起来的一串字符
#include <stdio.h>
#include <string.h>

int main()
{
    //字符数组--数组是一组相同类型的元素（数）
    //字符串在结尾隐藏了一个\0的字符
    //\0是字符串的结束标志
    //"abcdef";
    //char arr[] = "hello";
    char arr1[] = "abc";
    char arr2[] = { 'a','b','c' };

    //求字符串长度
    int len = strlen("abc");//string length
    printf("%d\n", len); //\0作为字符串结尾标志存在，计算字符长度是不算在内
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));//随机值
     //打印字符串
    printf("%s\n", arr1);
    printf("%s\n", arr2);
}