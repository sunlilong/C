#define _CRT_SECURE_NO_WARNINGS
//C语言提供的关键字
//1、C语言提供的，不能自己创建关键字
//2、关键字不能做变量名

//auto--是自动的，每个局部变量都是auto修饰的
#include <stdio.h>

int main()
{
    auto int a = 0;//自动创建LJGFZ0，自动销毁的 -- 自动变量
    //auto省略掉了
    //auto 新的c语言语法中也有其他用法 - 暂时不考虑

    //extern是用来声明外部符号的
    //register--寄存器关键字
    register int num = 100;//建议num的值存在寄存器中
    //signed    有符号的       10  -20
    //unsigned   无符号的
    //static  静态的
    //union  联合体（共用体）
    //void  无--空
    return 0;
}