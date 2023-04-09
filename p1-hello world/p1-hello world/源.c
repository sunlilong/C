#define _CRT_SECURE_NO_WARNINGS
//如何写代码：
//1、写主函数（main函数）
//2、执行？从主函数第一行开始执行

//需求：在屏幕上打印hello world
//使用printf函数
//使用printf函数，需先声明（引用头文件：stdio.h）
#include <stdio.h>//包含头文件

int main()
{
    printf("hello world\n");//printf：库函数：输出，在频幕上打印信息
    return 0;
}



//顺序
//创建一个项目
//创建一个源文件
//写代码
//编译 + 链接 + 运行代码