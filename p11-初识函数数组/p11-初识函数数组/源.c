#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
} //定义函数

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    //int sum = num1 + num2;
    //函数的方式解决
    int sum = Add(num1, num2);

    printf("%d\n", sum);

    //数组
    //int a=1;
    //int b=2;
    //int c=3;
    //int d=4;
    //…………
    //一种相同类型的元素的集合
    //十个整形1-10
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    //int arrch[5] = {'a','b','c'};//不完全初始化，剩余默认为0
    //数组用下标来访问
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", arr[i]);
        i++;
    }

    return 0;

}