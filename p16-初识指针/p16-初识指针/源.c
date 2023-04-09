#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /*     int a = 10;//a在内存中要分配空间 - 4个字节
        printf ("%p\n",&a);//%p专门用来打印地址的
        int*pa = &a;//pa是用来存放地址的，在c语言中pa叫指针变量
        printf("%p\n",pa);

        //*说明pa是指针变量
        //int 说明pa执行的对象是指针类型的

        char b = 'w';
        char* pc = &b;
        printf("%p\n",pc);
        int*pb = &pb;
        printf("%p\n",pb); */

        /*     int x = 100;
            int y = 10;
            int *px = &x;
            int *py = &y;
            printf("%d\n",x);
            printf("%d\n",y);
            printf("%d,%d",*px,*py); */

    int m = 10;
    int* pm = &m;
    *pm = 20;
    printf("%d\n", m);
    return 0;
}