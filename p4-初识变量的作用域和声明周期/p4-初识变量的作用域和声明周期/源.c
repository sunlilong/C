#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//作用域
//哪里起作用哪里就是作用域
//局部变量的作用域，就是变量所在的局部范围
//全局变量的使用范围:整个工程 //需声明
//extern：声明变量
//

int b = 1;//全局变量

int main()
{
    printf("1:%d\n", b);
    printf("sunlilong\n");
    int a = 100;
    printf("2:%d\n", b);
    printf("%d\n", a);
    printf("3:%d\n", b);
    return 0;
}

//生命周期
//变量的生命周期：变量创建和销毁之间的时间段
//
//局部变量的生命周期：进局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期