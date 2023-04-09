#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 10000
//常量
//1、字面常量
//123
//a
//abcdef
//2、const修饰的常变量
//3、#difine  定义的标识符常量
//4、枚举常量
//可以一一列举的常量
//性别
enum Sex//enum为枚举关键字，类型为Sex
{
    //这种枚举类型的变量的未来可能取值
    //枚举常量
    MALE = 3,//赋初值
    FEMALE,
    SECRET
};
int main()
{
    const int a = 10;//a为常变量 - 具有常属性（不能被改变的属性）
    //a = 20;
    printf("a = %d\n", a);//20
    int b = max;
    printf("%d\n", b);
    //MALE = 3;//err
    enum Sex s = MALE;
    printf("%d\n", MALE);
    printf("%d\n", FEMALE);
    printf("%d\n", SECRET);

    return 0;
}