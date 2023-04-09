#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0;
    printf("%d\n", ~a);
    //按位取反         位--二进制位，1变成0，0变成1

    int b = 10;
    int c = ++b;//前置++  先++，后使用
    printf("%d\n", c);//11
    printf("%d\n", b);//11
    int d = b++;//后置++  先使用，后++
    printf("%d\n", d);
    printf("%d\n", b);

    /*     int a = 1;
        int b = (++a) + (++a) + (++a);
        printf ("%d\n",b);       //不推荐研究 */

    int e = (int)3.14;
    printf("%d\n", e);//强制转换类型

    int f = 10;
    int g = 20;
    int h = f && g;
    printf("%d\n", h);//其中一个为假，值为假

    int i = f || g;
    printf("%d\n", h);//两个同时为假为假，值为假

    //条件操作符（三目操作符）
    //？ ：
    //exp1 ？exp2 ：exp3
    //exp1成立，exp2计算，整个表达式的结果是，exp2的结果
    //exp1不成立，exp3计算，整个表达式的结果是，exp3的结果
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
    //逗号表达式：逗号隔开的一串表达式
    //整个表达式的结果是最后一个表达式结果

    //[]下标引用操作符
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    printf("%d\n", arr[5]);

    //函数调用操作符
    //调用函数时，函数名后面的()就是函数调用操作符

}