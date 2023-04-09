#define _CRT_SECURE_NO_WARNINGS
//操作符：
//算数操作符：+ - * / %
//移位操作符：>>   <<
#include <stdio.h>

int main()
{
    int a = 9 / 2;//除号两边为整数，使用的是整数除法
    printf("%d\n", a);
    float b = 9 / 2.0;
    printf("%f\n", b);
    int c = 9 % 2;//取模
    printf("%d\n", c);

    //移位
    int d = 2;
    int e = d << 1;//左移操作符 -- 移动的是二进制位  //a-2
    printf("%d\n", e);

    //位操作符：&按位与  |按位或  ^按位异或

    //赋值操作符： 
    int f = 2;
    f += 3;
    printf("%d\n", f);

    //单目操作符
    int g = 10;//C语言里，0表示假，非0表示真
    printf("%d\n", !g);//假-->真，结果规定为1
    printf("%d\n", -g);//-为负值，+为正值

/*     if (a)
    {
        //如果a为真，做事
    }

    if (!a)
    {
        如果a为假，做事
    } */

    //sizeof是一个操作符
    //计算类型或者变量的大小
    int h = 10;
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof h);//sizeof求变量后括号可省略，求类型则不行

    int arr[10] = {};
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr[0]));
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", sz);

    return 0;
}