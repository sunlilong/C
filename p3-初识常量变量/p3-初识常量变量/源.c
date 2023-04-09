#define _CRT_SECURE_NO_WARNINGS
//生活中有些数据可改变，有些数据不能改变
//不能改变--常量
//能改变--变量

#include <stdio.h>

//全局变量 - {}外定义的变量

int main()
{
    int age = 20;//推荐，最好赋一个值
    //创建一个变量
    //int为类型--整型
    //age为变量名
    //等号为赋值，后面为数值
    //亦可：类型 变量名；//可行但不推荐
    double weight = 99.99;//局部变量 - {}内定义的变量
    age = age + 1;
    printf("%d\n", age);
    weight = weight - 10.12;
    printf("%lf\n", weight);
    //求两个整数的和
    int a, b, sum;
    scanf("%d%d", &a, &b);//scanf为输入函数
    sum = a + b;
    printf("sum = %d", sum);
}

//%d - 整型
//%f - float
//%lf - double
//当局部变量和全局变量名字冲突时，局部优先
//不建议将局部变量和全局变量名字写成一样的