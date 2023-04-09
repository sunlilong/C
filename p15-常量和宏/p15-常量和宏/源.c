#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//define 预处理指令
//define定义符号
#define MAX 1000
#define ADD(x,y) (x+y)
int main()
{
    printf("%d\n", MAX);

    //define 定义宏
    printf("%d\n", 4 * ADD(2, 3));

    return 0;
}